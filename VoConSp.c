#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(void){
    char s1[100]={0};
    int i;
    int vo=0;
    int con=0;
    int sp=0;
    printf("Enter the string\n");
    gets(s1);
    for(i=0;i<strlen(s1);i++){
        if((s1[i]>=65 && s1[i]<=90)||(s1[i]>=97&&s1[i]<=122)){
            if(s1[i]=='a' || s1[i] =='A'|| s1[i] == 'e' ||s1[i] == 'E' || s1[i] == 'i' ||s1[i] == 'I' || s1[i] =='o' || s1[i] == 'O' || s1[i]=='u' || s1[i] == 'U'){
            vo++;
            }
            else{
                con++;
            }
        }
        else if((s1[i]>32 && s1[i]<65) || (s1[i]>90 && s1[i]<97)){
            sp++;
        }
    }
    
    printf("Vowels are %d \n",vo);
    printf("Consonants are %d \n",con);
    printf("Special characters are %d",sp);
    getch();
}
