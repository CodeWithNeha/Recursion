#include<iostream>
using namespace std;
void factorial(int n,int fact){
    if(n==0){
        cout<<fact;
        return;
    }
    factorial(n-1,fact*n);
}
int main(){
    int n;
    cin>>n;
    factorial(n,1);
}