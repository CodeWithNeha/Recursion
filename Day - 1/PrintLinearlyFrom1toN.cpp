#include<iostream>
#include <algorithm>
using namespace std;
void fun(int i,int n){
    if(n<i){
        return;
    }
    cout<<i<<endl;
    fun(i+1,n);
}
int main(){
    int n;
    cin>>n;
    fun(1,n);
}