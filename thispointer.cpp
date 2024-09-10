//this allows access to the calling object's data members, especially when member variables are shadowed by function parameters or local variables with the same name.
#include <iostream>
using namespace std;
class printa{
    private:
    int a; 
    public:
    void showa(int a){
        cout<<"this a refer private access specifier a is parameter"<<endl;
        this->a=a;
        cout<<a;
    }};
    int main(){
        printa obj;
        obj.showa(10);
        return 0;
    }
