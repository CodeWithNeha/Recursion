#include<iostream>
#include <algorithm>
using namespace std;
void fun(int n){
    if(n==0){
        return;
    }
    cout<<"Neha"<<endl;
    fun(n-1);
}
int main(){
    int n;
    cin>>n;
    fun(n);
}