#include <iostream>

using namespace std;

int main()
{
    int Matrix1[3][3];
    int Matrix2[3][3];
    int ProductMatrix[3][3];
    cout<<"Enter First Matrix \n";
    for(int i=0;i!=3;i++)
       for(int j=0;j!=3;j++)
       cin>>Matrix1[i][j];
    cout<<"Enter Second Matrix \n";
    for(int i=0;i!=3;i++)
       for(int j=0;j!=3;j++)
       cin>>Matrix2[i][j];
          
          
              
    for(int i=0;i!=3;i++)
       for(int j=0;j!=3;j++)
       {
           ProductMatrix[i][j]=Matrix1[i][0]*Matrix2[0][j]+Matrix1[i][1]*Matrix2[1][j]+Matrix1[i][2]*Matrix2[2][j];
       }
       
    for(int i=0;i!=3;i++)
    {
        for(int j=0;j!=3;j++)
        {
        cout<<ProductMatrix[i][j]<<"     ";
        }
    cout<<"\n";
    }
       
    return 0;
    
}
