#include<iostream>
using namespace std;
int HCF(int a,int b){
    return (a==0?b:HCF(b%a,a));
}
int main(){
    int a,b;
    cout<<"Enter the numbers whose HCF you want:";
    cin>>a>>b;
    cout<<HCF(a,b);
    return 0;
}