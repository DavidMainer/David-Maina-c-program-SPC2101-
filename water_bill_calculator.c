
//program that takes the number of unitsconsumed  and returns the total bill
//Name:David Maina Onchoke
//RegNo:PA106/G/28779/25


#include <stdio.h>


//returns nothing but accepts an input that is integer
void calculateElectricBill() {
    int units;
    float bill;

	
//prompt the user to enter the units consumed
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 10;
    else if (units <= 200)
        bill = (100 * 10) + (units - 100) * 15;
    else
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;

    printf("Total bill = KSh. %.2f\n", bill);
}

int main(void) {
    calculateElectricBill();
    return 0;
}

