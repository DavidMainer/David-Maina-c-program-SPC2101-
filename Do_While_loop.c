//program to copute the user to enter the 1234 as the password
//Name:David Maina Onchoke
//RegNo.:PA106/G/28779/25

#include <stdio.h>

int main() {
    int password;
    
    do {
        printf("Enter password: ");
        scanf("%d", &password);
    } while (password != 1234);

    printf("Access Granted");
    
    return 0;
}
