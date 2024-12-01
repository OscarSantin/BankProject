#include "bankClient.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void waitForSendKey() {
    cout << endl << "Premi Invio per tornare al menu principale.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get(); 
}
int main() {
    bankClient firstClient("Giovanni");
    int control;
    int choice{ 0 };
    vector<double> investimentsV;
    while (choice != 7 ) {
        cout << endl << "Cosa vuoi fare?:" << endl
            << "1 - Deposito" << endl
            << "2 - Prelievo" << endl
            << "3 - Investimento" << endl
            << "4 - Avanza nel tempo" << endl
            << "5 - Visualizza lo stato del tuo conto" << endl
            << "6 - Visualizza lo stato del tuo portafolgio" << endl
            << "7 - Chiudi applicazione" << endl << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "inserisci la somma da depositare" << endl << "ATTENZIONE: SE LA CIFRA É SUPERIORE A QUELLA DEL PORTAFOGLIO LA DIFFERENZA NON VERR� DEPOSITATA" << endl << "SE IL CONTO É IN NEGATIVO VERRA UTILIZZATA PER RISANARE IL DEBITO" << endl;
            double depositSum;
            cin >> depositSum;
            firstClient.deposit(depositSum);
            break;
        case 2:
            cout << "inserisci la somma da prelevare" << endl << "ATTENZIONE: SE IL CONTO É IN NEGATIVO NON SARA POSSIBILE PRELEVARE" << endl;
            double takeSum;
            cin >> takeSum;
            firstClient.takeMoney(takeSum);
            break;
        case 3:
            investimentsV = firstClient.invest();
            break;
        case 4:
            cout << "Di quanti mesi vuoi avanzare?" << endl;
            int JumpMonths;
            cin >> JumpMonths;
            firstClient.JumpMoths(investimentsV, JumpMonths);
            break;
        case 5:
            firstClient.printStatus();
            break;
        case 6:
            firstClient.printWallet();
            break;
        case 7:
            return 0;
            break;
        default:break;
        }
        waitForSendKey();
        system("clear");// Linux
        //system("CLS");//windows
    }
    return 0;
}