#include<iostream>
using namespace std;
int main(){
    char temp;
    cout<<"enter in what temprature you have to change : ";
    cin>>temp;
    if(temp=='c' || temp=='C'){
        float c;
        cout<<"enter value of f to change : ";
        cin>>c;
        float ans = (5/9)*(c-32);
        cout<<"f = "<<ans;
    }
    else if(temp=='f' or temp=='F'){

        float c;
        cout<<"enter value of c to change : ";
        cin>>c;
        float ans = (c*9/5)+32;
        cout<<"f = "<<ans;

    }
    else{
        cout<<"invalid input";
    }
    return 0;
}