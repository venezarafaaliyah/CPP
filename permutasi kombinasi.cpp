#include <iostream>

using namespace std;

int main()
{
	cout<<"=====Pemrograman Permutasi dan Kombinasi=====\n";
	int n,r,pil,i,R,P,s,g,C,L;
	cout<<"1. Permutasi\n";
	cout<<"2. Kombinasi\n";
	cout<<"Masukkan pilihan Anda ";cin>>pil;
	switch(pil)
	{
		case 1:
			cout<<"Format Penulisan nPr\n";
			cout<<"Masukkan n = ";cin>>n;
			cout<<"Masukkan r = ";cin>>r;
			s=1;
			for(i=1;i<=n;i++)
			{
				s*=i;//s=s*i
			}
			L=1;
			R=n-r;
			for(i=1;i<=R;i++)
			{
				L*=i;
			}
			P=s/L;
			cout<<"Hasil permutasinya adalah "<<P<<'\n';
			break;
		case 2:
			cout<<"Format Penulisan nCr\n";
			cout<<"Masukkan n = ";cin>>n;
			cout<<"Masukkan r = ";cin>>r;
			s=1;
			for(i=1;i<=n;i++)
			{
				s*=i;
			}
			g=1;
			for(i=1;i<=r;i++)
			{
				g*=i;
			}
			L=1;
			R=n-r;
			for(i=1;i<=R;i++)
			{
				L*=i;
			}
			C=s/(L*g);
			cout<<"Hasil kombinasinya adalah "<<C<<'\n';
			break;
	}
}
