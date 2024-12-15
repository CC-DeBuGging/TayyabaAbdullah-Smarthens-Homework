#include<iostream>
using namespace std;
int evensum(int no1,int no2);

int main(){
    int start,end,sum;
    cout<<"enter any starting number:";
    cin>>start;
    cout<<"enter any ending number:";
    cin>>end;
    sum=evensum(start,end);
    cout<<"sum of all even numbers in givn range:"<<sum;
    return 0;
    
}

int evensum(int no1,int no2){
    int sum=0;
   for(int i=no1;i<=no2;i++)
   {
    if(i%2==0)
    sum=sum+i;
   }
   return sum;
}
