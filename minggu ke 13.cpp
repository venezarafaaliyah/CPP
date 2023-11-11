/*#include <iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}*/

//a
/*#include <iostream>
using namespace std;
int main()
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		for(j=5;j>=1;j--)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}*/
//b
/*#include <iostream>
using namespace std;
int main()
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}*/

//c
/*#include <iostream>
using namespace std;
int main()
{
	int i,j;
	for (i=5;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}*/

//d
/*#include <iostream>
using namespace std;
int main()
{
	int i,j;
	for (i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}*/

/*#include <iostream>
using namespace std;
int main()
{
	int i,temp,a,b,n;
	cout<<"Masukkan banyak data : ";cin>>n;
	cout<<"Masukkan data ke-1 : ";cin>>a;
	for(i=1;i<=n-1;i++)
	{
		cout<<"Masukkan data ke-"<<i+1<<" : ";cin>>b;
		if(a>b)
		{
			temp=b;
			b=a;
			a=temp;
		}
	}
	cout<<"Maka nilai minimumnya adalah "<<a;
}*/
