
#include"banking_headers.h"

void display(){

	printf("\n");
	printf("\t\t [1] To create a new account\n");
	printf("\t\t [2] Get information of your account\n");
	printf("\t\t [3] Deposit cash\n");
	printf("\t\t [4] Withdraw cash \n");
	printf("\t\t [5] Logout\n");
	printf("\n");
}
int Create_new_account(){
   char customer_name[30];
   char PAN_number[10];
   int acc_number = rand();
   char customer_address[100];
   float available_balance = 0;
   fflush(stdin);
   printf("\nEnter the account holder name    : ");
   scanf("%s", customer_name);
   printf("\nEnter the account holder address : ");
   scanf("%s", customer_address);
   printf("\nEnter PAN Number : ");
   scanf("%s",PAN_number);


   printf("\n****** YOUR DETAIlS ******\n");
   printf("Account Holder Name : %s\n",customer_name);
   printf("Account Number : %d\n",acc_number);
   printf("PAN Number : %s\n",PAN_number);
   printf("Customer Address : %s",customer_address);
   printf("\n");

   strcpy(account.customer_name,customer_name);
   account.acc_number = acc_number;
   strcpy(account.PAN_number,PAN_number);
   strcpy(account.customer_address,customer_address);
   printf("%d",account.acc_number);
   account.available_balance = available_balance;



}
void Get_Account_Info(){
	printf("\nPlease enter your account number : \n");
	//int current_acc_number = 0;
	//scanf("%d",current_acc_number);
	printf("Account Holder Name : %s\n",account.customer_name);
    printf("Account Number : %d\n",account.acc_number);
    printf("PAN Number : %s\n",account.PAN_number);
    printf("Customer Address : %s\n",account.customer_address);
    printf("Available Balance : %f\n",account.available_balance);
    printf("\n");


}
void Deposit_Cash(){
	auto int acc_no;
   float add_money;

   printf("Enter account number you want to deposit money:");
   scanf("%d",&acc_no);
   printf("\nThe current balance for account %d is %f \n",
   acc_no, account.available_balance);
   printf("\nEnter money you want to deposit :  ");
   scanf("%f",&add_money);

   while (acc_no=account.acc_number)
   {
         account.available_balance=
         account.available_balance+add_money;
         printf("\nThe New balance for account %d is %f \n",
         acc_no, account.available_balance);
         break;
   }
}
void Withdraw_Cash(){
	auto int acc_no;
   float debit_money;

   printf("Enter account number you want to withdraw money:");
   scanf("%d",&acc_no);
   printf("\nThe current balance for account %d is %f \n",
   acc_no, account.available_balance);
   printf("\nEnter money you want to withdraw :  ");
   scanf("%f",&debit_money);

   while (acc_no=account.acc_number)
   {
         account.available_balance=
         account.available_balance-debit_money;
         printf("\nThe New balance for account %d is %f \n",
         acc_no, account.available_balance);
         break;
   }
}
void logout(){
	printf("You are currently logged out of your account\n");
}
