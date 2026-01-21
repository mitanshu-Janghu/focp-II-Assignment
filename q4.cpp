#include<iostream>
using namespace std;
int main(){
    int it,qau;
    float pr;
    cout<<"enter item number : ";
    cin>>it;
    cout<<"enter quantity : ";
    cin>>qau;
    cout<<"enter price : ";
    cin>>pr;
    cout<<" price  after discount is : "<<(pr*qau)-(pr*qau)*.2;
    return 0;
}