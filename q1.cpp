#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter marks of first student : ";
    cin>>a;
    cout<<endl<<"enter marks of second student : ";
    cin>>b;
    cout<<endl<<"enter marks of third student : ";
    cin>>c;
float avg=(a+b+c)*1.0/3;
cout<<endl<<"avg marks of students are : "<<avg;
    return 0;
}