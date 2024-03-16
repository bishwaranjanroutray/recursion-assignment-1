#include<iostream>
using namespace std;

int SUM(int a, int b){
    if(a>b) return 0;
    if(a%2==0) return SUM(a+1,b);
    return a+SUM(a+2,b);
}

int main(){
    cout<<SUM(1,5);
    
}