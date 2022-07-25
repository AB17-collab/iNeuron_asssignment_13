#include<iostream>
using namespace std;
int printTheFirstNEvennumbers(int n,int count){
    if(count==0)
        return 0;
    else{
        return (n + printTheFirstNEvennumbers(n+2,--count));
    }
}
int main(){
    int n;
    cout<<"Enter the number of odd natural numbers:";
    cin>>n;
    int count = n;
    cout<<"The required sum is:"<<printTheFirstNEvennumbers(2,count); 
    return 0;
}