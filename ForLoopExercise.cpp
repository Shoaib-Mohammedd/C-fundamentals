#include <iostream>
using namespace std;
int main(){
    cout << " Enter a positive number! " ;

    int number ;

    cin >> number;

    if ( number < 0) cout << " Error add a positive number ";

    else{
        int factorial = 1;

        for (int i = 1; i <= number; ++i)
            factorial *= 1;

        cout << " The Factorial of " << number << " ," << factorial ;


    }


}