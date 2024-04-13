#include <iostream>
using namespace std;

class matrice{

    private:
        int m[10][10];
    
    public:
        matrice(int n) {
            for(int i = 0; i < 10; i++)
                for(int j = 0; j < 10; j++)
                    m[i][j] = n;
        }

    void stampa() {
        cout << endl << "------------------------------------------" << endl;
        
        for(int i = 0; i < 10; i++)
                for(int j = 0; j < 10; j++){ 
                    cout << m[i][j]<< "\t";
                    }

        cout << endl << "------------------------------------------" << endl;
    }
};

int main(){
    matrice m1 = matrice( 3 );
    m1.stampa();
    return 0;
};