//nomor 1
/*#include <iostream>
using namespace std;
int main()
{
	string uname,pass,a,b;
	int i;
	uname="aleaerdinna";
	pass="aleaem";
	i=0;
	do
	{
		cout<<"Masukkan username : ";cin>>a;
		cout<<"Masukkan password : ";cin>>b;
		if((uname==a)&&(pass==b))
		{
			cout<<"Anda berhasil masuk";
		}
		else 
		cout<<"Maaf username dan password anda salah"<<'\n';
		i++;
		if(i>3)
		{
			cout<<"Akun Anda telah diblokir";
		}
	}
	while(((uname!=a)||(pass!=b))&&(i<=3));
}*/

/*#include<iostream>
using namespace std;
int main(){
	string uname, pass,a,b;
	uname="venezarafaaliyah";
	pass="rafa";
	int i;
	i=0;
	do {
	cout<<"username= ";	
	cin>>a;
	cout<<"password= ";
	cin>>b;
	if((uname==a)&&(pass==b)){
		cout<<"wellcome";
	}
	else {
		cout<<"try again"<<'\n';
	}
	if (i>3){
		cout<<"sorry your access has been denied";
	}
	i++;
	}
	while (((uname!=a)||(pass!=b))&&(i<=3));
}*/

//nomor 2
/*#include <iostream>
using namespace std;
int main()
{
	int genap,ganjil,positif,negatif,a;
	genap=0;
	ganjil=0;
	positif=0;
	negatif=0;
	do
	{
	cout<<"Masukkan bilangan : ";cin>>a;
	if(a%2==0)
	{
		genap+=1;
	}
	if((a%2!=0)&&(a!=-999))
	{
		ganjil+=1;
	}
	if(a>0)
	{
		positif+=1;
	}
	if((a<0)&&(a!=-999))
	{
		negatif+=1;
	}
	}
	while(a!=-999);
	cout<<"\t====Jumlah Bilangan====\n";
	cout<<"Bilangan genap : "<<genap<<endl;
	cout<<"Bilangan ganjil : "<<ganjil<<endl;
	cout<<"Bilangan positif : "<<positif<<endl;
	cout<<"Bilangan negatif : "<<negatif<<endl;
}*/

