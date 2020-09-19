#include"banking_headers.h"



int main() {
	int choice;
	while(1){
		printf("\n#### WELCOME TO MY BANKING SYSTEM ####\n");
		display();
		printf("Please enter any options (1/2/3/4/5):");
		scanf("%d",&choice);
        switch(choice){
          case 1: Create_new_account();
                    break;
          case 2: Get_Account_Info();
                    break;
          case 3: Deposit_Cash();
                    break;
          case 4: Withdraw_Cash();
                    break;
          case 5: logout();
          			break;
        	default : printf("Please enter any options (1/2/3/4/5):");
		            break;
        }

	}
	return 0;
}


