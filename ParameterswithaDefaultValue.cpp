#include <iostream>
using namespace std;
double CalculateTax( double income, int taxRate = 2){
    return income * taxRate ;
}
int main(){
    double tax = CalculateTax ( 30,70 );
    cout << tax ;
    return  0 ;


}