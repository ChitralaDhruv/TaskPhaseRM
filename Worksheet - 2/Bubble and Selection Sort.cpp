#include <iostream>
using namespace std;

void SelectionSort(int Array[],int n)
{
    int i;
    int small;
    int j;
    int temp;
    for(i=0;i<n-1;i++)
    {
      small=i;
      for(j=i+1;j<n;j++)
      {
          if(Array[small]>Array[j])
            small=j;
            
      }
      temp=Array[i];
      Array[i]=Array[small];
      Array[small]=temp;  
    }
    cout<<"Sorted array is"<<endl;
    for(int y=0;y<n;y++)
    {
     cout<<Array[y]<<"  ";
    } 
}

void BubbleSort(int Array[],int n)
{
    int i,j;
    int temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(Array[j]>Array[j+1])
            {
              temp=Array[j];
              Array[j]=Array[j+1];
              Array[j+1]=temp;
            }  
        }
    }
    cout<<"Sorted array is"<<endl;
    for(int y=0;y<n;y++)
    {
     cout<<Array[y]<<"  ";
    }
}



int main()
{
    int n;
    cout<<"Enter the size of Array ";
    cin>>n;
    int Array[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>Array[i];
    }
    char choice;
    cout<<"Enter 's' for Selection Sort or 'b' for Bubble Sort"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 's' :
        cout<<"You have selected Selection Sort"<<endl;
        SelectionSort(Array,n);
        break;
    case 'b' :
        cout<<"You have selected Bubble Sort";
        BubbleSort(Array,n);
        break;
    }
    return 0;
}