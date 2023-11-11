//NO.1
/*#include <iostream>
using namespace std;

int main (){
	int n;
	cout << "masukan n= ";
	cin >> n;
	
	float ye,sn=0;
	for(int i=1;i<=n;i++){
		float deret=0;
		for(int j=1;j<=i;j++){
			deret=deret+j;
			ye=1/deret;
		}
		cout<<ye<<",";
		sn=sn+ye;
	}
	cout<<sn;
}*/

//NO.2
/*#include <iostream>
#include<math.h>
using namespace std;

int main (){
	int n,a;
	cout << "masukan n= ";
	cin >> n;
	for(int i=0;i<=n;i++){
		a=pow(3,i);
	if (i%2==0){
		a=a*1;
		cout <<a<<",";
	}
	else {
		a=a*-1;
		cout<<a<<",";
	}
}
}*/
//N0.3
/*#include <iostream>
using namespace std;

int main (){
	for(int i=10;i>0;i--){
		cout<<i<<" ";
	} cout << endl;
	for(int i=1;i<=10;i++){
		cout<<i*10<<" ";
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout << endl;
	}
	return 0;
}*/

#include <iostream>
using namespace std;
int main()
{
	
    int bil[6], n, i, j, temp;
    for (n=1; n<=5; n++){
        cout << "Bilangan ke [ "<< n <<" ] : ";
        cin >> bil[n];
    }
    cout << "Hasil pengurutan bilangan kecil ke besar : " <<endl;
    for (i=1; i<=5; i++){
        for (j=1; j<=5; j++){
            if (bil[i] < bil[j]){
                temp = bil[i];
                bil[i] = bil[j];
                bil[j] = temp;
            }
        }
    }
    for (i=1; i<=5; i++){
        cout << bil[i] << ", ";
    }
    return 0;
}
