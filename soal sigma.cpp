#include <iostream> 
#include<math.h>
using namespace std;

int main()
{
	float i,j,n,ratarata,var,atas,atas_1;
	n=0;
	cout<<"Masukkan bilangan = ";cin>>j;
	for(i=1;i<=j;i++)
	{
	 n+=i;
	}
	ratarata=n/j;
	for(i=1;i<=j;i++)
	{
		atas_1=pow((i-ratarata),2);
		atas+=atas_1;
	}
	var=atas/(j-1);
	cout<<"Jumlah "<<n<<'\n';
	cout<<"Dengan rata-rata "<<ratarata<<'\n';
	cout<<"Varians = "<<var;
}

/*#include <iostream>

using namespace std;

int main()
{
	int i,j,s;
	i=1;
	s=0;
	cout<<"Masukkan angka ";cin>>j;
	while(i<=j)
	{
		s+=i;
		i++;	
	}
	cout<<"jumlah "<<s;
}*/

/*#include <iostream>

using namespace std;

int main()
{
	float i,j,s,a,rata;
	cout<<"Masukkan jumlah deret ";cin>>j;
	s=0;
	for(i=1;i<=j;i++)
	{
		cout<<"Masukkan bilangan ";cin>>a;
		s+=a;
	}
	rata=s/j;
	cout<<"Rata-ratanya "<<rata<<'\n';
}*/
