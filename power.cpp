// Given a positive integer, return true if it is a power of 2.

#include<iostream>
using namespace std;

bool check(int n){
    if(n==1) return true;
    if(n==0 || n%2!=0) return false;
    return check(n/2);  
}

int main(){
    int n;
    cin>>n;
    if(check(n)){
        cout<<"TRUE"<<endl;
    }
    else{
        cout<<"FALSE"<<endl;
    }
}