#ifndef __BANKING_HEADERS_H__
#define __BANKING_HEADERS_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void display();

int Create_new_account();
int Get_Account_Info();
int Deposit_Cash();
int Withdraw_Cash();
int logout();

int name_check(char *);
int PAN_number_check(char *);
int add_money(int);

struct bank_account
{
	char customer_name[30];
   char PAN_number[10];
   int acc_number;
   char customer_address[100];
   float available_balance;
};
struct bank_account account;



#endif
