#include <iostream>

using namespace std;

void MatrixTranspose(int Matrix[3][3])
{
    int temp;
    for(int i=0;i<3;i++)
       for(int j=0;j<3;j++)
         if(i<j)
         {
             temp=Matrix[j][i];
             Matrix[j][i]=Matrix[i][j];
             Matrix[i][j]=temp;
             
         }
    for(int i=0;i!=3;i++)
    {
        for(int j=0;j!=3;j++)
        {
        cout<<Matrix[i][j]<<"     ";
        }
    cout<<"\n";
    }
}



void MatrixMultiplication(int Mat1[3][3],int Mat2[3][3])
{
    int ProductMatrix[3][3];
       for(int i=0;i!=3;i++)
       for(int j=0;j!=3;j++)
       {
           ProductMatrix[i][j]=Mat1[i][0]*Mat2[0][j]+Mat1[i][1]*Mat2[1][j]+Mat1[i][2]*Mat2[2][j];
       }
    for(int i=0;i!=3;i++)
    {
        for(int j=0;j!=3;j++)
        {
        cout<<ProductMatrix[i][j]<<"     ";
        }
    cout<<"\n";
    }

}



void MatrixMultiplicationAndTranspose(int Mat1[3][3],int Mat2[3][3])
{
    int ProductMatrix[3][3];
       for(int i=0;i!=3;i++)
       for(int j=0;j!=3;j++)
       {
           ProductMatrix[i][j]=Mat1[i][0]*Mat2[0][j]+Mat1[i][1]*Mat2[1][j]+Mat1[i][2]*Mat2[2][j];
       }
    
    MatrixTranspose(ProductMatrix);

}


void TransposeAndMultiplication(int Mat1[3][3],int Mat2[3][3])
{
    int temp1;
    for(int i=0;i<3;i++)
       for(int j=0;j<3;j++)
         if(i<j)
         {
             temp1=Mat1[j][i];
             Mat1[j][i]=Mat1[i][j];
             Mat1[i][j]=temp1;
             
         }
         
    int temp2;
    for(int i=0;i<3;i++)
       for(int j=0;j<3;j++)
         if(i<j)
         {
             temp2=Mat2[j][i];
             Mat2[j][i]=Mat2[i][j];
             Mat2[i][j]=temp2;
             
         }
         
         
    int ProductMatrix[3][3];
       for(int i=0;i!=3;i++)
       for(int j=0;j!=3;j++)
       {
           ProductMatrix[i][j]=Mat2[i][0]*Mat1[0][j]+Mat2[i][1]*Mat1[1][j]+Mat2[i][2]*Mat1[2][j];
       }    
       
    for(int i=0;i!=3;i++)
    {
        for(int j=0;j!=3;j++)
        {
        cout<<ProductMatrix[i][j]<<"     ";
        }
    cout<<"\n";
    }   
}

int main()
{
    int Matrix1[3][3];
    int Matrix2[3][3];
    cout<<"Enter First Matrix of order 3x3 \n";
    for(int i=0;i!=3;i++)
       for(int j=0;j!=3;j++)
       cin>>Matrix1[i][j];
    cout<<"Enter Second Matrix of order 3x3 \n";
    for(int i=0;i!=3;i++)
       for(int j=0;j!=3;j++)
       cin>>Matrix2[i][j];
   
    cout<<"(AB)' is "<<endl;
    MatrixMultiplicationAndTranspose(Matrix1,Matrix2);
    cout<<"B'A' is"<<endl;
    TransposeAndMultiplication(Matrix1,Matrix2);
    cout<<"Therefore (AB)' = B'A' is TRUE ";
    
    
    return 0;
}