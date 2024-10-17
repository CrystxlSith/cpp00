#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

// Initialisation des membres statiques
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _displayTimestamp();
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _accountIndex = _nbAccounts - 1;
    std::cout << "index:" << _nbAccounts - 1 << ";amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

int Account::checkAmount( void ) const
{
    return (_amount);
}

void Account::makeDeposit(int deposit)
{
    _nbDeposits += 1;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits += 1;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposit:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
    if (_amount < withdrawal)
    {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl; 
        return (false);
    }
    _totalNbWithdrawals++;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawal:" << _nbWithdrawals << std::endl;
    return (true);
}

void Account::_displayTimestamp()
{
    std::time_t now = std::time(0); // Get the current time in seconds since epoch (January 1, 1970)
    std::tm *ltm = std::localtime(&now); // Convert the current time to local time

    std::cout << "["
              << 1900 + ltm->tm_year // Current year (add 1900 because tm_year is the number of years since 1900)
              << std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon // Current month (add 1 because tm_mon is from 0 to 11)
              << std::setw(2) << std::setfill('0') << ltm->tm_mday << "_" // Current day of the month
              << std::setw(2) << std::setfill('0') << ltm->tm_hour // Current hour
              << std::setw(2) << std::setfill('0') << ltm->tm_min // Current minute
              << std::setw(2) << std::setfill('0') << ltm->tm_sec // Current second
              << "] ";
}
