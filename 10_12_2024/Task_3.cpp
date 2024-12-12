#include<iostream>
using namespace std;

int main()
{
  long long int digits,i,sum=0;
  cout<<"enter any number:";
  cin>>digits;

  while(digits>0)
  {
    i=digits%10;
    sum=sum+i;
    digits=digits/10;
  }  
  cout<<"sum is:"<<sum;
  return 0;
}