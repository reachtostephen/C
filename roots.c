#include<stdio.h>
#include<conio.h>
int main(void){
    int a,b,c;
    float real=0,imag=0;
    int disc;
    printf("Enter the coefficients\n");
    scanf("%d %d %d",&a,&b,&c);
    disc = b*b - (4*a*c);
    if(disc>0){
        real = (-b + sqrt(disc))/(2*a);
        imag = (-b - sqrt(disc))/(2*a);
    }
    if(disc==0){
        real=-b/(2*a);
    }
    else{
        real = -b/(2*a);
        imag = sqrt(-disc)/(2*a);
    }
    printf("The real value is %.2f\n",real);
    printf("The imaginary value is %.2f",imag);
    return 0;
}
