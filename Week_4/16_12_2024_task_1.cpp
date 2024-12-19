#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

double volume(double length,double width,double height, string u);

int main(){
    double  length, width, height,v;
    string unit;
    

    cout<<"enter the lenght of pyramid: ";
    cin>>length;
    
    cout<<"enter the width of pyramid: ";
    cin>>width;

    cout<<"enter the height of pyramid: ";
    cin>>height;
    
    cout<<"enter the desired output unit(centimeter,milimeter,meter,kilometer): ";
    cin>>unit;
    
    v = volume(length, width, height, unit ); 


    cout << fixed << setprecision(5);
    cout<< "Volume of the Paramide " << v <<unit;

}
double volume(double length, double width, double height,string unit){
    double value = (length*width*height)/3;

   if (unit == "centimeter") {
        return value * 1000000;
    } else if (unit == "milimeter") {
        return value * 1000000000;
    } else if (unit == "kilometer") {
        return value / 1000000000;
    } else if (unit == "meter") {
        return value;
    }

}