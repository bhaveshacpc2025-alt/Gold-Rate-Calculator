#include<stdio.h>

int main()
{
    float a,b,c;
    printf("Enter todays gold rate:");
    scanf("%f", &a);
    
    printf("Enter your making charge:");
    scanf("%f", &b);
    
    printf("Enter weight of jewellary:");
    scanf("%f", &c);
    
    float y=a+b;
    printf("Your rate constant is:%f",y);
    
    float rate=y*c;
    printf("your print of ornament is:%f",rate);
    return 0;
}