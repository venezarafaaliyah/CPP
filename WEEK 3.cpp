/*#include <iostream>
using namespace std;
int addition (int a, int b)
{
	int r;
	r = a + b;
	return (r);
}

int main ()
{
	int z;
	z = addition (5,3);
	cout << " Result : " << z;
	return 0;
}*/

/*#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int main ()
{ double matrix1[3]={0.1,0.5,0.4};
int i,n=3;
float rata, sum=0;
for (i=0; i < n; i++){
	sum = sum + matrix1[i];
}
cout << endl;
rata = sum/n;
cout << rata;
	
}*/

/*#include <iostream>
using namespace std;
int main() {
  int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
  cout << "Masukkan jumlah baris matriks: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;
  cout << "Masukkan elemen matrix pertama: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks1[i][j];
    }
  }
  cout << "Masukkan elemen matrix kedua: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks2[i][j];
    }
  }
  cout << "hasil penjumlahan matrix: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      hasil[i][j] = matriks1[i][j] + matriks2[i][j];
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }
  
  return 0;
}*/

/*#include <iostream>
#include <conio.h>
#include<windows.h>
using namespace std;
int main() 
	{
      double matrix1[3][3]={{0.1,0.5,0.4},{0.8,0.1,0.1},{0.7,0.2,0.1}}, sum[3][3];
      int i, j,x, m=3, n=3, E[i][j];
      
	      
        cout << "This is your first matrix :" <<endl;
        for(i = 0; i < m; i++){
          for(j = 0; j < m; j++){
            cout << matrix1[i][j] << "\t";
          }
          cout << endl;
        }
        
        // Adding Two matrices
    	for(i = 0; i < m; ++i)
        	for(j = 0; j < n; ++j)
            	sum[i][j] = matrix1[i][j] + matrix1[j][i];

    	// Displaying the resultant sum matrix.
    	cout << endl << "Sum of two matrix is: " << endl;
    	for(i = 0; i < m; ++i)
        	for(j = 0; j < n; ++j)
        	{
            	cout << sum[i][j] << "  \t";
            	if(j == n - 1)
               	 cout << endl;
        	}
        for(i = 0; i < m; i++)
        	for(j = 0; j < n; j++)
        	for( int x=0; x < 3; x++){
	        sum = sum + matrix1[i][j] * matrix1[i][x];
	        }
            	
        cout << endl << "Square of two matrix is: " << endl;
    	for(i = 0; i < m; ++i)
        	for(j = 0; j < n; ++j)
        	{
            	cout << E[i][j] << "  \t";
            	if(j == n - 1)
               	 cout << endl;
        	}
      return 0;
    }*/

/*#include <iostream>
    #include <conio.h>
    #include<windows.h>
    using namespace std;
    int main() 
	{
      double matrix1[3][3]={{0.1,0.5,0.4},{0.8,0.1,0.1},{0.7,0.2,0.1}}, result[3][3],sum;
      int i, j, k, m=3, n=3, p, q;
      
	      
        cout << "This is your first matrix :" <<endl;
        for(i = 0; i < m; i++){
          for(j = 0; j < m; j++){
            cout << matrix1[i][j] << "  \t";
          }
          cout << endl;
        }
        
        sum = 0;       
        for(i = 0; i < m; i++){
          for(j = 0; j < m; j++){
            for(k = 0; k < m; k++){
              //cout << "=======================>> " <<matrix1[i][k] <<" times " <<matrix1[k][j] <<endl;
			  sum = sum + matrix1[i][k] * matrix1[k][j];
              //cout << "=======================>> " <<sum <<endl;
            }
            //getch();
            result[i][j] = sum;
            sum = 0;
          }
        }
        
        cout << "Multiplication result : \n";
        for(i = 0; i < m; i++){
          for(j = 0; j < m; j++){
            cout << result[i][j] << "  \t";
          }
          cout << endl;
        }
    
      return 0;
    }*/
    
/*#include <iostream>
    #include <conio.h>
    #include<windows.h>
    using namespace std;
    int main() 
	{
      double matrix1[3][3]={{0.1,0.5,0.4},{0.8,0.1,0.1},{0.7,0.2,0.1}}, result[3][3],sum;
      int i, j, k, m=3, n=3, p, q;
      
	      
        cout << "This is your matrix :" <<endl;
        for(i = 0; i < m; i++){
          for(j = 0; j < m; j++){
            cout << matrix1[i][j] << "\t";
          }
          cout << endl;
        }
       
       int run_num = 0;
        do {
		sum = 0;       
        for(i = 0; i < m; i++){
          for(j = 0; j < m; j++){
            for(k = 0; k < m; k++){
              //cout << "=======================>> " <<matrix1[i][k] <<" kali " <<matrix1[k][j] <<endl;
			  sum = sum + matrix1[i][k] * matrix1[k][j];
              //cout << "=======================>> " <<sum <<endl;
            }
            //getch();
            result[i][j] = sum;
            sum = 0;
          }
        }
        //run_num++;
        cout << "The "<<run_num++ <<"th - Multiplication result: \n";
        for(i = 0; i < m; i++){
          for(j = 0; j < m; j++){
            cout << result[i][j] << "  \t";
            matrix1[i][j]=result[i][j];
          }
          cout << endl;
        }
        
        cout<<"\n\nControl value check \n";
        cout<<matrix1[0][0] <<"\n";
		cout<<matrix1[1][0] <<"\n";
		cout<<matrix1[0][0]-matrix1[1][0] <<"\n\n";
    } while ((matrix1[0][0]-matrix1[1][0])>0.0000001);
      return 0;
    }*/
