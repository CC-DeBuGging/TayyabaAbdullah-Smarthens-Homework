#include<iostream>
using namespace std;

int main(){
    long long int digits;
    int count=0;
    cout<<"enter any number:";
    cin>>digits;

    while(digits>0)
    {
        digits=digits/10;
        count++;
    }
    cout<<"digits are:"<<count;
    return 0;
}