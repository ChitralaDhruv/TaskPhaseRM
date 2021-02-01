#include <iostream>

using namespace std;


int DistanceFromLeftSensor()
{
    return SensorValue;
}

int DistanceFromRightSensor()
{
    return SensorValue;
}

int DistanceFromFrontSensor()
{
    return SensorValue;
}

int DistanceFromRearSensor()
{
    return SensorValue;
}

int Stop()
{
    //To stop the motion of bot
}


int Move(int v, int theta)
{
    if(theta==0)
    {
        while(DistanceFromFrontSensor()>10)
        {
           //Move Forward
        }
        
        Stop();
        
        if(DistanceFromRightSensor()<=10)
        {
            Move(v,90);
        }
        else
        {
            Move(v,270);
        }
    }
    else if(theta==90)
    {
        while(DistanceFromLeftSensor()>10)
        {
            //Move Left
        }
        
        Stop();
        
        if(DistanceFromFrontSensor()<=10)
        {
            Move(v,180);
        }
        else
        {
            Move(v,0);
        }
        
    }
    else if(theta==180)
    {
        while(DistanceFromRearSensor()>10)
        {
            //Move Back
        }
        
        Stop();
        
        if(DistanceFromLeftSensor()<=10)
        {
            Move(v,270);
        }
        else
        {
            Move(v,90);
        }
    }
    else if(theta==270)
    {
        while(DistanceFromRightSensor()>10)
        {
            //Move Right
        }
        
        Stop();
        
        if(DistanceFromFrontSensor()<=10)
        {
            Move(v,180);
        }
        else
        {
            Move(v,0);
        }
    }
}


int main()
{
    Move(30,270);
    
    return 0;
}