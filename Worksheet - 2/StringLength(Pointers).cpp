#include <iostream>
#define Max 100
using namespace std;

 
int main() 
{
 
    char text[Max];
    char *adress = text;
    int count = 0;
    
    cout<<"Enter any string ";
    cin>>text;
 
    for(;*adress!= '\0'; count++)
    {
        *adress++;
    }
    cout<<"Length of "<<text<<" is "<<count;
 
    return 0;
}
