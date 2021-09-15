#include<iostream>
#include<fstream>

using namespace std;


int main(){
ofstream out("dataa");
    float days, cost;
cout<< "Enter the number of days Stayed : ";
cin>>days;
cout<<"The severity of illness is : " ;
out<<"The severity of illness is : " ;
if(days<=1){
    cout<<" Minor"<< endl;
    out<<" Minor";}
    else if(days<=3){
    cout<<" Moderate"<< endl;
    out<<" Moderate";}
        else if(days<=6){
        cout<<" Major"<< endl;
        out<<" Major";}
        else{
        cout<<" Extreme"<< endl;
        out<<" Extreme";}
        cost= 200*days;
   cout<<"The total cost for "<<days<<" days is : "<<cost;
   out<<"\n";
   out<<"The total cost for "<<days<<" days is : "<<cost;







return 0;}
