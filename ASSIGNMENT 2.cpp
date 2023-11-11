//soal segitiga bintang

/*#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Panjang pola= ";
	cin >> n;
	
	cout << "Pola 1\n";
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "Pola 2\n";
	
	for (int i = 1; i <= n; i++){
		for (int j =n ; j >= i; j--){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "Pola 3\n";
	
	for ( int i = 1;i <=n; i++){
		for (int j = 1; j < i; j++){
			cout << " ";
		}
		for (int k = n; k >= i; k--){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "Pola 4\n";
	
	for ( int i = 1; i <= n; i++){
		for ( int j = n; j >i; j--){
			cout << " ";
		}
		for ( int k = 1; k <= i; k++){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "Pola 5\n";
	
	for ( int i = 1; i <= n; i++){
		for ( int j = n; j > i; j--){
			cout << " ";
		}
		for(int k = 1; k <= (2*i-1);k++){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "Pola 6\n";
	
	for (int i = 1; i <= n; i++){
		for ( int j = 1; j < i; j++){
			cout << " ";
		}
		for (int k = n; k >= (2*i-n); k--){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "Pola 7\n";
	
	for (int i = 1;i <= n; i++){
		for (int j = n; j > i; j--){
			cout << " ";
		}
		for (int k = 1; k <= (2*i-1); k++){
			cout << "*";
		}
		cout << endl;
	}
	
	for (int i = 2; i <= n; i++){
		for (int j=1; j < i; j++){
			cout << " ";
		}
		for ( int k = n; k >= (2*i-n); k--){
			cout << "*";
		}
		cout << endl;
	}
	cin.get();
	return 0;
}*/

// soal segitiga pascal

/*#include <iostream>
using namespace std;
void main() {
	int n;cin >> n;
	int arr[100][100];
	for (int baris= 0;baris = n; baris++) {
		for (int q= n; q>baris ; q--){
			cout << " ";
		}
		for (int kolom = 0; kolom < i; kolom++){
			if (kolom==0 || kolom == baris - 1){
				arr[baris][kolom] = 1;
				cout << arr[baris][kolom] << " ";
			}
			else {
				arr [baris]kolom]= arr[baris-1][kolom-1] + arr[baris-1][kolom];
				cout << arr [baris][kolom] << " ";
			}
		}
		cout << endl;
	}
}*/

/*#include <iostream>
using namespace std;
int main()
{
	// f_n = f_n1 + f_n2
	
	int n;
	int f_n;
	int f_n1;
	int f_n2;
	
	cout << "Program Deret Fibonacci\n";
	cout << "nilai n= ";
	cin >> n;
	
	f_n1 = 1;
	f_n2 = 0;
	f_n = f_n1 + f_n2;
	cout << f_n << " ";
	for(int i = 1; i < n; i++){
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		cout << f_n << " ";
	}
	cout <<"\n";
	cin.get();
	return 0;
}*/
