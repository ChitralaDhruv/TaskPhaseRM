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
    for(;DummyNum1/16!=0;count++)            //Hex Coversion
    {
        DummyNum1=DummyNum1/16;
    }
    int HexArray[count];
    for(int x=0;DummyNum2!=0;x++)
    {
        HexArray[count-1-x]=DummyNum2%16;
        DummyNum2=DummyNum2/16;
    }
    
    
    cout<<"0x";
    for(int y=0;y<count;y++)
    {
        if(HexArray[y]>9)
        {
            
            int letters=HexArray[y]-9;
            switch(letters)
           {
                case 1:
                {
                   cout<<"A";
                   break;
                }
                case 2:
                {
                   cout<<"B";
                   break;
                }
                case 3:
                {
                   cout<<"C";
                   break;
                }
                case 4:
                {
                   cout<<"D";
                   break;
                }
                case 5:
                {
                   cout<<"E";
                   break;
                }
                case 6:
                {
                   cout<<"F";
                   break;
                }
            }    
        }
        else
        {
           cout<<HexArray[y];
        }
        
        
    }
    return 0;
}
