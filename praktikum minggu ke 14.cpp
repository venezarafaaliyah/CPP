#include <iostream>
using namespace std;
int main()
{
	int i,j,k,x[100][100],y[100][100],c[100][100],d,m,n,a,b;
	cout<<"jumlah kolom matriks A = jumlah baris matriks B"<<endl;
	cout<<"Masukkan jumlah baris matriks A (n) : ";cin>>n;
	cout<<"Masukkan jumlah kolom matriks A (m) : ";cin>>m;
	cout<<"Masukkan jumlah baris matriks B (n) : ";cin>>a;
	cout<<"Masukkan jumlah kolom matriks B (m) : ";cin>>b;
	m=a;
	c[i][j]=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cout<<"Matriks A baris ke-"<<i<<" kolom ke-"<<j<<" : ";cin>>x[i][j];
		}
	}
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			cout<<"Matriks B baris ke-"<<i<<" kolom ke-"<<j<<" : ";cin>>y[i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=b;j++)
		{
			for(k=1;k<=m;k++)
			{
				d=x[i][k]*y[k][j];
				c[i][j]+=d;
			}
		}
	}
	cout<<"Matriks A"<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cout<<x[i][j]<<"     ";
		}
		cout<<endl;
	}
	cout<<"Matriks B"<<endl;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			cout<<y[i][j]<<"     ";
		}
		cout<<endl;
	}
	cout<<"Hasil perkalian"<<endl;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m;j++)
		{
			cout<<c[i][j]<<"     ";
		}
		cout<<endl;
	}
}
