#include<iostream>
using namespace std;
int findFactorial(int n){
    if(n==0)
        return 1;
    else{
        return n * findFactorial(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter the number whose factorial you want:";
    cin>>n;
    cout<<findFactorial(n);
    return 0;
}