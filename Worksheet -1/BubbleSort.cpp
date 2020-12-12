#include <iostream>
#include <cstring>
#define Max 100

using namespace std;

int main()
{
    char string[Max];
    char temp;
    
    cout<<"Enter the string ";
    cin>>string;
    int n;
    for(n=0;string[n]!='\0';n++)
    {
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if(string[i]>string[j])
         
          
            temp=string[i];
            string[i]=string[j];
            string[j]=temp;
        }    
        
    }
    cout<<string;
    
    
    return 0;
}