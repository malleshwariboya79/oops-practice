#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=20;i++){
        if(i%2==0){
            cout<<i<<" is an even number."<<endl;
        } else{
            cout<<i<<" is an odd number."<<endl;
        }
    }
    return 0;
}