#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if ((marks<=100) && (marks>=95)) 
        printf(" Your Grade is 'Outstanding'");
    else if ((marks<=94) && (marks>=85)) 
        printf("Your Grade is 'AA'");
    else if ((marks<=84) && (marks>=75)) 
        printf("Your Grade is 'A'");
    else if ((marks<=74) && (marks>=65)) 
        printf("Your Grade is 'B+'");
    else if ((marks<=64) && (marks>=55)) 
        printf("Your Grade is 'B'");
    else if ((marks<=54) && (marks>=45)) 
        printf("Your Grade is 'C+'");
    else if ((marks<=44) && (marks>=25)) 
        printf("Your Grade is 'C'");
    else
        printf("Grade D  snd sorry! You are Fail");
    return 0;
}
