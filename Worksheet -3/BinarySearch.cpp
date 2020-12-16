#include <iostream>

using namespace std;
#define MAX 100

int * ArraySort(int Array[],int n)
{
    int i;int j;
    int small=i;
    int temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(Array[small]>Array[j])
            small=j;
        }
        
     temp=Array[i];
     Array[i]=Array[small];
     Array[small]=temp;
      
    }
    
    return Array;
    
}


int  BinarySearch(int SortedArray[],int Last,int First,int SearchElement)
{
    int Mid=(Last+First)/2;
    if(Last>=First)
    {
    
      if(SortedArray[Mid]==SearchElement)
      {
          return Mid;
      }
      else if(SortedArray[Mid]>SearchElement)
      { 
          return BinarySearch(SortedArray,Mid-1,First,SearchElement);
      }
      else
      {
          return BinarySearch(SortedArray,Last,Mid+1,SearchElement);
      }
    }
    else
    {
        return -1;
    }
    
}

int main()
{
    int n; int value;
    int Array[MAX];
    int SearchElement;
    cout<<"Enter Number of elements ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>Array[i];
    }
    
    cout<<"Enter the Search Element ";
    cin>>SearchElement;
    value=BinarySearch(ArraySort(Array,n),n-1,0,SearchElement);
    if(value==-1)
    {
        cout<<"No match found";   
    }
    else
    {
        cout<<"Match Found";
    }
    
    return 0;
}
