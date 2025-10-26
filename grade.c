#include<stdio.h>  
#include<math.h>
//Input a student's marks and print the grade

int main() {
    int a, b, c, d, e;
    printf("Enter the 1st subject marks: ");
    scanf("%d", &a);
    printf("Enter 2nd subject marks: ");
    scanf("%d", &b);   
    printf("Enter 3rd subject marks: ");
    scanf("%d", &c);
    printf("Enter 4th subject marks: ");
    scanf("%d", &d);
    printf("Enter 5th subject marks: ");
    scanf("%d", &e);
    
    // For subject a
    if (a >= 80 && a <= 100)
        printf("Grade of sub a is A+\n");
    else if (a >= 33 && a<=80)
        printf("Grade of sub a is A\n");
        else if (a>100){
            printf("Invalid marks for sub a\n");
        }
    else
        printf("Failed in sub a\n");

    // For subject b
    if (b >= 80 && b <= 100)
        printf("Grade of sub b is A+\n");
    else if (b >= 33 && b<=80)
        printf("Grade of sub b is A\n");
         else if (b>100){
            printf("Invalid marks for sub b\n");
        }
    else
        printf("Failed in sub b\n");

    // For subject c
    if (c >= 80 && c <= 100)
        printf("Grade of sub c is A+\n");
    else if (c >= 33 && c<=80)
        printf("Grade of sub c is A\n");
         else if (c>100){
            printf("Invalid marks for sub c\n");
        }
    else
        printf("Failed in sub c\n");

    // For subject d
    if (d >= 80 && d <= 100)
        printf("Grade of sub d is A+\n");
    else if (d >= 33 && d<=80)
        printf("Grade of sub d is A\n");
         else if (d>100){
            printf("Invalid marks for sub d\n");
        }
    else
        printf("Failed in sub d\n");

    // For subject e
    if (e >= 80 && e <= 100)
        printf("Grade of sub e is A+\n");
    else if (e >= 33 && e<=80)
        printf("Grade of sub e is A\n");
         else if (e>100){
            printf("Invalid marks for sub e\n");
        }
    else
        printf("Failed in sub e\n");

    return 0;
}