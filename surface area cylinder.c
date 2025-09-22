// Description:Program to compute surface area of a cylinder
/* 
Name: David Maina Onchoke
Reg No.:PA106/G/28779/25
*/

#include <stdio.h>;

  int main(){

  //including pi in calculation
    float pi=22.0/7.0;
	  printf("Using the pi as %.4f\n",pi);

//Users prompt to enter radius  
    int radius;
	  printf("Enter the radius :");
	  scanf("%d",&radius);

//Users prompt to enter height	  
    int height;
      printf("Enter the height :");
      scanf("%d",&height);

  // Display the surface area      
     float surface_area=2*pi*radius*radius+2*pi*radius*height;
     printf("The surface area of the cylinder is:%.2f",surface_area); 
     
     return 0;
  }