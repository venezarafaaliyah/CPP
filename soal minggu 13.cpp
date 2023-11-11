/*#include <iostream>
using namespace std;
int main()
{
	int i,j,n,s;
	s=1;
	cout<<"Masukkan nilai n ";cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			cout<<i<<",";
		}
		else if(i!=1)
		{
			s*=-3;
			cout<<s<<",";
		}
	}
}*/
/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float i,n,l,s,m;
	l=0;
	m=0;
	cout<<"Masukkan nilai n : ";cin>>n;
	cout<<"Dengan deret bilangan : "<<'\n';
	for(i=1;i<=n;i++)
	{
		l+=i;
		s=1/l;
		m+=s;
		cout<<setprecision(3)<<s<<" ";
	}
	cout<<endl;
	cout<<"Maka hasil penjumlahannya adalah "<<m;
}*/
/*#include <iostream>
using namespace std;
int main()
{
	int i,j,k,l,s;
	for(i=10;i>=1;i--)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	for(j=1;j<=10;j++)
	{
		for(k=1;k<=j+1;k++)
		{
			if(k==1)
			{
				l=j*10;
				cout<<l<<" ";
			}
			else if(k!=1)
			{
			    s=k-1;
				cout<<s<<" ";
			}
		}
		cout<<endl;
	}
}*/
