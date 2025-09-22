//Description:Program to compute the user to fill there information
/*
Name: David Mainer
Reg no:PA106/G/28779/25
*/
#include<stdio.h>

int main () {

//user to fill there name,age,height,weight and bank balance	
  char sur_name[50];
	printf("What is your Surname?");
	scanf("%s",sur_name);
	
  int age;
	printf("Enter your age:");
	scanf("%d",&age);
	
  int height;
	printf("Enter your height:");
	scanf("%d",&height);
	
  int weight; 
	printf("Enter your weight:");
	scanf("%d",&weight);
	
  float bank_balance; 
	printf("Enter your bank_balance:");
	scanf("%f",&bank_balance);	

	printf("\n--- users information ---\n");
    printf("Name: %s\n",sur_name);
    printf("Age: %d\n", age);
    printf("Height: %d\n", height);
    printf("Weight: %d\n", weight);
	printf("Bank Balance: %.3f\n", bank_balance);
	
    return 0;
 }
    
  