#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of employees : ";
    cin>>n;
    for(int i = 1  ; i<=n;i++){
        int salary;
        cout<<"enter slary of employee "<<i<<" : ";
        cin>>salary;
        int bonus=12*salary/100;
        cout<<"bonus : "<<bonus<<endl;
        cout<<"total salary : "<<salary+bonus;
    }
    return 0;
}