#include <iostream>
using namespace std;
class Test{
    private:
    int a,b;
    public:
    void displaydata();
    void getdata(){
        cout <<"Enter two no";
        cin >>a;
        cout<<endl;
        cin>>b;
    }
    int largedata();
};
int Test:: largedata(){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
void Test:: displaydata(){
    cout <<"greater value is="<<largedata();
}

int main(){
    Test obj;
    obj.getdata();
    obj.displaydata();
    return 0;

}