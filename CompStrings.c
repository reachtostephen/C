#include<stdio.h>
#include<conio.h>

int main(void){
    char s1[100];
    char s2[100];
    int i,flag,len1,len2;
    printf("Enter the string1\n");
    gets(s1);
    printf("Enter the string2\n");
    gets(s2);
    len1=strlen(s1);
    len2=strlen(s2);
    if(len1!=len2){
        printf("Both Strings does not match");
        return 0;
    }
    else{
        while(i!=len1){
            flag=0;
            if(s1[i]==s2[i]){
                i++;
            }
            else if(s1[i]<s2[i]){
                flag=-1;
                break;
            }
            else if(s1[i]>s2[i]){
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("Strings are equal");
    }
    else if(flag==1){
        printf("String1 is Greater");
    }
    else if(flag==-1){
        printf("String2 is Greater");
    }
    return 0;
}
