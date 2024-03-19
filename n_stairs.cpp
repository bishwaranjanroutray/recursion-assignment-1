// Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3
// steps at each level.

#include<iostream>
using namespace std;

int count(int n){
    if(n==1 || n==2 || n==3){
        return n;
    }

    int c1=count(n-1);
    int c2=count(n-2);
    int c3=count(n-3);

    int total=c1+c1+c3;

    return total;
}

int main(){
    cout<<count(4);
}