#include <iostream>
using namespace std;
int main(){
    int temperatures [] = { 92,34,93,80};

    double sum = 0;

    for ( int temperature: temperatures) sum+= temperature;

    short count = sizeof ( temperatures) / sizeof (int );

    double average  = sum / count;

    cout << average;

    return 0;

}