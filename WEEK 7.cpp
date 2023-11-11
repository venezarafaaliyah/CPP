//FIBONACCI RECURSIVE
#include <iostream>
using namespace std;

int fib(int n){
	if (n>3){
	return fib(n-1)+fib(n-2);
}
else {
	return 1;
}
}

int main(){
	for(int i=1;i<10;i++){
		cout << fib(i)<<",";
	}
}

