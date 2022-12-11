#include <iostream>
using namespace std;

int main() {
    cout << " Enter Two Values";
    int first ;
    int second ;
    cin >> first >> second;
    int  result = ( first > second ) ? first : second;
//    if ( first > second)
//        result = first;
//    else result = second;
    cout  << result;
    return 0;
}