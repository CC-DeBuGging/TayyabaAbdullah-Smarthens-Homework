#include<iostream>
using namespace std;
void vote(int x);
int main(){
int age;
cout<<"Enter your age:";
cin>>age;
vote(age);
return 0;
}
void vote(int x){
if(x>=18)
cout<<"You are eligible to vote";
else
cout<<"You are not eligible to vote";
}