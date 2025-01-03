#include <stdio.h>

// Fungsi untuk simulasi proses memarut kelapa
void memilihKelapa()
{
	printf("Memilih kelapa yang baik...\n");
}

void membersihkanKelapa()
{
	printf("Membersihkan kelapa dari kotoran...\n");
}

void potongKelapa()
{
	printf("Memotong kelapa menjadi dua bagian...\n");
}

void nyalakanMesin()
{
	printf("Mesin parut dinyalakan...\n");
}

void parutKelapa()
{
	printf("Kelapa diparut...\n");
	printf("Serutan kelapa jatuh ke wadah penampung...\n");
}

int main()
{
	printf("Proses Memarut Kelapa\n");
	printf("----------------------\n");

	memilihKelapa();
	membersihkanKelapa();
	potongKelapa();
	nyalakanMesin();
	parutKelapa();

	printf("Selesai.\n");
	return 0;
}
