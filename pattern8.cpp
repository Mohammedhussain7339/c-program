#include <iostream>
using namespace std;
int main(){
    for(int row=0;row<5;row++){
        for(int col=0;col<5;col++){
            if(row==1){
                cout<<"*";
                break;
            }
            else if(row==3){
                cout<<"    *";
                break;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}