#include <iostream>

using namespace std;
int EuclideanGCD(int Num1,int Num2)
{
    if(Num2%Num1==0)
    {
        return Num1;
    }
    else
    {
        return EuclideanGCD(Num2%Num1,Num1);
    }
}

int main()
{
    int Num1;
    int Num2;
    cout<<"Enter Small Number ";
    cin>>Num1;
    cout<<"Enter Big Number ";
    cin>>Num2;
    cout<<"GCD of "<<Num1<<" and "<<Num2<<" is "<<EuclideanGCD(Num1,Num2);
    
    return 0;
}
