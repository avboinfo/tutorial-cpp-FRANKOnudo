// NOTE: it is recommended to use this even if you don't understand the following code.

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
//  uncomment the following lines if you want to read/write from files
//  ifstream cin("input.txt");
//  ofstream cout("output.txt");

    int A, B, T, D = 0;
    cin >> A >> B >> T;

    while(T > 0){
        T = T - 24;
        D = D + (B - A);
    }

    cout << D << endl; // print the result

    return 0;
}