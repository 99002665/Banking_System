
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
   char password[15];
   int acc_number = rand();
   char customer_address[100];
   float available_balance = 0;
   //fflush(stdin);
   printf("\nEnter the account holder name    : ");
   scanf("%s", customer_name);
   printf("\nEnter password : ");
    scanf("%s", password);
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
int Get_Account_Info(){
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
int Deposit_Cash(){
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
int Withdraw_Cash(){
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
int logout(){
	printf("You are currently logged out of your account\n");
	return 1;
}

int name_check(char *name){
    int name_length = strlen(name);
    if(name_length > 32) return 0;
    else return 1;
}


int PAN_number_check(char * pannumber){
    int pan_length = strlen(pannumber);
    if(pan_length == 9) return 1;
    else return 0;
}

int amount_check(int amount){
    if(amount <= 0) return 0 ;
    else if(amount > 50,000) return 0;
    else return 1;
}

int account_number_check(int acc_num){
    int acc_num_len = 0;
    if(acc_num <= 0) return 0;
    while(acc_num > 0){
        acc_num_len ++;
        acc_num /= 10;
    }
    if (acc_num_len == 5) return 1;
    else return 0;

}

int password_check(char * password){
    int password_length = strlen(password);
    if(password_length < 15) return 0;
    else return 1;
}

int email_check(char *email){
    if(strlen(email) == 0) return 0;
    int pos = 0;
    int count = 0;
    while(pos <= strlen(email)){
        if(email[pos] == '@' || email[pos] == '.')
            count ++;
       pos ++;
    }
    if( count == 2)
     return 1;
    else
        return 0;
}
