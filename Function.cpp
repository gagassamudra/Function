#include <iostream>
#include <stdlib.h>
using namespace std;
int laki(int tinggi)
{
	int hasil;
	return hasil = (tinggi - 100) - ((tinggi - 100) * 0.1);
}
int perempuan(int tinggi)
{
	int hasil;
	return hasil = (tinggi - 100) - ((tinggi - 100) * 0.15);
}
int main()
{
	do 
	{
		system("cls");
		cout << "Program Menentukan Berat Badan Ideal Dengan Diketahuinya Tinggi" << endl << endl;
		system("pause");
		system("cls");
		cout << "Masukkan jenis kelamin" << endl << endl;
		int pilihkelamin;
		cout << "1. Laki-Laki \n2. Perempuan \n\n";
		cout << "Pilihan: ";
		cin >> pilihkelamin;
		if (pilihkelamin == 1)
		{
			system("cls");
			cout << "Anda memilih laki-laki" << endl << endl;
			system("pause");
			system("cls");
			cout << "Masukkan tinggi: ";
			int tinggi;
			cin >> tinggi;
			cout << "Jadi berat badannya idealnya adalah " << laki(tinggi) << endl << endl;
			system("pause");
			system("cls");
		}
		else if (pilihkelamin == 2)
		{
			system("cls");
			cout << "Anda Memilih Perempuan" << endl << endl;
			system("pause");
			system("cls");
			cout << "Masukkan Tinggi: ";
			int tinggi;
			cin >> tinggi;
			cout << "Jadi Berat Badannya Adalah " << perempuan(tinggi) << endl << endl;
			system("pause");
			system("cls");
		}
		cout << "Keluar Program?" << endl << endl;
		cout << "1. Ya \n2. Tidak" << endl << endl;
		cout << "Pilihan: ";
		int pilih;
		cin >> pilih;
		if (pilih == 1) 
		{
			break;
		}
		else if (pilih == 2) 
		{

		}
	} while (true);
}
