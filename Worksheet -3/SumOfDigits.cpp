#include <bits/stdc++.h>  
#include <iostream> 
using namespace std; 
int Sum(int Num) 
{ 
    if(Num==0) 
    {
    return 0; 
    }
    else
    {
      return Num%10+Sum(Num/10); 
    }
} 
int main () 
{
    int Num; 
    cout<<"Enter a number "; 
    cin>>Num; cout<<Sum(Num); 
}    