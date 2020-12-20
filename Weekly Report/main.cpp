#include <iostream>
#include <cstring>
#include<bits/stdc++.h> 
#define MAX 100

using namespace std;

int main()
{
    char word[30];
    char temp;
    
    cout<<"Enter a string ";
    cin>>word;
    cout<<word<<endl;
    int n;
    for(n=0;word[n]!='\0';n++)
    {
        
    }
     for (int i=0; i<n-1;i++) 
    { 
        for (int j=i+1;j<n;j++) 
        { 
            if (strcmp(word[i],word[j]) > 0) 
            { 
                strcpy(temp,word[i]); 
                strcpy(word[i],word[j]); 
                strcpy(word[j],temp); 
            } 
        } 
    }
    cout<<string;
    
    
    return 0;
}
