#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "enter two value"<<endl;
    cin >> a>>b;
    char o;
    cout << "enter a operator";
    cin >> o;
    switch(o){
        case '+' :
        cout << a+b;
        break;
        case '-':
        cout<< a-b;
        break;
        case '*':
        cout << a*b;
        break;
        case '%':
        cout<<a%b;
        break;
        default: 
        cout<<"it's not a operator";

    }

    return 0;
}