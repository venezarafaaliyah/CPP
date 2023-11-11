       for(i=0;i<n;i++)                                                                                            //transpose matriks x//
    {
        for(j=0;j<3;j++)
        {
            transposez[j][i]=DATA_X2[i][j];
        }
    }
   
   cout<<endl<<endl<<"transpose matriks Z:"<<endl;
      for (i=0;i<3;i++)                                                                                         //output matriks x//
    {
        for(j=0;j<10;j++)
        {
            cout<<transposez[i][j]<<"\t";
        } cout<<endl;
    } cout<<endl;
    for(i=0;i<3;i++)                                                                                            //perkalian matriks x dengan transposenya//
    {
        for(j=0;j<3;j++)
        {
            ztz[i][j]=0;
            for(k=0;k<10;k++)
            {
                ztz[i][j]+=(transposez[i][k]*DATA_X2[k][j]);
            }
        }
    }
    cout<<endl<<"ztz:"<<endl;
    
     for (i=0;i<3;i++)                                                                                          //output matriks x dikali transposenya//
    {
        for(j=0;j<3;j++)
        {
            cout<<ztz[i][j]<<"\t";
        } cout<<endl;
    } cout<<endl;
    detztz=ztz[0][0]*ztz[1][1]-ztz[0][1]*ztz[1][0];                                                             //determinan XtX//
    cout<<endl<<endl<<"det xtx :"<<detxtx<<endl<<endl;                                                          //output determinan XtX//
    adj[0][0]=xtx[1][1];                                                                                        //adjoin matriks XtX//
    adj[1][1]=xtx[0][0];
    adj[0][1]=-1*xtx[0][1];
    adj[1][0]=-1*xtx[1][0];
    
    		int det1 = 0;
		for(int i =0; i<3;i++){
		det1= det1 + (ztz[0][i] * (ztz[1][(i+1)%3] * ztz[2][(i+2)%3] - ztz[1][(i+2)%3] * ztz[2][(i+1)%3]));
		}
    cout<<endl<<endl<<"adjoin matriks ztz:"<<endl;
    for (i=0;i<3;i++)                                                                                           //output adjoin//
    {
        for(j=0;j<3;j++)
        {
            cout<<adjz[i][j]<<"\t";
        } cout<<endl;
    } cout<<endl;
    for(i=0;i<3;i++)                                                                                            //Invers matriks XtX//
    {
        for(j=0;j<3;j++)
        {
            inversztz[i][j]=(1/detztz)*adjz[i][j];
        }
    }
    cout<<endl<<endl<<"invers matriks ztz:"<<endl;                                                              //output matriks Invers XtX//
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<inversztz[i][j]<<"\t";
        } cout<<endl;
    } cout<<endl;
     for(i=0;i<3;i++)                                                                                           //Perkalian matriks X tranpose dengan y//
    {
            xty[i][0]=0;
            for(j=0;j<10;j++)
            {
                xty[i][0]+=(transposez[i][j]*DATA_Y[i][1]);
            }
    }
    cout<<endl<<endl<<"matriks xty:"<<endl;                                                                     //Output perkalian matriks X tranpose dengan Y//
    for(i=0;i<2;i++)
    {
        cout<<xty[i][0]<<endl;
    } cout<<endl;
    for(i=0;i<2;i++)                                                                                            //Perkalian pencarian hasil//
    {
        b0b1[i][0]=0;
        for(j=0;j<2;j++)
        {
            b0b1[i][0]+=inversxtx[i][j]*xty[j][0];
        }
    }
