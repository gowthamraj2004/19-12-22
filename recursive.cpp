#include<iostream>
using namespace std;
int hello(){
    cout<<" Parama padi da ";
    hello();
}
int main (){
    hello();
}