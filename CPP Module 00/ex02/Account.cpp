/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:38:54 by vminomiy          #+#    #+#             */
/*   Updated: 2022/02/18 02:51:33 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_totalAmount += initial_deposit;
	
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";created" << std::endl;
}

Account::~Account( void ) {
	_nbAccounts--;
	_totalAmount -= this->_amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";closed" << std::endl;
}

// todo
void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout << deposit << std::endl;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";withdrawl:";
	if (withdrawal <= this->_amount) {
		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals++;
		this->_amount -= withdrawal;
		this->_totalNbWithdrawals++;
		std::cout << withdrawal << ";amount:"
				<< this->_amount << ";nb_withdrawls:"
				<< this->_nbWithdrawals << std::endl;
		return true;
	} else {
		std::cout << "refused" << std::endl;
		return false;
	}
}

int		Account::checkAmount( void ) const {
	return (0);
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";deposits:" << this->_nbDeposits
			<< ";withdrawls:" << this->_nbWithdrawals << std::endl;
}

int		Account::getNbAccounts( void ) { return Account::_totalAmount; }
int		Account::getTotalAmount( void ) { return Account::_nbAccounts; }
int		Account::getNbDeposits( void ) { return Account::_totalNbDeposits; }
int		Account::getNbWithdrawals( void ) { return Account::_totalNbWithdrawals; }

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
			<< ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits 
			<< ";withdrawls:" << _totalNbWithdrawals << std::endl;
}
	
void	Account::_displayTimestamp( void ) {
	std::time_t	time = std::time(0);
	std::tm	*now = std::localtime(&time);
	std::cout << "[" << (now->tm_year + 1900)
			<< (now->tm_mon + 1) << now->tm_mday
			<< "_" << now->tm_hour << now->tm_min
			<< now->tm_sec << "] ";
}
