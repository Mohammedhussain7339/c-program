#include <iostream>
using namespace std;

class myclass{
int a ;
int b;
public:
int setvalue(int a,int b);
int getvalue();
};

int myclass::setvalue(int a, int b){
    this->a=a;
    this->b=b;
}
int myclass::getvalue(){
    return a+b;
}

int main(){
    myclass obj;
    obj.setvalue(4,8);
    cout<<obj.getvalue();
    return 0;
}