//program to calculate the fare according to the distance travelled
//Name:David Maina Onchoke
//RegNo:PA106/G/28779

#include <stdio.h>

void calculateFare() {
    float distance, fare;

    printf("Enter distance (km): ");
    scanf("%f", &distance);

    fare = distance * 50;

    printf("Total fare = KSh. %.2f\n", fare);
}

int main(void) {
    calculateFare();
    return 0;
}
