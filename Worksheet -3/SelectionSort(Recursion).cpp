#include <iostream>

using namespace std;
int * SelectionSort(int Array[], int i, int j, int n, int check)
{
    int temp;
   {
    if(i<n-1)
    {
        if(check==1)
        {
            j=i+1;
        }
        if(j<n)
        {
            if(Array[i]>Array[j])
            {
                temp=Array[i];
                Array[i]=Array[j];
                Array[j]=temp;
            }
            SelectionSort(Array,i,j+1,n,0);
        }
        SelectionSort(Array,i+1,0,n,1);
    }
   }
   return Array;
}

int main()
{
    int n;
    cout<<"Enter the size of Array ";
    cin>>n;
    int Array[n];
    int ArrayCopy[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>Array[i];
    }
    SelectionSort(Array,0,0,n,1);
    cout<<"Sorted array is"<<endl;
    for(int y=0;y<n;y++)
    {
     cout<<Array[y]<<"  ";
    }  
    
}



