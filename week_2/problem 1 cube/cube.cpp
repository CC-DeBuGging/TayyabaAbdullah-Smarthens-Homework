#include<iostream>
using namespace std;
int sticker(int len);
int main()
{
int length;
cout<<"Enter the length of cube  ";
cin>>length;
cout<<"Total number of stickers: "<<sticker(length);
return 0;
}
int sticker(int len)
{
    return  len*len*6;
}
