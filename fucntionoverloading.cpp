#include <iostream>
using namespace std;

float add(float a){
    return a*a*a;
}
float add(float a, float b){
    return 3.14*a*a*b;
}
int main(){
    // int a=10,b=20,c=30;
    float x=20,y=30;
    cout<<add(20,30)<<endl;
    cout<<add(2,3)<<endl;
}