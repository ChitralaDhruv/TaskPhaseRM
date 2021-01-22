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
    float WheelArray[4]={45,315,225,135};
    
    
    float v1=velocity(v,x,WheelArray[0]);
    float v2=velocity(v,x,WheelArray[1]);
    float v3=velocity(v,x,WheelArray[2]);
    float v4=velocity(v,x,WheelArray[3]);
    
    

    return 0;
}
