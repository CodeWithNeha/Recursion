#include<iostream>
#include <algorithm>
using namespace std;
void fun(int i,int n){
    if(n<i){
        return;
    }
    fun(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    fun(1,n);
}