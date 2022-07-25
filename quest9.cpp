#include<iostream>
using namespace std;
int findCountOfDigits(int n){
    if(n/10==0) return 1;
    if(!n) return 0;
    else{
        return 1 + findCountOfDigits(n/10);
    }
}
int main(){
    int n;
    cout<<"Enter the number whose count of digits you want:";
    cin>>n;
    cout<<"The number of digits is:"<<findCountOfDigits(n);
    return 0;
}