#include <iostream>
#include <math.h>
using namespace std;

int main (){
	int i,n , a=0;
	cout << "n= ";
	cin >> n;
	for ( i=0; i < n; i++){
		cout << pow(3,i) << " ";
	}
	cout << "\n------------------------------------------------------------"<< endl;
	cout << "n= ";
	cin >> n;
	while (a<n){
		cout << pow (3,a)<< " ";
		a++;
	}
	int b=0;
	cout << "\n------------------------------------------------------------"<< endl;
	cout << "n = ";
	cin >> n;
	do {
		cout << pow(3,b)<< " ";
		b++;
	} while (b<n);
	
	return 0;
	}
	

// Asis Pembahasan Tugas Segitiga 123..
/*#include <iostream>
using namespace std;

int main ()
{
	int i,j;
	for ( int i=1; i <= 11; i +=2){
		for (int j = 1; j <= i; j++ ){
			cout << j;
		}
		cout << endl;
	}
}*/

/*#include <iostream>
using namespace std;

int main ()
{
	int i,j;
	for (int i=1;i<=9;i=i+2){
		for (int j = 1; j<= (9-i)/2; j++){
		cout << " ";
		}
		for (j =1; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}
    for ( int i=7; i >= 1; i=i-2){
    	for ( int j=1;j <= (9-i)/2; j++){
    		cout << " ";
    	}
    	for ( int j=1;j<=i;j++){
    		cout << "*";
    	}
    	cout << endl;
    }
}*/

/*#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(int i=1;i<=9;i=i+2){
		for (int j=1;j<=(9-i)/2;j++){
		cout<<" ";
		}
		for(int j=1;j<=i;j++){
		cout<<"*";
    	}
	cout << endl;  
    }
	for(int i=7;i>=1;i=i-2) {
		for (int j=1;j<=(9-i)/2;j++){
		cout<<" ";
	    }
		for(int j=1;j<=i;j++){
		cout<<"*";
        }
		cout<<endl;
	}
}*/
