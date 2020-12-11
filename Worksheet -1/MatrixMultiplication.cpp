#include <iostream>

using namespace std;




int main()
{
    int p , q , r , s;
    cout<<"Enter p ";
    cin>>p;
    
    cout<<"Enter q ";
    cin>>q;
    
    cout<<"Enter r ";
    cin>>r;
    
    cout<<"Enter s ";
    cin>>s;
    
    int Matrix1[p][q];
    int Matrix2[r][s];
    int ProductMatrix[p][s];
    
    
    if(q==r)
    {
        
        cout<<"Enter First Matrix \n";
    for(int i=0;i!=p;i++)
       for(int j=0;j!=q;j++)
       cin>>Matrix1[i][j];
       
       
    cout<<"Enter Second Matrix \n";
    for(int i=0;i!=r;i++)
       for(int j=0;j!=s;j++)
       cin>>Matrix2[i][j];
       
       
       
    for(int i=0;i<p;i++)
       for(int j=0;j<s;j++)
       {
           ProductMatrix[i][j]=0;
           for (int k = 0; k<q; k++)
                ProductMatrix[i][j] += Matrix1[i][k] * Matrix2[k][j];
       }
       
          
       
    cout<<"Resultant Matrix is "<<endl;
    
    for(int i=0;i!=p;i++)
    {
        for(int j=0;j!=s;j++)
        {
        cout<<ProductMatrix[i][j]<<"      ";
        }
    cout<<"\n";
    }
    }
    
    else
    {
        cout<<"Given pair of matrices cannot be multiplied.";
    }
    
    
    return 0;          
}






       
       