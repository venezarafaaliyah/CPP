#include <iostream>
#include <stdlib.h>     
#include <time.h>      
#include <iomanip>                                      // VENEZA RAFA ALIYAH
#include <math.h>                                       // 5003201168
using namespace std;

long faktorial(long a){
	if(a>0){
		return (a*faktorial(a-1));
		}
	else{
		return 1;
	}	
}

long kombinasi(long n, long k){
	return(faktorial(n)/(faktorial(k)*faktorial(n-k)));
}

float  perpangkatan(float a, float b){
	if(b>0){
		return (a*perpangkatan(a, b-1));}
	else{
		return 1;
	}
}

float binomial(int n, int k,float p){
	float result = 1;

	for(int i = 1; i<=k; i++){
	result = result * p;
	}

	for(int i = 1; i<=n-k; i++){
	result = result * (1-p);
	}

	result = result * kombinasi(n,k);
	return result;
	}
	
float binomial2(int n, int k, float p){
	return(kombinasi(n,k)*perpangkatan(p,k)*perpangkatan((1-p),(n-k)));
}

int main(){
	int n=4;
	float binomiali[100][100],binomiala[100][100];
	int k1=1;
	int k2=0;
	float jumlah = 0;
	float q=0.05;
	for(int n=4;n<=6;n++){
		float jumlah={0};
	for(int k=0;k<=n;k++){
		jumlah += binomial2(n,k,q);
		binomiala[n][k]=jumlah;
	}
    }
    for(int n=4;n<=6;n++){
	for(int k=0;k<=n;k++){
		cout<<binomiala[n][k]<<endl;
	}
    }
	cout<<"______________________"<<endl;
	float p;
	for(p=0.1;p<0.5;p+=0.1){
    for(int n=4;n<=6;n++){
    	float jumlah = {0};
		for(int k=0;k<=n;k++){
		jumlah += binomial2(n,k,p);
		binomiali[n][k]=jumlah;
	}
    }
	for(int n=4;n<=6;n++){
	for(int k=0;k<=n;k++){
		cout<<binomiali[n][k]<<endl;
	} 
    }
	cout<<"______________________"<<endl;
    }
}
    
    
    
    


