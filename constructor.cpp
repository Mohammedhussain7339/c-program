#include <iostream>
using namespace std;

class myclass{
    public:
    myclass();
};
myclass::myclass(){
    cout<<"hello";
}
int main(){
    myclass obj;
    return 0;
}