#include <stdio.h>
#define ti 0.5
int main()
{
    float height = 0.00;
    float base = 0.00 , cal = 0.00;
    printf("=========================================\n");
    printf("Welcome, this is a program for calculatimg the area of a triangle.\n");
    printf("Please enter the value of the base of the triangle : ");
    scanf("%f",&base);
    printf("Please enter the height of the triangle : ");
    scanf("%f",&height);
    cal = ti*height*base ;
    printf("%.2f\n",cal);    
    printf("=========================================");
    return 0;
}
