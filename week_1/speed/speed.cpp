#include <iostream>
using namespace std;

    int main ()
{ 
    cout <<"Enter Distance:   ";
    int distance;
    cin>>distance;

    cout<<"Enter time:  ";
    int time;
    cin>>time;

     int speed;
    speed = distance/time;
    cout<<"speed is:  "<<speed;
    // cout<<distance<<time;
    return 0;
}
