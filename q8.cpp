#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter id : ";
    cin>>x;
    if(x%3==0 && x%5==0) {
        cout<<"Buss Fuss";
    }
    else if(x%3==0) cout<<"Buss";
    else if(x%5==0) cout<<"Fuss";
    else cout<<" none ";
    return 0 ;
}