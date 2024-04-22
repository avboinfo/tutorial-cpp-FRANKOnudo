#include <iostream>
#include "BattleField.cpp"

using namespace std;

// DIM, SHIP, MISS, HIT, VOID

class BattleShip {

    private:

    BattleField mappa;
    BattleField campo;

    public:
    BattleShip() {
        mappa = BattleField(VOID);
        campo = BattleField(VOID);
        campo.placeHorizontalShip(3);
        campo.placeVerticalShip(4);
        campo.placeVerticalShip(2);
        campo.placeHorizontalShip(5);
    }

    void play() {

        while( true ){
            mappa.stampa();
            
            PlayHand();
        }
        PlayHand();

        mappa.stampa();
        campo.stampa();

    }

    void PlayHand() {
        cout << "Inserisci le coordinate di riga e colonna in cui sganciare la bomba: ";
        int x, y;
        cin >> x;
        cin >> y;
        if (campo.get(x,y)==SHIP) {
            mappa.put(x,y,HIT);
            campo.put(x,y,HIT);
        } else mappa.put(x,y,MISS);
    }

};