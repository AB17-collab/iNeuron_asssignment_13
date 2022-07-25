#include<iostream>
using namespace std;
int findSumOfDigits(int n){
    if(n==0){
        return 0;
    }
    else{
        int k = n%10;
        return (k + findSumOfDigits(n/10));
    }
}
int main(){
    int n;
    cout<<"Enter the number whose sum of digits you want:";
    cin>>n;
    cout<<findSumOfDigits(n);
    return 0;
}