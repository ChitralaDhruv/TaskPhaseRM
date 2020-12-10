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
    for(;DummyNum1/8!=0;count++)            //Octal Coversion
    {
        DummyNum1=DummyNum1/8;
    }
    int OctalArray[count];
    for(int x=0;DummyNum2!=0;x++)
    {
        OctalArray[count-1-x]=DummyNum2%8;
        DummyNum2=DummyNum2/8;
    }
    cout<<"0o";
    for(int y=0;y<count;y++)
    {
        cout<<OctalArray[y];
    }
    cout<<"\n";
    
    
    
    return 0;
}
