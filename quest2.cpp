#include<iostream>
using namespace std;
int printTheFirstNOddnumbers(int n,int count){
    if(count==0)
        return 0;
    else{
        return (n + printTheFirstNOddnumbers(n+2,--count));
    }
}
int main(){
    int n;
    cout<<"Enter the number of odd natural numbers:";
    cin>>n;
    int count = n;
    cout<<"The required sum is:"<<printTheFirstNOddnumbers(1,count); 
    return 0;
}