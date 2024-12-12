#include<iostream>
using namespace std;

int main(){
    int no,multiply;
    cout<<"enter number"<<endl;
    cin>>no;
    for(multiply=1;multiply<=10;multiply++){
        cout<<no<<"*"<<multiply<<"="<<(no*multiply)<<endl;
    }
return 0;
}