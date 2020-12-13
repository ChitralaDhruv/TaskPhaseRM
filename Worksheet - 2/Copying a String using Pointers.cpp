#include <iostream>
using namespace std;
#define MAX 100

void copy(char *s1,char *s2)
{
    int i;
    for(i=0;*s1!='\0';i++)
    {
      *s2=*s1;
      s1++;
      s2++;
    }
    for(;i>0;i--)
    {
        s2--;
    }
    cout<<s2;
    
}

int main()
{
    char String1[MAX];
    char String2[MAX];
    cout<<"Enter the string ";
    cin>>String1;
    copy(String1,String2);
    return 0;
}