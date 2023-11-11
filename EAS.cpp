#include <fstream>
#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string>
#include<cstring>

using namespace std;
int main()
{
    int j,k,awal,lagi,lagi2;
    float DATA_X1[100][2],DATA_Y[100][1],transposex[2][100],transposez[3][100],xtx[2][2],xty[2][1],detxtx,adj[2][2],inversxtx[2][2],b0b1[2][1],fits[100];
    char filenameIN[20],filenameIN2[20];
    float data1, data2,Dt_list[100][2];
    string sign[100],sign2[100],string3[100];
	int N,i=0;
	double totalx=0,totaly=0,ratax,ratay,varx=0,vary=0,kor=0,stx,sty,rxy,b1,b0;
    int eof();
    

    cout << " Enter input data filename to be opened ";
	cin >> filenameIN;

    ifstream infile;
   
    infile.open(filenameIN);
	if (!infile.is_open()){
    	cout << "\n\n\n File " << filenameIN <<" does not exist" <<endl;
		cout <<"Unable to be opened.\n\n\n\n";
		return(0);
	}
    cout << endl << ">= Open and read file " << endl << "\n";
   
    if (infile.is_open())
    {
        
        while ( !infile.eof())
        {
            infile >> data1 >> data2;
			
            cout << data1 <<"  "<< data2 << '\n';
            Dt_list[i][1]=data1;
            Dt_list[i][2]=data2;
            i++;
        }
       
        infile.close();
    }
   
    else {
    	cout << "File " << filenameIN2 <<" does not exist" <<endl;
		cout <<"Unable to be opened.";
	}

	
    float n = 10;
    for(int i=0;i<n;i++){
		 DATA_X1[i][1]=Dt_list[i][1];
		 DATA_X1[i][0]=1;
		 DATA_Y[i][0]=Dt_list[i][2];
	}

    cout<<endl<<endl<<"matriks x:"<<endl;
    for (i=0;i<n;i++)                                                                                           
    {
        for(j=0;j<2;j++)
        {
            cout<<DATA_X1[i][j]<<"\t";
        } cout<<endl;
    }
    cout<<endl<<endl<<"matriks y:"<<endl;
  for (i=0;i<n;i++)                                                                                             
    {
        for(j=0;j<1;j++)
        {
            cout<<DATA_Y[i][j]<<"\t";
        } cout<<endl;
    } cout<<endl;
    for(i=0;i<n;i++)                                                                                            
    {
        for(j=0;j<2;j++)
        {
            transposex[j][i]=DATA_X1[i][j];
        }
    }
    cout<<endl<<endl<<"transpose matriks x:"<<endl;
      for (i=0;i<2;i++)                                                                                        
    {
        for(j=0;j<n;j++)
        {
            cout<<transposex[i][j]<<"\t";
        } cout<<endl;
    } cout<<endl;
    for(i=0;i<2;i++)                                                                                            
    {
        for(j=0;j<2;j++)
        {
            xtx[i][j]=0;
            for(k=0;k<n;k++)
            {
                xtx[i][j]+=(transposex[i][k]*DATA_X1[k][j]);
            }
        }
    }
    cout<<endl<<"XtX:"<<endl;
     for (i=0;i<2;i++)                                                                                          
    {
        for(j=0;j<2;j++)
        {
            cout<<xtx[i][j]<<"\t";
        } cout<<endl;
    } cout<<endl;
    detxtx=xtx[0][0]*xtx[1][1]-xtx[0][1]*xtx[1][0];                                                             
    cout<<endl<<endl<<"det xtx :"<<detxtx<<endl<<endl;                                                          
    adj[0][0]=xtx[1][1];                                                                                       
    adj[1][1]=xtx[0][0];
    adj[0][1]=-1*xtx[0][1];
    adj[1][0]=-1*xtx[1][0];
    cout<<endl<<endl<<"adjoin matriks xtx:"<<endl;
    for (i=0;i<2;i++)                                                                                         
    {
        for(j=0;j<2;j++)
        {
            cout<<adj[i][j]<<"\t";
        } cout<<endl;
    } cout<<endl;
    for(i=0;i<2;i++)                                                                                            
    {
        for(j=0;j<2;j++)
        {
            inversxtx[i][j]=(1/detxtx)*adj[i][j];
        }
    }
    cout<<endl<<endl<<"invers matriks xtx:"<<endl;                                                             
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<inversxtx[i][j]<<"\t";
        } cout<<endl;
    } cout<<endl;
     for(i=0;i<2;i++)                                                                                           
    {
            xty[i][0]=0;
            for(j=0;j<n;j++)
            {
                xty[i][0]+=(transposex[i][j]*DATA_Y[j][0]);
            }
    }
    cout<<endl<<endl<<"matriks xty:"<<endl;                                                                   
    for(i=0;i<2;i++)
    {
        cout<<xty[i][0]<<endl;
    } cout<<endl;
    for(i=0;i<2;i++)                                                                                          
    {
        b0b1[i][0]=0;
        for(j=0;j<2;j++)
        {
            b0b1[i][0]+=inversxtx[i][j]*xty[j][0];
        }
    }
	cout<<endl<<endl<<"matriks b0b1:"<<endl;                                                                    
    for(i=0;i<2;i++)
    {
        cout<<b0b1[i][0]<<endl;
    }
    cout<<"Predicted Yields"<<endl;
    for(int i=0;i<n;i++){
		 fits[i]=b0b1[0][0]+(b0b1[1][0]*DATA_X1[i][1]);
		 cout<<fits[i]<<" ";
	}
	cout<<endl;
	cout<<"Results"<<endl;

	//Cara Penulisan Tabel
	cout<<"y \t x \t yhad1 "<<endl;
	for(int i=0;i<n;i++){
		cout<<DATA_Y[i][0]<<" \t"<<DATA_X1[i][1]<<fits[i]<<endl;
}
}
