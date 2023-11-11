//VOID

/*#include<iostream>
#include <math.h>
using namespace std;


void printmessage(string a)
{
	cout << "Hello "<< a << endl;

}
int main ()
{
	string a = "Nesa";
	printmessage(a);
	return 0;
}*/

/*#include<iostream>
#include <math.h>
using namespace std;

long pangkat (long a , long b)
{
	if (b>=1){
		return (a*pangkat(a,b-1));
	}
	else;
	return(1);
}
int main()
{
	long number;	
	long a = 5;
	long b = 3;
	cout << "Result : ";
	cout << number << "!=" << pangkat (a,b);
	return 0;
}*/

/*#include <iostream>
#include <stdlib.h>     
#include <time.h>       
#include <iomanip>      
#include <math.h>

using namespace std;

long faktorial (long a){
	if (a>0){
		return (a*faktorial(a-1));
	}
	else{
		return 1;
	}
}
long combination (long n, long c){
	return(faktorial(n)/(faktorial(c)*faktorial(n-c)));
}

float perpangkatan (float a, float b){
	if (b>0){
		return (a*perpangkatan(a,b-1));
	}
	else{
		return 1;
	}
	}
	
float binomial (int n, int c, float p){
	float result = 1;
	for (int i = 1; i <=c; i++){
		result = result*p;
	}
	for (int i=1; i <= n-c; i++){
		result = result*(1-p);
	}
	result = result*combination (n,c);
	return result;
}

float binomial2(int n, int c, float p){
	return (combination(n,c)*perpangkatan(p,c)*perpangkatan((p-1),(n-c)));
}
int main(){
int n=4;
int c1=2;
int c2=0;
float p = 0.05;
cout << "binomial = "<< binomial(n,c1,p) << "\n";
cout << "binomial = "<< binomial2(n,c2,p) << "\n";
cout << "bionomial = "<< binomial2(n,c1,p)+binomial(n,c2,p) << "\n";
}*/

#include<iostream>
using namespace std;

int main(){
	double A[1000];
	int n;
	cout<<"Berapa banyak n dalam array tersebut = ";
	cin>>n;
	for(int i =0;i<n;i++){
		cout<<"Masukkan data ke "<<i+1<<" = ";
		cin>>A[i];
	}
	float sum=0;
	for(int i=0;i<n;i++){
		sum += A[i];
	}
	float rata = sum/n;
	cout<<rata;
	
}

