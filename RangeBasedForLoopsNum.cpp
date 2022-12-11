#include <iostream>
using namespace std;
int main(){
    int numbers [] = { 10, 20, 30};

    for (int i = 0; i < sizeof numbers; ++i) cout << numbers[i];

    for ( int number: numbers) cout << number << endl;

    return 0;
}