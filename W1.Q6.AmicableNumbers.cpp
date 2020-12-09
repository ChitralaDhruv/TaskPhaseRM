#include <iostream>

using namespace std;

int main()
{
    
    int Num1 , Num2;                   //Num1 is the number whose factors sum id calculated and Num2 is the second number.
    int FactorSum=0;
    cout<<"Enter First Number ";
    cin>>Num1;                        //Scanning Num1
    cout<<"Enter Second Number ";
    cin>>Num2;                        //Scanning Num2
    for(int x=1;x<=Num1/2;x++)        //A Loop for getting Factors of Num1
    {
      if(Num1%x==0)
      {
          FactorSum=FactorSum+x;      //Addition of Factors
      }
    }
    
    if(FactorSum==Num2)               //Condition to check whether given pair of numbers anr  Amicable Numbers or not
    {
        cout<<"Ther are Amicable Numbrs.";
    }
    else
    {
        cout<<"Ther are  not Amicable Numbrs.";
    }
    return 0;
    
    
    
}