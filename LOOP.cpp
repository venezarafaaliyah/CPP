// loop 

#include<iostream>
using namespace std;
int main(){
    int i,j,n;
	cout<< "n= ";
	cin>>n;
	cout<<"Gambar 1"<<'\n';
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for (i=2;i<=n;i++){
		for(j=n;j>=i;j--){
			cout<<"*";
		}
		cout<< endl;
	}
	
	cout<<"Gambar 2"<<'\n';
	for (i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if((j==n)||(j>n-i)){
				cout<<"*";
			}
			else {
				cout<<" ";
			}
		}
		cout<<endl;
	}
	for (i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			cout<<"*";
		}
	cout<<endl;
	}
	cout<<"Gambar 3"<<'\n';
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<" ";
		}
		for(j=1;j<=n;j++){
			cout<<"*";
		}
	cout<<endl;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<" ";
		}
		for(j=n;j>=i;j--){
			cout<<"*";
		}
	cout<<endl;
	}
}

