#include<stdio.h>
#include<conio.h>

int main(void){
    char a[100],c[100];
    printf("Enter the Complex number\n");
    gets(a);
    printf("Enter another Complex number\n");
    gets(c);
       int i,x,j,y;
    int b[2];
    j=0;
    for(i=0;i<strlen(a);i++){
        if(a[i]>='0' && a[i]<='9'){
            x= a[i]-'0';
           
        while(a[i+1]>='0' && a[i+1]<='9'){
            y=a[i+1]-'0';
            x= x*10 + y;
            i++;
        }
        b[j]=x;
        j++;
        }
    }
      for(i=0;i<strlen(c);i++){
        if(c[i]>='0' && c[i]<='9'){
            x= c[i]-'0';
           
        while(c[i+1]>='0' && c[i+1]<='9'){
            y=c[i+1]-'0';
            x= x*10 + y;
            i++;
        }
        b[j]=x;
        j++;
        }
    }
   printf("The Sum of real numbers is %d",b[0]+b[2]);
   printf("The sum of Imaginary Numbers is %d", b[1] + b[3]);
   return 0;
}

