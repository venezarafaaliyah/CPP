
/*#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,c;
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	cout<<"c = ";
	cin>>c;
	int D = ((b*b)-4*a*c);
	cout<<D;
	if(D=0){
		cout<<"Akar yang sama";
	}
	else if(D>=0){
		cout<<"Akar yang beda";
	}
	else if(D<0){
		cout<<"Akar Imajiner";
	}
return 0;
}*/

//Kalkulator Sederhana
/*#include <iostream>
using namespace std;

int main(){
	int choice,a,b;
	cout<<"What program that you want to run \n1.+ \n2.- \n3.x \n4.:";
	cin>>choice;
	cout<<"Input your first number=";
	cin>>a;
	cout<<"input your second number=";
	cin>>b;
	if (choice==1){
		cout<<a+b<<endl;
	}
	else if (choice==2){
		cout<<a-b<<endl;
	}
	else if (choice==3){
		cout<<a*b<<endl;
	}
	else if (choice==4){
		cout<<a/b<<endl;
	}
}*/

//factorial
#include <iostream>
#include <stdlib.h>     
#include <time.h>      
#include <iomanip>      // std::setprecision
#include <math.h>
#include<conio.h>
#include<iomanip>
using namespace std;

int Factorial1 (int a)  // traditional factorial calculation using FOR LOOP
{
 int i, result=1;
 for (i=1;i<=a;i++)
	result = result * i;
 return result;		
}

int Factorial2 (int a) // factorial calculation using Recursive method
{
 int result;
 if (a > 1) 
   result = a*Factorial2(a-1);
 else
   result = 1;
return result;		
}

int main()

  
{ int i,N;
    cout << "Enter factorial number to calculated: ";
    cin >> N;
	cout << N <<"! using FOR LOOP = " <<Factorial1 (N) <<endl;
	
	getch();
	
	cout <<endl;
	cout << N <<"! using Recursive = " <<Factorial2 (N) <<endl;
	
	getch();
}
