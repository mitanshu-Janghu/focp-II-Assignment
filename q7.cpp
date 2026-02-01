#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3;
cout<<"enter marks of 1 student : ";
cin>>x1;
cout<<"enter marks of 2 student : ";
cin>>x2;
cout<<"enter marks of 3 student : ";
cin>>x3;
cout<<"highest marks are "<<max(x1,max(x2,x3));
    return 0 ;
}