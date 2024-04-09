#include <iostream>
#include <queue>
#include <string>

using namespace std;

class UfficioPostale {
private:
    queue<int> codaSpedizione;
    queue<int> codaRicezione;
    queue<int> codaFinanziario;

public:
    void nuovoCliente(int cliente, string servizio) {
        if (servizio == "S") {
            codaSpedizione.push(cliente);
        } else if (servizio == "R") {
            codaRicezione.push(cliente);
        } else if (servizio == "F") {
            codaFinanziario.push(cliente);
        }
    }

    void chiamaCliente() {
        if (!codaSpedizione.empty()) {
            cout << "Sportello spedizione chiama cliente " << codaSpedizione.front() << endl;
            codaSpedizione.pop();
        } else if (!codaRicezione.empty()) {
            cout << "Sportello ricezione chiama cliente " << codaRicezione.front() << endl;
            codaRicezione.pop();
        } else if (!codaFinanziario.empty()) {
            cout << "Sportello finanziario chiama cliente " << codaFinanziario.front() << endl;
            codaFinanziario.pop();
        }
    }

    void visualizzaClientiInAttesa() {
        cout << "Clienti in attesa per servizio di spedizione: " << codaSpedizione.size() << endl;
        cout << "Clienti in attesa per servizio di ricezione: " << codaRicezione.size() << endl;
        cout << "Clienti in attesa per servizio finanziario: " << codaFinanziario.size() << endl;
    }
};

int main() {
    UfficioPostale ufficio;
    
    ufficio.nuovoCliente(1, "S");
    ufficio.nuovoCliente(2, "R");
    ufficio.nuovoCliente(3, "S");

    ufficio.visualizzaClientiInAttesa();

    ufficio.chiamaCliente();
    ufficio.chiamaCliente();

    ufficio.visualizzaClientiInAttesa();

    return 0;
}