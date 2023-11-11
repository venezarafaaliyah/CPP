// ARRAY

//NILAI MAX

/*#include<iostream>
using namespace std;
int main(){
	int i, max=0;
	int list[10];
	for(i=0;i<10;i++)
	list [i]=i*i;
	for(i=0;i<10;i++)
	if(max<list[i])
	max=list[i];
	cout << "Maximum value : "<<max;
	return(0);
}*/

//MEAN, STDEV, VARIANS

/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int i,n;
	float x[100], xbar=0, var=0, stdev;

	cout <<"masukan n: ";
	cin >>n;
	cout << endl;
	cout <<"Input data : "<<endl;
	for(i=1; i<= n; i++)
	{
		cout << "x-"<<i<< " : ";
		cin>>x[i];
	}
	for(i=1;i<= n; i++)
	{
		xbar=xbar+x[i];
	}
	xbar=xbar/n;
	for(i=1;i<=n;i++)
	{
		var=var+((x[i]-xbar)*(x[i]-xbar));
	}
	var=var/(n-1);
	stdev=sqrt(var);
	cout << "mean : "<<xbar<<endl;
	cout << "varians : "<<var<<endl;
	cout << "st dev : "<<stdev<<endl;
}*/

// Uji t untuk rata 1 pop
#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int i,n;
	float data[100], sum=0, var=0, mean, stdev, miu0, alpha, t, talpha;
	cout << "input banyak data : ";
	cin>>n;
	for(i=1;i <= n;i++)
	{
		cout << "data ke- "<<i<<": ";
		cin >> data[i];
	}
	cout << endl;
	for(i=1;i<=n;i++)
	{
		sum=sum+data[i];
	}
	cout << endl;
	cout << "Jumlah : "<<sum<<endl;
	mean=sum/n;
	cout << "Mean ; "<<mean<<endl;
	for(i=1;i<=n;i++)
	{
		var=var+((data[i]-mean)*(data[i]-mean));
	}
	var=var/(n-1);
	cout<<"Varians : "<<var<<endl;
	stdev=pow(var,0.5);
	cout<<"Standar deviasi : "<<stdev<<endl<<endl;
	
	cout << "Input miu0: ";
	cin>>miu0;
	cout<<"H0 : miu0 = "<<miu0<<endl;
	cout<<"h1 : miu0 > "<<miu0<<endl;
	cout<<endl;
	cout<< "Alpha = 0.05"<<endl;
	cout<< "Input t alpa : ";
	cin>>talpha;
	cout<<"t alpha = "<<talpha<<endl<<endl;
	
	cout << "Statistik Uji : "<<endl;
	t=(mean=miu0)/(stdev/pow(n,0.5));
	cout<<"t hitung = "<<t<<endl;
	cout<<"Kesimpulan : ";
	if(t<talpha)
	cout<<"Gagal tolak H0"<<endl;
	else
	cout<<"Tolak H0"<<endl;
}



