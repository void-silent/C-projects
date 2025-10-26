#include<stdio.h>
#include<math.h>
// BMI Calculation Program
int main() {
    float weight, height, bmi;
    printf("Enter weight in kg: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi < 24.9) {
        printf("Category: Normal weight\n");
    } else if (bmi < 29.9) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obesity\n");
    }
    return 0;
}