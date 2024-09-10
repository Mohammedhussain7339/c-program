#include <iostream>
using namespace std;
int main(){
    for(int row=0;row<5;row++){
        for(int col=0;col<3;col++){
            cout<<"**";
            for(int space=3;space>1;space--){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}