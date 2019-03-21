#include<stdio.h>
#include<conio.h>

int main(void){
    int i;
    int j=0;
    int temp;
    int sum=0;
    char str[100],substr[100];
    printf("Enter the String\n");
    scanf("%s",&str);
    for(i=0;i<strlen(str);i++){
        if(str[i]>='0' && str[i] <='9'){
            substr[j]=str[i];
            j++;
        }
    }
    temp = atoi(substr);
    while(temp>0){
        sum=sum+(temp%10);
        temp/=10;
    }
    printf("The sum is %d",sum);
    return 0;
}
