#include <iostream>
using namespace std;
int Max ( int first, int second){
    return ( first > second) ? first: second;
}
int main(){
    int larger = Max(30,70);
    cout << larger;
    return  0 ;


}