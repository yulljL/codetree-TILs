#include <iostream>
#include <string>
using namespace std;

int main(){

    string A;
    cin >> A;
    string B = "Hello";

    A.append(B);
    cout << A;
}