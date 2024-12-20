#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;
class bankClient {
private:
    string name;
    double balance;
    double wallet;
public:
    
    bankClient(const string& name, double balance = 0, double wallet = 100);

    void printBalance() const;

    void printWallet() const;

    void printStatus() const ;

    void deposit(double moneyToDeposit);

    void takeMoney(double moneyToTake);

    vector<double> shortInvestiment(vector<double>& finalResults);

    vector<double> mediumInvestiment(vector<double>& finalResults);

    vector<double> longInvestiment(vector<double>& finalResults);

    vector<double> invest();

    void JumpMoths(const vector<double>& investimentsV, int JumpM);
};