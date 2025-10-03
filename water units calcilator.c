//Description:c program to compute water bill calculation
/*Name:David Maina
Reg No.:PA106/G/28779/25
*/

#include <stdio.h>

int main () {
 
    int units;
    float bill;
    
//User to enter units consumed
    printf("Enter water units consumed: ");
    scanf("%d", &units);
    
// if ,else if,else
    if (units <= 30) {
        bill = units * 20;
    } else if (units >=31 && units <= 60) {
        bill = units * 25;
    } else {
        bill = units*30;
    }

    printf("Total water bill: %.2f KES\n", bill);

	
	
 return 0;
}