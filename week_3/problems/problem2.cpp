#include <iostream>
using namespace std;
int main(){
    int i;
    int sum=0;
    cout<<"enter any num :";
        cin>>i;
    while (i>=0)
    {   sum=sum+i;
        cout<<"enter any num :";
        cin>>i;
       
    }
 cout<<"user has entered a -ve num\n";
cout<<"sum is:"<<sum;
 return 0;   
}
