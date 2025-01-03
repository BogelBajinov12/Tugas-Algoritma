#include <iostream>
using namespace std;

class MesinPemarutKelapa {
private:
    bool status; // Menyimpan status mesin: ON (true) atau OFF (false)
    int kapasitas; // Kapasitas kelapa yang dapat dimasukkan sekaligus
    int kelapaDalamMesin; // Jumlah kelapa yang saat ini berada di mesin
    int kelapaTerparut; // Total kelapa yang sudah diparut

public:
    // Konstruktor
    MesinPemarutKelapa(int kapasitasMesin) {
        status = false;
        kapasitas = kapasitasMesin;
        kelapaDalamMesin = 0;
        kelapaTerparut = 0;
    }

    // 1. Nyalakan mesin
    void nyalakanMesin() {
        if (!status) {
            status = true;
            cout << "Mesin pemarut kelapa telah dinyalakan." << endl;
        } else {
            cout << "Mesin sudah dalam keadaan nyala." << endl;
        }
    }

    // 2. Matikan mesin
    void matikanMesin() {
        if (status) {
            status = false;
            cout << "Mesin pemarut kelapa telah dimatikan." << endl;
        } else {
            cout << "Mesin sudah dalam keadaan mati." << endl;
        }
    }

    // 3. Masukkan kelapa ke dalam mesin
    void masukkanKelapa(int jumlah) {
        if (status) {
            if (jumlah + kelapaDalamMesin <= kapasitas) {
                kelapaDalamMesin += jumlah;
                cout << jumlah << " kelapa telah dimasukkan ke dalam mesin." << endl;
                cout << "Kelapa dalam mesin sekarang: " << kelapaDalamMesin << endl;
            } else {
                cout << "Kapasitas mesin tidak mencukupi. Kapasitas maksimal: " << kapasitas << endl;
            }
        } else {
            cout << "Mesin belum dinyalakan. Nyalakan mesin terlebih dahulu." << endl;
        }
    }

    // 4. Parut kelapa
    void parutKelapa() {
        if (status) {
            if (kelapaDalamMesin > 0) {
                cout << "Memarut " << kelapaDalamMesin << " kelapa..." << endl;
                kelapaTerparut += kelapaDalamMesin;
                kelapaDalamMesin = 0; // Reset jumlah kelapa dalam mesin
                cout << "Semua kelapa telah diparut!" << endl;
            } else {
                cout << "Tidak ada kelapa di dalam mesin. Masukkan kelapa terlebih dahulu." << endl;
            }
        } else {
            cout << "Mesin belum dinyalakan. Nyalakan mesin terlebih dahulu." << endl;
        }
    }

    // 5. Cek status mesin
    void cekStatus() const {
        cout << "Status mesin: " << (status ? "ON" : "OFF") << endl;
        cout << "Jumlah kelapa dalam mesin: " << kelapaDalamMesin << endl;
        cout << "Jumlah kelapa yang telah diparut: " << kelapaTerparut << " buah" << endl;
    }
};

int main() {
    cout << "Mesin Pemarut Kelapa" << endl;
    cout << "Kelompok:" << endl;
    cout << "1. Muhammad Khaidar Fakhri" << endl;
    cout << "2. Hisban Nazril Nurofidin" << endl;
    cout << "3. Muhammad Najib" << endl;
    cout << "------------------------------" << endl;

    MesinPemarutKelapa mesin(5); // Kapasitas mesin adalah 5 kelapa
    int pilihan;

    do {
        cout << "\nPilih operasi:" << endl;
        cout << "1. Nyalakan Mesin" << endl;
        cout << "2. Matikan Mesin" << endl;
        cout << "3. Masukkan Kelapa" << endl;
        cout << "4. Parut Kelapa" << endl;
        cout << "5. Cek Status Mesin" << endl;
        cout << "6. Keluar" << endl;
        cout << "Masukkan pilihan Anda (1-6): ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            mesin.nyalakanMesin(); // Langkah 1: Nyalakan mesin
            break;
        case 2:
            mesin.matikanMesin(); // Langkah 2: Matikan mesin
            break;
        case 3:
            int jumlah;
            cout << "Masukkan jumlah kelapa: ";
            cin >> jumlah;
            mesin.masukkanKelapa(jumlah); // Langkah 3: Masukkan kelapa
            break;
        case 4:
            mesin.parutKelapa(); // Langkah 4: Parut kelapa
            break;
        case 5:
            mesin.cekStatus(); // Langkah 5: Cek status mesin
            break;
        case 6:
            cout << "Terima kasih telah menggunakan mesin pemarut kelapa!" << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (pilihan != 6); // Program berjalan hingga pengguna memilih "Keluar"

    return 0;
}