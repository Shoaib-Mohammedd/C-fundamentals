#include <iostream>
using namespace std;

const double taxRate = .2 ;

double CalculateTax ( int sales ){
    return  sales * taxRate;
}

int main(){
    int sales = 10'000;

    double tax = CalculateTax ( sales );
    cout << tax;
    return  0 ;


}
