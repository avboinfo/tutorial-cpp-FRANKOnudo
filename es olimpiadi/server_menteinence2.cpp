// NOTE: it is recommended to use this even if you don't understand the following code.

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
//  uncomment the following lines if you want to read/write from files
//  ifstream cin("input.txt");
//  ofstream cout("output.txt");

    int A, B, T, S;
    cin >> A >> B >> T >> S;

    int D = B - S;
    T = T - D;
    int t = T;

    for(int i = 0; i < t / 24; i++){
        for(int d = 0; d < 24; d++){
            if(d > A && d < B){
                D++;
                T--;
            }
        }
    }
//int t = T;
    //while(T > 0 && T <= 24){
            //for(int c = 0; c < t; c++){
                //if(c > A && c <= B && T > 0){
                    //D++;
                    //T--;
                //}
            //}          
    //}

    cout << D << endl; // print the result

    return 0;
}