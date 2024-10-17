#include "Account.hpp"

int main() {
    // Utilisation de l'alias 't' pour déclarer un objet de type 'Account'
    Account::t my1Account(1000); // Crée un compte avec un dépôt initial de 1000
    Account::t my2Account(1000);

    // Appel de méthodes sur l'objet 'myAccount'
    my1Account.displayStatus();
    my2Account.displayStatus();

    my1Account.makeDeposit(500);
    my1Account.makeWithdrawal(200);
    // myAccount.makeWithdrawal(200);
    // myAccount.displayStatus();

    return 0;
}