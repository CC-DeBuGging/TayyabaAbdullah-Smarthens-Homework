#include <iostream>
using namespace std;
float taxCalculator(string type,float price);
int main(){
    string vehicletype;
    float vehicleprice,n;

    cout<<"enter the vehicle type code:  ";
    cin>>vehicletype;

    cout<<"enter the final price of the vehicle $:";
    cin>>vehicleprice;

    n= taxCalculator(vehicletype,vehicleprice);

    cout<<"the final price of vehicle of type:"<<vehicletype<<"after adding the tax is"<<n<<endl;

}
float taxCalculator (string type,float price){
    if (type == "M")
    {
      return(price+(price*0.06));  
    }
    else if (type == "E")
    {
        return(price+(price*0.08));
    }
    
    else if (type=="S")
    {
      return(price+(price*0.1));  
    }
    else if (type=="V")
    {
     return(price+(price*0.12));   
    }
    else if (type=="T")
    {
        return(price+(price*0.15));
    }
    else
    {
    return 0;
    }    

}