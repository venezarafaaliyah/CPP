#include <iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Masukkan angka : ";cin>>n;
	cout<<"Gambar 1"<<'\n';
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	cout<<"Gambar 2"<<endl;
	cout<<"Masukkan angka : ";cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((j==n)||(j>n-i))
			{
				cout<<"*";
			}
			else
			cout<<" ";
		}
		cout<<endl;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"Gambar 3"<<endl;
	cout<<"Masukkan angka : ";cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+i;j++)
		{
			if(j>i)
			{
				cout<<"*";
			}
			else
			cout<<" ";
		}
		cout<<endl;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			if(j<=i)
			{
				cout<<" ";
			}
			else
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	cout<<"Gambar 4"<<endl;
	cout<<"Masukkan angka : ";cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+n-1;j++)
		{
			if((j==n)||(j)){
				cout<<"*";
			}
			else{
				cout<<j;
			}
		}
		cout<<endl;
	}
}

