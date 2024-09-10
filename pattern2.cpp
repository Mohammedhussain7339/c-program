#include<iostream>
using namespace std;
int main(){
    for (int i=0;i<=3;i++){
        for(int j=2;j>=i;j--){
            cout<<" ";
        }
        for(int k=1; k<=i;k++){
            cout<< "*";
        }
        cout<<endl;
    }
    
    return 0;
}