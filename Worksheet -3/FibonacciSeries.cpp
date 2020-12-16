#include <iostream>

using namespace std;
void Fibonacci(int Array[],int count,int n)
{
    if(count==n)
    {
      for(int y=0;y<n;y++)
      {
       cout<<Array[y]<<"  ";
      }  
    }
    else
    {
      Array[2+count]=Array[1+count]+Array[count];
      Fibonacci(Array,count+1,n);
    }
}

int main()
{
    int n;
    cout<<"Enter number of terms ";
    cin>>n;
    int Array[n];
    Array[0]=0;
    Array[1]=1;
    Fibonacci(Array,0,n);
    
}



