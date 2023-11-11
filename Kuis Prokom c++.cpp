#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	int i,j,k,temp,n,x[100][100];
	float X,Y,Z,avgX,avgY,avgZ,s[100][100],st[100][100],c[100][100],d,b[100][100],kali1,kali2,kali3,sum1,sum2,sum3;
	cout<<"Masukkan jumlah data (n) : ";cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=3;j++)
		{
		if(j==1)
		{
		cout<<"Masukkan variabel X ke-"<<i<<" : ";cin>>x[i][j];
		X+=x[i][j];
		}
		else if(j==2)
		{
		cout<<"Masukkan variabel Y ke-"<<i<<" : ";cin>>x[i][j];
		Y+=x[i][j];
		}
		else if(j==3)
		{
		cout<<"Masukkan variabel Z ke-"<<i<<" : ";cin>>x[i][j];
		Z+=x[i][j];
		}
		}
	}
	avgX=X/n;
	avgY=Y/n;
	avgZ=Z/n;
	cout<<"=====Matriks S====="<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(j==1)
			{
			s[i][j]=x[i][j]-avgX;
			kali1=s[i][j]*s[i][j];
			sum1+=kali1;
			}
			else if(j==2)
			{
			s[i][j]=x[i][j]-avgY;
			kali2=s[i][j]*s[i][j];
			sum2+=kali2;
			}
			else if(j==3)
			{
			s[i][j]=x[i][j]-avgZ;
			kali3=s[i][j]*s[i][j];
			sum3+=kali3;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=3;j++)
		{
			cout<<fixed<<setprecision(3)<<s[i][j]<<"     ";
		}
		cout<<endl;
	}
	cout<<"=====Matriks Varians Kovarians====="<<endl;
	//Matriks Transpose
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=n;j++)
		{
			st[i][j]=s[j][i];
		}
	}
	//matriks S' x S
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=n;k++)
			{
				d=st[i][k]*s[k][j];
				c[i][j]+=d;
			}
			cout<<c[i][j]/(n-1)<<"     ";
		}
		cout<<endl;
	}
	//Pengurutan
	for(k=1;k<=3;k++)
	{
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(x[i][k]>x[j][k])
			{
				temp=x[j][k];
				x[j][k]=x[i][k];
				x[i][k]=temp;
			}
		}
	}
}
cout<<"========HASIL PENGURUTAN========\n";
for(i=1;i<=n;i++)
{
	for(j=1;j<=3;j++)
	{
		cout<<fixed<<setprecision(0)<<x[i][j]<<"     ";
	}
	cout<<endl;
}
cout<<"=====Matriks Nomer 2======"<<endl;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(i==1)
			{
				if(j==1)
				{
				b[i][j]=avgX;
				}
				else if(j==2)
				{
				b[i][j]=avgY;
				}
				else if(j==3)
				{
				b[i][j]=avgZ;
				}
			}
			else if(i==2)
			{
				if(j==1)
				{
				b[i][j]=sqrt(sum1/(n-1));
				}
				else if(j==2)
				{
				b[i][j]=sqrt(sum2/(n-1));
				}
				else if(j==3)
				{
				b[i][j]=sqrt(sum3/(n-1));
				}
			}
			else if(i==3)
			{
				if(n%2==0)
				{
					b[i][j]=(x[n/2][j]+x[(n/2)+1][j])/2;
				}
				else if(n%2!=0)
				{
					b[i][j]=x[(n+1)/2][j];
				}
				
			}
			cout<<fixed<<setprecision(3)<<b[i][j]<<"     ";
		}
		cout<<endl;	
	}
	int prim[100][100],countprim1,countprim2,countprim3,primafix;
	char variabel;
	countprim1=0;
	countprim2=0;
	countprim3=0;
	cout<<"\t========Bilangan Prima=======\n";
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(k=2;k<=x[j][i];k++)
			{
				if(x[j][i]==1)
				{
					prim[j][i]=0;
					break;
				}
				if(x[j][i]%k==0)
				{
					prim[j][i]=0;
					break;
				}
				if(k==x[j][i])
				{
					prim[j][i]=1;
					break;
				}
			}
		}
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1)
			{
				countprim1+=prim[j][1];
			}
			else if(i==2)
			{
				countprim2+=prim[j][2];
			}
			else if(i==3)
			{
				countprim3+=prim[j][3];
			}
		}
		if(i==1)
		{
			variabel='X';
			primafix=countprim1;
		}
		else if(i==2)
		{
			variabel='Y';
			primafix=countprim2;
		}
		else if(i==3)
		{
			variabel='Z';
			primafix=countprim3;
		}
		cout<<"Jumlah Bilangan Prima pada "<<variabel<<" adalah "<<primafix<<endl;
	}
}
