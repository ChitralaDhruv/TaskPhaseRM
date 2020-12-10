#include <iostream>

using namespace std;

int main()
{
    int Num;
    int n=1;
    int count=1;
    cout<<"Enter Number ";
    cin>>Num;
    int DummyNum1=Num;
    int DummyNum2=Num;
    for(;DummyNum1/2!=0;count++)      //Binary conversion
    {
        DummyNum1=DummyNum1/2;
    }
    int BinaryArray[count];
    for(int x=0;DummyNum2!=0;x++)
    {
        BinaryArray[count-1-x]=DummyNum2%2;
        DummyNum2=DummyNum2/2;
    }
    cout<<"0b";
    for(int y=0;y<count;y++)
    {
        cout<<BinaryArray[y];
    }
    
    return 0;
}
