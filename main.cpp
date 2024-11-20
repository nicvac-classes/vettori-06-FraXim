#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main() {
    srand(time(0));   
    int i, min, n, iMin;
    cout << "Inserisci quanti atleti ci sono nella gara" << endl;
    cin >> n;
    string nomi[n], nazione[n];
    float tempi[n];
    for (i = 0; i <= n - 1; i++) {
        cout << "Inserisci il nome del " << i + 1 << "° atleta" << endl;
        cin >> nomi[i];
        cout << "Inserisci che nazione rappresenta " << endl;
        cin >> nazione[i];
        tempi[i] = (float)(rand() % 1001) / 100;
        cout << "Il tempo del " << i + 1 << "° è " << tempi[i] << endl;
    }
    cout << "Lista di tutti gli atleti" << endl;
    for (i = 0; i <= n - 1; i++) {
        cout << "Nome: " << nomi[i] << "; Nazione: " << nazione[i] << "; Tempo: " << tempi[i] << endl;
    }
    iMin = 0;
    min = 0;
    for (i = 0; i <= n - 1; i++) {
        if (tempi[i] < tempi[iMin]) {
            iMin = i;
            min = (int) tempi[i];
        }
    }
    cout << "L'atleta " << nomi[iMin] << " rappresentante della nazione " << nazione[iMin] << " ha vinto la gara con un tempo pari a " << tempi[iMin] << endl;
}