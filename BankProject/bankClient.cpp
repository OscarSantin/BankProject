#include "bankClient.h"
bankClient::bankClient(const string& name, double balance, double wallet) {
    this->name = name;
    this->balance = balance;
    this->wallet = wallet;
}
void bankClient::printBalance() const {
    cout << balance << endl;
}
void bankClient::printWallet() const {
    cout << wallet << endl;
}
void bankClient::printStatus() const {
    cout << "Stato utente:" << endl << "Nome utente: " << name << endl << "Conto: " << balance << endl;
}
void bankClient::deposit(double moneyToDeposit) {
    if (balance < 0) {
        balance += moneyToDeposit;
    }
    if (wallet < moneyToDeposit) {
        cout << "Solo " << wallet << " euro sono stati depositati" << endl;
        moneyToDeposit = wallet;
        wallet = 0;
    }
    else {
        wallet -= moneyToDeposit;
    }
    balance += moneyToDeposit;
    return;
}
void bankClient::takeMoney(double moneyToTake) {
    if (balance <= 0) {
        cout << "Conto vuoto" << endl;
        return;
    }
    if (moneyToTake > balance) {
        cout << "Soldi prelevati: " << balance << " euro" << endl;
        moneyToTake = balance;
        balance = 0;
    }
    wallet += moneyToTake;
    balance -= moneyToTake;
    return;
}
vector<double> bankClient::shortInvestiment(vector<double>& finalResults) {
    int choice;
    cout << "Scelta:" << endl << "1-Investimento di basso rischio e basso quandagno" << endl << "2-Investimento di medio rischio e medio quadagno" << endl << "3-Investimento di alto rischio e alto quadagno" << endl;
    cin >> choice;
    switch (choice) {
    case 1: {
        double moneyToInvest;
        cout << "soldi disponibili: ";
        printBalance();
        cout << "Quanto vuoi investire?" << endl;
        cin >> moneyToInvest;
        if (moneyToInvest > balance) {
            cout << moneyToInvest - balance << " euro non sono stati investiti";
            moneyToInvest = balance;
            balance = 0;
        }
        else {
            balance -= moneyToInvest;
        }
        const double winnings[10]{ 0.7,0.8,0.9,1.0,1.1,1.1,1.1,1.1,1.2,1.2 };
        for (int duration = 0;duration < 12;duration++) {
            int controlInvestiment;
            controlInvestiment = rand() % 10;
            moneyToInvest = moneyToInvest * winnings[controlInvestiment];
            finalResults.push_back(moneyToInvest);
        }
    }
          break;
    case 2: {
        double moneyToInvest1;
        cout << "soldi disponibili: ";
        printBalance();
        cout << "Quanto vuoi investire?" << endl;
        cin >> moneyToInvest1;
        if (moneyToInvest1 > balance) {
            cout << moneyToInvest1 - balance << " euro non sono stati investiti";
            moneyToInvest1 = balance;
            balance = 0;
        }
        else {
            balance -= moneyToInvest1;
        }
        const double winnings1[10]{ 0.7,0.7,0.8,0.8,1.0,1.1,1.1,1.1,1.2,1.2 };
        for (int months = 0;months < 12;months++) {
            int controlInvestiment1;
            controlInvestiment1 = rand() % 10;
            moneyToInvest1 = moneyToInvest1 * winnings1[controlInvestiment1];
            finalResults.push_back(moneyToInvest1);
        }
    }
          break;
    case 3: {
        double moneyToInvest2;
        cout << "soldi disponibili: ";
        printBalance();
        cout << "Quanto vuoi investire?" << endl;
        cin >> moneyToInvest2;
        if (moneyToInvest2 > balance) {
            cout << moneyToInvest2 - balance << " euro non sono stati investiti";
            moneyToInvest2 = balance;
            balance = 0;
        }
        else {
            balance -= moneyToInvest2;
        }
        const double winnings2[10]{ 0.6,0.6,0.7,0.7,0.8,0.8,1,1.2,1.3,1.4 };
        for (int months = 0;months < 12;months++) {
            int controlInvestiment2;
            controlInvestiment2 = rand() % 10;
            moneyToInvest2 = moneyToInvest2 * winnings2[controlInvestiment2];
            finalResults.push_back(moneyToInvest2);
        }
    }
          break;
    default:cout << "Carattere inserito errato" << endl;
        shortInvestiment(finalResults);
        break;
    }
    return finalResults;
}
vector<double> bankClient::mediumInvestiment(vector<double>& finalResults) {
    int choice;
    cout << "Scelta:" << endl << "1-Investimento di basso rischio e basso quandagno" << endl << "2-Investimento di medio rischio e medio quadagno" << endl << "3-Investimento di alto rischio e alto quadagno" << endl;
    cin >> choice;
    switch (choice) {
    case 1: {
        double moneyToInvest;
        cout << "soldi disponibili: ";
        printBalance();
        cout << "Quanto vuoi investire?" << endl;
        cin >> moneyToInvest;
        if (moneyToInvest > balance) {
            cout << moneyToInvest - balance << " euro non sono stati investiti";
            moneyToInvest = balance;
            balance = 0;
        }
        else {
            balance -= moneyToInvest;
        }
        int controlInvestiment;
        const double winnings[10]{ 0.7,0.8,0.9,1.0,1.1,1.1,1.1,1.1,1.2,1.2 };
        for (int years = 0;years < 4;years++) {
            for (int duration = 0;duration < 12;duration++) {
                controlInvestiment = rand() % 10;
                moneyToInvest = moneyToInvest * winnings[controlInvestiment];
                finalResults.push_back(moneyToInvest);
            }
        }
    }
          break;
    case 2: {
        double moneyToInvest1;
        cout << "soldi disponibili: ";
        printBalance();
        cout << "Quanto vuoi investire?" << endl;
        cin >> moneyToInvest1;
        if (moneyToInvest1 > balance) {
            cout << moneyToInvest1 - balance << " euro non sono stati investiti";
            moneyToInvest1 = balance;
            balance = 0;
        }
        else {
            balance -= moneyToInvest1;
        }
        int controlInvestiment1;
        const double winnings1[10]{ 0.7,0.7,0.8,0.8,1.0,1.1,1.1,1.1,1.2,1.2 };
        for (int years = 0;years < 4;years++) {
            for (int duration = 0;duration < 12;duration++) {
                controlInvestiment1 = rand() % 10;
                moneyToInvest1 = moneyToInvest1 * winnings1[controlInvestiment1];
                finalResults.push_back(moneyToInvest1);
            }
        }
    }
          break;
    case 3: {
        double moneyToInvest2;
        cout << "soldi disponibili: ";
        printBalance();
        cout << "Quanto vuoi investire?" << endl;
        cin >> moneyToInvest2;
        if (moneyToInvest2 > balance) {
            cout << moneyToInvest2 - balance << " euro non sono stati investiti";
            moneyToInvest2 = balance;
            balance = 0;
        }
        else {
            balance -= moneyToInvest2;
        }
        int controlInvestiment2;
        const double winnings2[10]{ 0.6,0.6,0.7,0.7,0.8,0.8,1,1.2,1.3,1.4 };
        for (int years = 0;years < 4;years++) {
            for (int duration = 0;duration < 12;duration++) {
                controlInvestiment2 = rand() % 10;
                moneyToInvest2 = moneyToInvest2 * winnings2[controlInvestiment2];
                finalResults.push_back(moneyToInvest2);
            }
        }
    }
          break;
    default:cout << "Carattere inserito errato" << endl;
        mediumInvestiment(finalResults);
        break;
    }
    return finalResults;
}
vector<double> bankClient::longInvestiment(vector<double>& finalResults) {
    int choice;
    cout << "Scelta:" << endl << "1-Investimento di basso rischio e basso quandagno" << endl << "2-Investimento di medio rischio e medio quadagno" << endl << "3-Investimento di alto rischio e alto quadagno" << endl;
    cin >> choice;
    switch (choice) {
    case 1: {
        double moneyToInvest;
        cout << "soldi disponibili: ";
        printBalance();
        cout << "Quanto vuoi investire?" << endl;
        cin >> moneyToInvest;
        if (moneyToInvest > balance) {
            cout << moneyToInvest - balance << " euro non sono stati investiti";
            moneyToInvest = balance;
            balance = 0;
        }
        else {
            balance -= moneyToInvest;
        }
        int controlInvestiment;
        const double winnings[10]{ 0.7,0.8,0.9,1.0,1.1,1.1,1.1,1.1,1.2,1.2 };
        for (int years = 0;years < 10;years++) {
            for (int duration = 0;duration < 12;duration++) {
                controlInvestiment = rand() % 10;
                moneyToInvest = moneyToInvest * winnings[controlInvestiment];
                finalResults.push_back(moneyToInvest);
            }
        }
    }
          break;
    case 2: {
        double moneyToInvest1;
        cout << "soldi disponibili: ";
        printBalance();
        cout << "Quanto vuoi investire?" << endl;
        cin >> moneyToInvest1;
        if (moneyToInvest1 > balance) {
            cout << moneyToInvest1 - balance << " euro non sono stati investiti";
            moneyToInvest1 = balance;
            balance = 0;
        }
        else {
            balance -= moneyToInvest1;
        }
        int controlInvestiment1;
        const double winnings1[10]{ 0.7,0.7,0.8,0.8,1.0,1.1,1.1,1.1,1.2,1.2 };
        for (int years = 0;years < 10;years++) {
            for (int duration = 0;duration < 12;duration++) {
                controlInvestiment1 = rand() % 10;
                moneyToInvest1 = moneyToInvest1 * winnings1[controlInvestiment1];
                finalResults.push_back(moneyToInvest1);
            }
        }
    }
          break;
    case 3: {
        double moneyToInvest2;
        cout << "soldi disponibili: ";
        printBalance();
        cout << "Quanto vuoi investire?" << endl;
        cin >> moneyToInvest2;
        if (moneyToInvest2 > balance) {
            cout << moneyToInvest2 - balance << " euro non sono stati investiti";
            moneyToInvest2 = balance;
            balance = 0;
        }
        else {
            balance -= moneyToInvest2;
        }
        int controlInvestiment2;
        const double winnings2[10]{ 0.6,0.6,0.7,0.7,0.8,0.8,1,1.2,1.3,1.4 };
        for (int years = 0;years < 10;years++) {
            for (int duration = 0;duration < 12;duration++) {
                controlInvestiment2 = rand() % 10;
                moneyToInvest2 = moneyToInvest2 * winnings2[controlInvestiment2];
                finalResults.push_back(moneyToInvest2);
            }
        }
    }
          break;
    default:cout << "Carattere inserito errato" << endl;
        longInvestiment(finalResults);
        break;
    }
    return finalResults;
}
vector<double> bankClient::invest() {
    srand(time(NULL));
    vector<double> finalResults;
    int choice;
    cout << "1 - Investimento breve durata (12 mesi)" << endl << "2 - Investimento media durata (4 anni)" << endl << "3 - Investimento lunga durata (10 anni)" << endl;
    cin >> choice;
    switch (choice) {
    case 1:
        shortInvestiment(finalResults);
        break;
    case 2:
        mediumInvestiment(finalResults);
        break;
    case 3:
        longInvestiment(finalResults);
        break;
    default:
        cout << "Scelta inesistente" << endl;
        invest();
        break;
    }
    return finalResults;
}
void bankClient::JumpMoths(const vector<double>& investimentsV, int JumpM) {
    wallet += JumpM * 100;
    if (investimentsV.size() == 0) {
        printStatus();
        return;
    }
    size_t size = investimentsV.size(); // Inserito perchè al linter non piaceva un confronto tra jumpM(int) e investmentV.size()(unsigned long long int)
    if (JumpM > size) {
        balance += investimentsV[size - 1];
    }
    else {
        balance += investimentsV[JumpM - 1];
    }
    printStatus();
    return;
}
;

