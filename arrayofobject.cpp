#include <iostream>
using namespace std;
class hello{
    public:
    void hell(){
        cout<<"hello world";
    }
};
int main(){
    int size=3;
    hello obj[size];
    for(int i=0;i<size;i++){
        obj[i].hell();
    }
    

}