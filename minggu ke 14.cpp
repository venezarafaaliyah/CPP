/*#include <iostream>
using namespace std;
int main()
{
	int i,x[10];
	for(i=1;i<=10;i++)
	{
		cout<<"Masukkan data ke-"<<i<<':';
		cin>>x[i];
	}
	cout<<"Hasil Data Masukkan"<<endl;
	for(i=1;i<=10;i++)
	{
		cout<<x[i]<<',';
	}
}*/
/*#include <iostream>
using namespace std;
int main()
{
	int i,j,x[3][4],y[3][4],sum[3][4],krg[3][4];
	cout<<"Masukkan Nilai Matriks Pertama"<<endl;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=4;j++)
		{
			cout<<"baris ke-"<<i<<" "<<"kolom ke-"<<j<<" : ";cin>>x[i][j];
		}
	}
	cout<<"Masukkan Nilai Matriks Kedua"<<endl;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=4;j++)
		{
			cout<<"baris ke-"<<i<<" "<<"kolom ke-"<<j<<" : ";cin>>y[i][j];
		}
	}
	cout<<"Hasil Penjumlahan Matriks"<<endl;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=4;j++)
		{
			sum[i][j]=x[i][j]+y[i][j];
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Hasil Pengurangan Matriks"<<endl;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=4;j++)
		{
			krg[i][j]=x[i][j]-y[i][j];
			cout<<krg[i][j]<<" ";
		}
		cout<<endl;
	}
}*/
/*#include <iostream>
using namespace std;
int main()
{
	int n,i;
	float mean,sum,a,b,sum2,var,x[100];
	cout<<"Masukkan jumlah data : ";cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"Masukkan data ke-"<<i<<" : ";cin>>x[i];
		sum+=x[i];
	}
	mean=sum/n;
	for(i=1;i<=n;i++)
	{
		a=x[i]-mean;
		b=a*a;
		sum2+=b;
	}
	var=sum2/(n-1);
	cout<<"Rata-rata : "<<mean<<endl;
	cout<<"Varians : "<<var;
}*/
/*#include <iostream>
using namespace std;
int main()
{
	int n,i,j,temp,w,h;
	float x[100],med,Q1;
	cout<<"Masukkan jumlah data : ";cin>>n;
	for(i=0;i<=n-1;i++)
	{
		cout<<"Masukkan data ke-"<<i+1<<" : ";cin>>x[i];
	}
	cout<<"Data hasil pengurutan"<<endl;
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[j];
				x[j]=x[i];
				x[i]=temp;
			}
		}
		cout<<x[i]<<",";
	}
	w=n/2;
	h=(n+1)/2;
	cout<<endl;
	if(n%2==0)
	{
		med=(x[w-1]+x[w])/2;
	}
	else if(n%2!=0)
	{
		med=x[h-1];
	}
	if((n%2==0)&&(n%4==0))
	{
		Q1=(x[(n-2)/4]+x[(n+2)/4])/2;
	}
	else if((n%2==0)&&(n%4!=0))
	{
		Q1=x[(n+1)/4];
	}
	else if((n%2!=0)&&((n+1)%4==0))
	{
		Q1=x[n/4];
	}
	else if((n%2!=0)&&((n+1)%4!=0))
	{
		Q1=(x[(n-2)/4]+x[(n+2)/4])/2;
	}
	cout<<"Kuartil 1 : "<<Q1<<endl;
	cout<<"Median : "<<med;
}*/
/*#include <iostream>
using namespace std;
int main()
{
	
}*/
