 //Description:c program to compute exam eligibility for a student
 /*Name:David Maina
 Reg No.:PA106/G/28779/25
 */  
   
#include <stdio.h>

int main () {
	
    float attendance;
    
    float average;
    
    // student to fill in the attendance percentage
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
    
// student to fill in the average marks
    printf("Enter average marks: ");
    scanf("%f", &average);

    // Exam eligibility
    if (attendance >= 75 && average >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

 return 0;
}