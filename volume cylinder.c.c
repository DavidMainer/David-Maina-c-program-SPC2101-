// Description:Program to compute volume of a cylinder
/* 
Name: David Maina Onchoke
Reg No.:PA106/G/28779/25
*/



#include <stdio.h>;
 
 int main(){

//including pi in calculation
	 float pi=22.0/7.0;
	 
	 printf("Using pi to be:%.4f\n",pi) ;
	   
//Users prompt to enter radius 
      int radius;
     printf("Enter the Radius:");
     scanf("%d",&radius);
      
//Users prompt to enter height
      int height;
     printf("Enter the Height:");
     scanf("%d",&height);
     
     float volume=pi*radius*radius*height;
   
// Display the volume  
     printf("The volume is %.2f",volume);
     
     
	  return 0;
 }