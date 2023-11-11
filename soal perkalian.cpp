#include <iostream>

using namespace std;

int main()
{
	int i,j,s;
	s=1;
	cout<<"Masukkan bilangan = ";cin>>j;
	for(i=1;i<=j;i++)
	{
	s*=i;
	}
	cout<<s;
}
