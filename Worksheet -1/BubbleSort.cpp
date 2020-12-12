#include <iostream>
#include <string.h>
#define MAX 100

using namespace std;

int main()
{
    char word[MAX];
    char temp;
    
    cout<<"Enter a string ";
    cin>>word;
    int n;
    n=strlen(word);
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-1);j++)
        {
            if((int)word[j]>(int)word[j+1])
            {
                temp=word[j];
                word[j]=word[j+1];
                word[j+1]=temp;
            }
        }
    }
    cout<<word;
    
    
    return 0;
}
