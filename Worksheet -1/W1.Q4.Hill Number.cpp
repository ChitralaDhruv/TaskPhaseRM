#include <iostream>

using namespace std;

int main()
{
    int Num;
    cout<<"Enter Number  ";
    cin>>Num;
    int digits=0 ;
    int ArrayElement;
    int Var=Num;
    int x=0 , count=1;
    for(;Var!=0;digits++)
    Var=Var/10;
    
    if(digits<3)
    {  
      cout<<"It is not a Hill Number";
    }  
    else
    {
    
    int numArray[digits];
    
    for(int n=0;Num!=0;n++)
    {
      ArrayElement=Num%10;
      numArray[n]=ArrayElement;
      Num=Num/10;
       
    }  
    
    for(;numArray[x]<numArray[x+1] && x<digits;x++)
    {
        count=count+1;
    } 

    for(;numArray[x]>numArray[x+1] && x<digits-1;x++)
    {
        count=count+1;
    }

    if(count==digits)
      cout<<"It is a Hill Number";
    else
      cout<<"It is not a Hill Number";
    
    }
    return 0;
    
    
    
}
