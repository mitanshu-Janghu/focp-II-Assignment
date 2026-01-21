#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"first number: ";
    cin>>a;
    cout<<"second number: ";
    cin>>b;
    int temp=a;
    a=b;
    b=temp;
    return 0;
}