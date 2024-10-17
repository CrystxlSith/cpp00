#include "Account.hpp"

int main() {
    // Utilisation de l'alias 't' pour déclarer un objet de type 'Account'
    Account::t myAccount(1000); // Crée un compte avec un dépôt initial de 1000

    // Appel de méthodes sur l'objet 'myAccount'
    myAccount.displayStatus();
    myAccount.makeDeposit(500);
    myAccount.makeWithdrawal(200);
    myAccount.displayStatus();

    return 0;
}