#include<iostream>
using namespace std;
long long int findBaseToThePower(int base,int power){
    if(power==0)
        return 1;
    else{
        return base*(findBaseToThePower(base,--power));
    }
}
int main(){
    int base,power;
    cout<<"Enter the base and the power:";
    cin>>base>>power;
    cout<<findBaseToThePower(base,power);
    return 0;
}