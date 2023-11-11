//EAS MBAK AULIA
//no.1
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int Y[1000];
	int i,j,prima,tdkprima;
	tdkprima=0;
		for(int i =0;i<11;i++){
		cout<<"Masukkan data ke "<<i+1<<" = ";
		cin>>Y[i];
	}
			for(int i =0;i<11;i++){
				
			if((Y[i]%2==0)||(Y[i]%3==0)||(Y[i]%4==0)||(Y[i]%5==0)||(Y[i]%6==0)||(Y[i]%7==0)||(Y[i]%8==0)||(Y[i]%9==0)){
			tdkprima+=1;
		}
	}
	prima=11-tdkprima;	
	cout<<"prima= "<<prima;
}


