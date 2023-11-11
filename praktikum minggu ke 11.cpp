/*#include <iostream>

using namespace std;

int main()
{
	int n1,n2,pil1,pil2,tiket,parkir,total,tot1,tam;
	mulai:
		{
			cout<<"\t\t====Tiket Masuk====\n";
			cout<<"1. Anak"<<endl;
			cout<<"2. Dewasa"<<endl;
			cout<<"Masukkan pilihan Anda : ";cin>>pil1;
			switch(pil1)
			{
				case 1: 
				tiket=100000;
				break;
				case 2:
				tiket=150000;
				break;
				default:
				cout<<"Pilihan Anda salah";
			}
			cout<<"Masukkan jumlah pembelian Anda : ";cin>>n1;
			cout<<"\t\t====Tiket Parkir====\n";
			cout<<"1. Motor"<<endl;
			cout<<"2. Mobil"<<endl;
			cout<<"3. Bus"<<endl;
			cout<<"Masukkan Pilihan Anda : ";cin>>pil2;
			switch(pil2)
			{
				case 1:
					parkir=5000;
					break;
				case 2:
					parkir=20000;
					break;
				case 3:
					parkir=30000;
					break;
				default:
					cout<<"Pilihan yang Anda Masukkan salah";
			}
			cout<<"Masukkan jumlah pembelian tiket Anda : ";cin>>n2;
		}
		tot1=tiket*n1+parkir*n2;
		total+=tot1;
		cout<<"Apakah ada tambahan pembelian lain?(1=ya,2=tidak)";cin>>tam;
		switch(tam)
		{
			case 1:
				goto mulai;
				break;
			case 2:
				break;
			default:
				cout<<"Pilihan Anda salah";		
		}
		cout<<"Jumlah yang harus dibayarkan : "<<total;
		
	return 0;
}*/

/*#include <iostream>

using namespace std;

int main()
{
	int n,harga,total,totalbayar,tipe,tam;
	cout<<"\t\t=====Toko Baju=====\n";
	cout<<"1. Kaos"<<endl;
	cout<<"2. Kemeja Batik"<<endl;
	cout<<"3. Celana Training"<<endl;
	mulai:{cout<<"Masukkan pilihan anda : ";cin>>tipe;
	if(tipe==1)
	{
		harga=100000;
	}
	else if(tipe==2)
	{
		harga=150000;
	}
	else
	{
		harga=175000;
	}
	cout<<"Masukkan jumlah pembelian Anda : ";cin>>n;
	switch(n)
	{
		case 0:
			total=0;
			break;
		case 1:
			total=n*harga;
			break;
		case 2:
			total=n*harga*0.85;
			break;
		case 3:
			total=n*harga*0.8;
			break;
		case 4:
			total=n*harga*0.8;
			break;
		default:
			total=n*harga*0.65;
	}
	totalbayar+=total;
	cout<<"Apakah Ada tambahan pembelian? (1=iya, 2=tidak)";cin>>tam;
}
	switch(tam)
	{
		case 1:
			goto mulai;
			break;
		case 2:
			break;
		default:
			cout<<"Pilihan Anda Salah";
	}
	cout<<"Jumlah yang harus dibayarkan : "<<totalbayar;
return 0;
}*/

#include <iostream>

using namespace std;

int main()
{
	int pil,n,tot1,totalbayar,tam;
	cout<<"\t\t====Daftar Menu====\n";
	cout<<"1. Paket Panas 1 Rp 50.000"<<endl;
	cout<<"2. Paket Hemat 1 Rp 40.000"<<endl;
	cout<<"3. Paket Anak 1 Rp 30.000"<<endl;
	mulai:{
	cout<<"Masukkan pilihan Anda : ";cin>>pil;
	cout<<"Masukkan jumlah pembelian : ";cin>>n;
	switch(pil)
	{
		case 1:
			tot1=50000*n*0.5;
			break;
		case 2:
			tot1=40000*n*0.5;
			break;
		case 3:
			tot1=30000*n*0.5;
			break;
		default:
			cout<<"Pilihan Anda Salah";
	}
	totalbayar+=tot1;
	cout<<"Apakah ada tambahan pembelian? (ya=1, tidak=2) ";cin>>tam;
}
	switch(tam)
	{
		case 1:
			goto mulai;
			break;
		case 2:
			break;
		default:
			cout<<"Pilihan Anda Salah";
	}
	cout<<"Jumlah yang harus dibayarkan : "<<totalbayar+(totalbayar*0.1);
}
