#include <iostream>

using namespace std;


int MoveRight(int v)
{
    int v1=v;
    int v2=0;
    int v3=v;
    int v4=0;
    
    if(DistanceFromRightSensor<=10)
    {
        return Move(v,270);
    }
    else
    {
        return MoveRight(v);
    }
}

int MoveLeft(int v)
{
    int v1=(-v);
    int v2=0;
    int v3=(-v);
    int v4=0;
    
    if(DistanceFromLeftSensor<=10)
    {
        return Move(v,90);
    }
    else
    {
        return MoveLeft(v);
    }
}

int MoveForward(int v)
{
    int v1=0;
    int v2=v;
    int v3=0;
    int v4=v;
    
    if(DistanceFromFrontSensor<=10)
    {
        return Move(v,0);
    }
    else
    {
        return MoveForward(v);
    }
}

int MoveBackward(int v)
{
    int v1=0;
    int v2=(-v);
    int v3=0;
    int v4=(-v);
    
    if(DistanceFromRearSensor<=10)
    {
        return Move(v,180);
    }
    else
    {
        return MoveBackward(v);
    }
}



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



void Move(int v, int theta)
{
    if(theta==0)
    {
        if(DistanceFromRightSensor<=10)
        {
            MoveLeft(v);
        }
        else
        {
            MoveRight(v);   
        }
    }
    
    else if(theta==90)
    {
        if(DistanceFromFrontSensor<=10)
        {
            MoveBackward(v);
        }
        else
        {
            MoveForward(v);   
        }
    }
    
    else if(theta==180)
    {
        if(DistanceFromRightSensor<=10)
        {
            MoveLeft(v);
        }
        else
        {
            MoveRight(v);   
        }
    }
    
    else if(theta==270)
    {
        if(DistanceFromFrontSensor<=10)
        {
            MoveBackward(v);
        }
        else
        {
            MoveForward(v);   
        }
    }
    
}


int main()
{
    MoveRight();
    
    return 0;
}
