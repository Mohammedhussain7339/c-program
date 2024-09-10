#include<iostream>
using namespace std;
class myclass{
    public:
    int rollno;
    string name;
    // int sum(int a, int b){
    //     return(a+b);
    // }
    void sum();
};
    void myclass::sum(){
        cout<<"hello";
        // return 0;
    }
int main(){
    myclass myObj;
    // cout<<myObj.sum();
    myObj.sum();
    
    // cout<<obj.sum(7,3);

    // cout<<"enter your roll no & name";
    // cin>>obj.rollno>>obj.name;
    // cout<<obj.rollno <<endl<<obj.name;
    return 0;
}