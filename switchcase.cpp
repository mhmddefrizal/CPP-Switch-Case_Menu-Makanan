#include <iostream>
#include <conio.h>

using namespace std;

main ()
{
//Latihan percabangan senin kemarin
	
	//Tipe data dan variabel
	int pilih, harga, porsi, total;
	char *menu;
	
	//Keterangan 
	cout<<"--------------------------------------------"<<endl;
	cout<<"Menu Makanan"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"1. Bakso	Rp. 15.000"<<endl;
	cout<<"2. Mie Ayam	Rp. 10.000"<<endl;
	cout<<"3. Es Teh	Rp. 5.000"<<endl;
	cout<<"4. Es Campur	Rp. 7.000"<<endl;
	
	cout<<"--------------------------------------------"<<endl;
	
	//Input
	cout<<"Pilih menu anda : "; cin>>pilih;
	cout<<"Jumlah Porsi : ";cin>>porsi;
	
	//Switch Case
	switch (pilih)
	{
		case 1 :
		{
			menu="Bakso";
			harga=15000;
		}
		break;
		case 2 :
		{
			menu="Mie Ayam";
			harga=10000;
		}
		break;
		case 3 :
		{
			menu="Es Teh";
			harga=5000;
		}
		break;
		case 4 :
		{
			menu="Es Campur";
			harga=7000;
		}
		break;
		
		default : menu="Tidak ada";
	}
	
	
	
	//Proses
	total = harga * porsi;
	
	//Output
	cout<<"--------------------------------------------"<<endl;
	cout<<"Pesanan anda = "<<menu <<endl;
	cout<<"Total Bayar = "<<total;
	
	getch();
}
