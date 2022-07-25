#include<iostream>
using namespace std;
int printTheFirstNnumbers(int n){
    if(n==1){
        return 1;
    }
    return (n + printTheFirstNnumbers(n-1));
}
int main(){
    int n;
    cout<<"Enter the number of natural numbers:";
    cin>>n;
    cout<<"The required sum is:"<<printTheFirstNnumbers(n); 
    return 0;
}