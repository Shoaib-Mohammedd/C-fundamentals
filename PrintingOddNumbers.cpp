#include <iostream>
using namespace std;

void showOddNumbers ( int limit) {
    for (int i = 0; i < limit; ++i) {

        if ( i % 2 == 0 )
            cout << i << endl ;

    }

}

int main(){
    showOddNumbers(50);
    return  0 ;


}
