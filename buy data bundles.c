// Description: A program to allow the customer to buy data bundles.

// Name: David Maina Onchoke
// Reg No.:PA106/G/28779/25


#include <stdio.h>
int main(){
	
	int choice;
	printf("Select data bunndles:\n");
	
//options of data bundles	
	printf("1.100MB @50KES\n2.500MB @200KES\n3.1GB @350KES\n4.2GB @600KES\n");

//customer's choice	
	printf("Enter your choice (1-4):");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
			printf("You selected 100MB. cost= 50KES\n");
			break;
		
		case 2:
			printf("You selected 500MB. cost= 200KES\n");
			break;
		
		case 3:
			printf("You selected 1GB. cost= 350KES\n");
			break;
		
		case 4:
			printf("You selected 2GB. cost = 600KES\n");
			break; 
		
		default:
			printf("Invalid choice");
	}
	
    printf("Thank you for choosing SAFARICOM DATA BUNDLES\n");
	
return 0;	
}