//NO 2
/*#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=10;i++){
		cout<<"*";
	}
	cout <<endl;
    cout <<"*        *";
	cout << endl;
	cout << "*        *";
	cout << endl;
	for(int i=1;i<=10;i++){
		cout<<"*";
	}
}*/

//NO. 3
//a
/*#include<iostream>
using namespace std;
int main(){
	int i,j;
	for (int i=1; i<=4;i++){
		cout<<i<<i<<i;
		cout<<endl;
	}
}*/

//b

/*#include<iostream>
using namespace std;
int main(){
	int i,j;
	for (int i=1; i<=5;i++){
	for(int j=1;j<=i;j++){
		cout<<i;
	}	
	cout<<endl;
}
}*/


//c
/*#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
			cout<<endl;
	}
}*/

//d

/*#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(int i=1;i<=4;i++){
		for (j = i; j >= 1; j--){
			cout << j;
		}
			cout<<endl;
	}
}*/

//NO 4
//a
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,h;
	cout<< "a= ";
	cin>>a;
	cout<<"b= ";
	cin>>b;
	h=pow(a,b);
	cout<<"hasil = "<<h;	
}*/

//b
/*#include <iostream>
#include <stdlib.h>     
#include <time.h>      
#include <iomanip>      
#include <math.h>
#include<conio.h>
#include<iomanip>
using namespace std;

int factorial(int a){
int i,result=1;
for(i=1;i<=a;i++)
	result=result*i;
	return result;
}

int main(){
    int i,N;
    cout << "Enter factorial number to calculated: ";
    cin >> N;
	cout << N <<"! using FOR LOOP = " <<factorial (N) <<endl;
	
	getch();
}*/

//c
/*#include <iostream>
#include <stdlib.h>     
#include <time.h>      
#include <iomanip>      
#include <math.h>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(){
	int A[5]={1,2,3,4,5};
	int i,sum=0,rata;
	for(i=0;i<5;i++){
		sum=sum+A[i];
	}
    rata=sum/5;
	cout<<rata;
}*/

/*#include<iostream>
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
	
}*/

