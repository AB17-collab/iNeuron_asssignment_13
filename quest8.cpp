#include<iostream>
using namespace std;
void printFibonacciTerms(int a,int b,int count){
    if(count==0){
        return;
    }
    int c = a+b;
    cout<<c<<" ";
    a = b;
    b = c;
    printFibonacciTerms(a,b,--count);
}
int main(){
    int n;
    cout<<"Enter the number of required terms for fibonacci series:";
    cin>>n;
    printFibonacciTerms(-1,1,n);
    return 0;
}