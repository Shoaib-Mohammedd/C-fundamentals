#include <iostream>
using namespace std;
int main(){
    double Sales = 95000;
    cout << " Sales: $" << Sales << endl;

    const double StateTexRate = 0.4;
    double SteTax = Sales * StateTexRate;
    cout << "StateTax is $" << SteTax << endl;

    const double CountyTaxRate = 0.2;
    double CountryTax = Sales * CountyTaxRate;
    cout << "CountyTax is $" << CountryTax << endl;

    double TotalTax = SteTax + CountryTax;
    cout << " TotalTax To Pay: $" << TotalTax << endl;
    return 0;
}