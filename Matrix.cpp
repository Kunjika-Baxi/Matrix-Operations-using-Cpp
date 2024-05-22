#include<iostream>
#include<stdlib.h>
using namespace std;
void display();
void transpose();
void add();
void sub();
void multi();
int r1,r2,c1,c2,a[100][100],b[100][100],c[100][100],i,j,k;
class Matrix
{
     public :
      void get()
      {
     cout<<"\n---------------Matrix Magic----------------";
     cout<<"\nEnter Number of Rows of Matrix 1 : ";cin>>r1;
     cout<<"\nEnter Number of Columns of Matrix 1 : ";cin>>c1;
     cout<<"\nEnter Number of Rows of Matrix 2 : ";cin>>r2;
     cout<<"\nEnter Number of Columns of Matrix 2 : ";cin>>c2;
     cout<<"\nEnter "<<r1*c1<<" elements for Matrix 1 : ";
     for(i=0;i<r1;i++)
     {
       for(j=0;j<c1;j++)
       {
            cin>>a[i][j];
       }
     }
      cout<<"\nEnter "<<r2*c2<<" elements for Matrix 2 : ";
     for(i=0;i<r2;i++)
     {
       for(j=0;j<c2;j++)
       {
            cin>>b[i][j];
       }
     }
      }

};
class Operations : public Matrix
{
     public :
     void get()
     {
      int choice;
      Matrix::get();
      while(1)
      {
     cout<<"\nEnter : \n1.Display Matrix\n2.Transpose of Matrix\n3.Addition of Matrix\n4.Subtraction of Matrix\n5.Multiplication of Matrices\n6.Exit";
      cout<<"\nEnter Your Choice : ";cin>>choice;
      switch(choice)
      {
            case 1 : display();break;
            case 2 : transpose();break;
            case 3 : add();break;
            case 4 : sub();break;
            case 5 : multi();break;
            case 6 : exit(0);break;
            default: cout<<"\nInavalid Choice";
      }
      }
     }
};
int main()
{
      Operations o;
      o.get();
}
void display()
{
   int i,j;char ans;
   cout<<"\nDo you want to display both the Matrices ? (y/n) : ";
   cin>>ans;
   if(ans=='y')
   {
       cout<<"\nMatrix 1 : \n";
       for(i=0;i<r1;i++)
       {
            for(j=0;j<c1;j++)
            {
                  cout<<" "<<a[i][j];
            }
            cout<<"\n";
       }
       cout<<"\nMatrix 2 : \n";
       for(i=0;i<r2;i++)
       {
            for(j=0;j<c2;j++)
            {
                  cout<<" "<<b[i][j];
            }
            cout<<"\n";
       }
   }
   else{
       cout<<"\nDo you want to display Matrix 1 ? (y/n) : ";
       cin>>ans;
       if(ans=='y')
       {
       cout<<"\nMatrix 1 : \n";
       for(i=0;i<r1;i++)
       {
            for(j=0;j<c1;j++)
            {
                  cout<<" "<<a[i][j];
            }
            cout<<"\n";
       }
       }
       if(ans=='n')
       {
       cout<<"\nMatrix 2 : \n";
       for(i=0;i<r2;i++)
       {
            for(j=0;j<c2;j++)
            {
                  cout<<" "<<b[i][j];
            }
            cout<<"\n";
       }
       }

   }
}
void transpose()
{
      char ans;
     cout<<"\nDo you want to dispaly Transpose of both the Matrix ? (y/n) : ";cin>>ans;
     if(ans=='y')
     {
        cout<<"\nTranspose of Matrix 1 : \n";
       for(i=0;i<c1;i++)
       {
            for(j=0;j<r1;j++)
            {
                  cout<<" "<<a[j][i];
            }
            cout<<"\n";
       }
       cout<<"\nTranspose of Matrix 2 : \n";
       for(i=0;i<c2;i++)
       {
            for(j=0;j<r2;j++)
            {
                  cout<<" "<<b[j][i];
            }
            cout<<"\n";
       }
     }
     else 
     {
        cout<<"\nDo you want to display Transpose of Matrix 1 ? (y/n) : ";cin>>ans;
        if(ans=='y')
        {
            cout<<"\nTranspose of Matrix 1 : \n";
       for(i=0;i<c1;i++)
       {
            for(j=0;j<r1;j++)
            {
                  cout<<" "<<a[j][i];
            }
            cout<<"\n";
       }
        }
        if(ans=='n')
        {
       cout<<"\nTranspose of Matrix 2 : \n";
       for(i=0;i<c2;i++)
       {
            for(j=0;j<r2;j++)
            {
                  cout<<" "<<b[j][i];
            }
            cout<<"\n";
       }
        }
     }
}
void add()
{
      if(r1==r2 && c1==c2)
      {
            cout<<"\nAddition of Matrix : \n";
            for(i=0;i<r1;i++)
            {
                  for(j=0;j<c1;j++)
                  {
                        c[i][j]=a[i][j]+b[i][j];
                  }
            }
            for(i=0;i<r1;i++)
            {
                  for(j=0;j<c1;j++)
                  {
                        cout<<"  "<<c[i][j];
                  }
                  cout<<"\n";
            }
      }
      else 
      {
            cout<<"\nAddition of Matrices is not Possible !!!\n";
      }
}
void sub()
{
       if(r1==r2 && c1==c2)
      {
            cout<<"\nSubtaraction of Matrix : \n";
            for(i=0;i<r1;i++)
            {
                  for(j=0;j<c1;j++)
                  {
                        c[i][j]=a[i][j]-b[i][j];
                  }
            }
            for(i=0;i<r1;i++)
            {
                  for(j=0;j<c1;j++)
                  {
                        cout<<"  "<<c[i][j];
                  }
                  cout<<"\n";
            }
      }
      else 
      {
            cout<<"\nSubtraction of Matrices is not Possible !!!\n";
      }
}
void multi()
{
      if(c1==r2)
      {
            cout<<"\nMatrix Multiplication : \n";
            for(i=0;i<r1;i++)
            {
                  for(j=0;j<c2;j++)
                  {
                        c[i][j]=0;
                        for(k=0;k<r2;k++)
                        {
                              c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                        }
                        cout<<" "<<c[i][j];
                  }
                  cout<<"\n";
            }
      }
      else 
      {
            cout<<"\nMatrix Multiplication not Possible!!!\n";
      }
}