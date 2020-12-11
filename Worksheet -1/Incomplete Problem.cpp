#include <iostream>

using namespace std;

int main()
{
    int Matrix[3][3];
    cout<<"Enter Matrix \n";
    for(int i=0;i!=3;i++)
       for(int j=0;j!=3;j++)
       cin>>Matrix[i][j];
       
    cout<<"Given Matrix is"<<"\n";
    for(int i=0;i!=3;i++)
    {
        for(int j=0;j!=3;j++)
        {
        cout<<Matrix[i][j]<<"  ";
        }
    cout<<"\n";
    }   
       
    int i=0;
    int j=0;
    for(;i!=3;i++)
       for(;j!=3;j++)
       if(Matrix[i][j]==0)
         for(int x=0;x<3;x++)
         {
           Matrix[i][x]=0;
           for(int y=0;y<3;y++)
           {
             Matrix[y][j]=0;
           }
         }
         
    
    cout<<"Output Matrix is"<<"\n";
    for(int i=0;i!=3;i++)
    {
        for(int j=0;j!=3;j++)
        {
        cout<<Matrix[i][j]<<"  ";
        }
    cout<<"\n";
    }
         
    return 0;
}
