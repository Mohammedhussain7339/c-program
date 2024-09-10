#include <iostream>
using namespace std;
int main()
{

    for (int row = 0; row < 5; row++)
    {
        for(int col=0;col<2;col++){
            if(row==4){
                cout<<" **";
            }
            else{

            cout<<"**";
            }
            if(row==4){
                cout<<"****";
                break;
            }
            else{

            cout<<"    ";
            }
        }
        cout<<endl;
    }
    return 0;
}