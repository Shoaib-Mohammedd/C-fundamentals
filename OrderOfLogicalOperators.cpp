#include <iostream>
using namespace std;

int main() {
    bool isCitizen = true;
    bool hasBachelorDegree= false ;
    short yearOfExperience = 2;
    bool isEligible = isCitizen & ( hasBachelorDegree || yearOfExperience >=2 );

    cout << boolalpha << isEligible;
    return 0 ;
}