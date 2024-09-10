#include <iostream>
using namespace std;
int main(){
    struct id{
        int idno ;
        string name;
    };
    id employee;
    employee.idno=10,
    employee.name="hussain";
    id student;
    student.idno=101,
    student.name="nasir";
    cout <<student.idno<<endl<<student.name;
    cout <<student.idno<<endl<<student.name;
    return 0;
}