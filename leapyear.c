#include<stdio.h>
#include<conio.h>
int main(void){
    int a,i;
    printf("Enter the end year");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        if(i%4==0 && (i%100!=0 || i%400==0))
            printf("%d\n",i);
    }
    return 0;
}
