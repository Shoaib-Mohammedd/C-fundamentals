#include <iostream>
using namespace std;
int main(){
    cout << "Fahrenheit" ;
    int Fahrenheit ;
    cin >> Fahrenheit;
    double Celsius = (Fahrenheit - 32 ) /1.8;
    cout << Celsius;
    return 0;
}