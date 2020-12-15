#include <iostream>

using namespace std;

int Factroial(int Num)
{
   if(Num==1)   
   {
       return 1;
   }
   else
   {
       return Num*Factroial(Num-1);
   }
}    



int main()
{
    static int Num;
    cout<<"Enter a number ";
    cin>>Num;
    cout<<Factroial(Num);
}
