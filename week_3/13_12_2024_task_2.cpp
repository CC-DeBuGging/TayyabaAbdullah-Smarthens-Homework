#include<iostream>
using namespace std;
int main(){
int i,largest=0,min;
cout<<"enter any num (-1 to stop) :";
cin>>i;
while (i!=-1)
{
    if (i>=largest)
    {
        largest=i;
    }
    else{
        largest=largest;
    }
    cout<<"enter any num (-1 to stop):";
    cin>>i;

}

cout<<"largest num is :"<<largest;
}
