#include<iostream>
#include <algorithm>
using namespace std;
int cont = 0;
void fun(){
    if(cont==4){
        return;
    }
    cout<<cont<<endl;
    cont++;
    fun();
}
int main(){
    fun();
}