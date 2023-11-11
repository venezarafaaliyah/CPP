#include <iostream>
using namespace std;

int main ()
{   cout<<"POLA 1"<<endl;
	int i,j,k;
	for ( i=1; i <= 11; i = i+2){
		for (j = 1; j <= i; j++ ){
			cout << "*";
		}
		cout << endl;
	}
	cout<<"___________________________________"<<endl;
	
	cout << "POLA 2"<<endl;
	for (i = 11; i >= 1; i=i-2){
		for ( j = i ; j >= 1; j--){
			cout << "*";
		}
		cout << endl;
	}
	cout<<"___________________________________"<<endl;
		
	cout <<"POLA 3"<<endl;
		for ( i = 1 ; i <= 6; i++){
		for (  j = 6 ; j > i; j--){
			cout << " ";		
			}
		for ( k = 1 ; k <= 2*i-1 ; k++ ){
		cout << "*";
		}
		cout << endl;
	}
	cout<<"___________________________________"<<endl;
	
	cout<<"POLA 4"<<endl;
		for ( i = 1; i <= 6; i++){
		for ( j = 1; j < i; j++){
			cout << " ";
		}
		for ( k = 6; k >= (2*i-6); k--){
			cout << "*";
		}
		cout << endl;
    }
    cout<<"___________________________________"<<endl;
    
    cout<<"POLA 5"<<endl;
    	for (i=1;i<=11;i=i+2){
		for ( j = 1; j<= (11-i)/2; j++){
		cout << " ";
		}
		for (j =1; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}
    for ( i=9; i >= 1; i=i-2){
    	for ( j=1;j <= (11-i)/2; j++){
    		cout << " ";
    	}
    	for (j=1;j<=i;j++){
    		cout << "*";
    	}
    	cout << endl;
    }
    cout<<"___________________________________"<<endl;
    
    cout<<"POLA 6"<<endl;
    		for ( i = 1; i <= 6; i++){
		for(k = 1; k <= 6-i; k++){
			cout << " ";
		}
		for (j = 1; j <= i; j++){
			cout << j;
		}
		for (j = i-1; j >= 1; j--){
			cout << j;
		}
		cout << endl;
	}
	cout<<"___________________________________"<<endl;
    
    cout<<"POLA 7"<<endl;
    	for (int i = 6; i >= 2-i; i--){
		for(k = 1; k <= 6-i; k++){
			cout << " ";
		}
		for (j = 1; j <= i; j++){
			cout << j;
		}
		for (j = i-1; j >= 1; j--){
			cout << j;
		}
		cout << endl;
    }
    cout<<"___________________________________"<<endl;
    
    cout<<"POLA 8"<<endl;
		for ( i = 1; i <= 6; i++){
		for(k = 1; k <= 6-i; k++){
			cout << " ";
		}
		for (j = 1; j <= i; j++){
			cout << j;
		}
		for (j = i-1; j >= 1; j--){
			cout << j;
		}
		cout << endl;
	}
	for (int i = 5; i >= 2-i; i--){
		for(k = 1; k <= 6-i; k++){
			cout << " ";
		}
		for (j = 1; j <= i; j++){
			cout << j;
		}
		for (j = i-1; j >= 1; j--){
			cout << j;
		}
		cout << endl;
    }
    return 0;
}


