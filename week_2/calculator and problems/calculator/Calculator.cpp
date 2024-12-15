#include<iostream>
using namespace std;
double add(double no1,double no2);
double sub(double no1,double no2);
double mul(double no1,double no2);
double div(double no1,double no2);
int main()
{
double num1,num2,ans;
char oprtr;
cout<<"Enter number 1:";
cin>>num1;
cout<<"Enter number 2:";
cin>>num2;
cout<<"Enter any operator(+,-,*,/)";
cin>>oprtr;
if(oprtr=='+')
{
    ans=add(num1,num2);
    cout<<"Calculated result = "<<ans;
}
else if(oprtr=='-')
{
    ans=sub(num1,num2);
    cout<<"Calculated result = "<<ans;
}
else if(oprtr=='*')
{
    ans=mul(num1,num2);
    cout<<"Calculated result = "<<ans;
}
else if(oprtr=='/')
{
    ans=div(num1,num2);
    cout<<"Calculated result = "<<ans;
}
else
{
    cout<<"Something went worng!!";
} 

return 0;
    
}
double add(double no1,double no2)
{
    return no1+no2;
}
double sub(double no1,double no2)
{
    return no1-no2;
}
double mul(double no1,double no2)
{
    return no1*no2;
}
double div(double no1,double no2)
{
    return no1/no2;
}
