#include <iostream>
using namespace std;
int main(){
    int number = 1;
    while ( number < 1 || number > 5) cout << number;
    cin >> number ;
    if( number <1 || number > 5)
        cout << " Enter a number between 1 and 5" << endl;
    return 0 ;
}
