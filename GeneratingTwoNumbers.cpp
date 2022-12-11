#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << left << setw(15) << "Course" << setw(10) <<"Student" << endl
         << setw(15) << left <<"C++" << setw(10) << right<< 100 << left << endl
         << setw(15) << left << " Java " << setw(10) << right<< 50 << left;
}