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

int main()
{
    int Matrix1[3][3];
    cout<<"Enter First Matrix \n";
    for(int i=0;i!=3;i++)
       for(int j=0;j!=3;j++)
       cin>>Matrix1[i][j];
    
    MatrixTranspose(Matrix1);
    return 0;
}



