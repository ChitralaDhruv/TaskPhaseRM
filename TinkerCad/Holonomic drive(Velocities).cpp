#include <iostream>
#include <math.h>
#define PI 3.14159265


using namespace std;

float velocity(float v,float x,float y)
{
    float conv=PI/180;
    float vel=(v*(cos(x*conv)*cos(y*conv)))+(v*(sin(x*conv)*sin(y*conv)));
    cout<<vel<<endl;
    
    return vel;
    
}


int main()
{
    float x;
    float y1,y2,y3,y4;
    float v;
    cout<<"Enter the value of Velocity ";
    cin>>v;
    cout<<"Enter the direction of Bot (Angle) ";
    cin>>x;
    cout<<"Enter the angles made by the four wheels ";
    cin>>y1>>y2>>y3>>y4;
    
    
    float v1=velocity(v,x,y1);
    float v2=velocity(v,x,y2);
    float v3=velocity(v,x,y3);
    float v4=velocity(v,x,y4);
    
    //cout<<v1<<endl<<v2<<endl<<v3<<endl<<v4<<endl;

    return 0;
}
