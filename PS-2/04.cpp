#include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        sum+=i;
    }
    cout<<"The sum of "<<num<<" natural numbers is "<<sum;

    return 0;
}