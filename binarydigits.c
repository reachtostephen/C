#include <stdio.h>
#include <string.h>

int main(){
    int i=0;
    char s[100];
    int count;
    scanf("%s",&s);
    while(i<strlen(s)){
        if(s[i]!='0' && s[i] != '1')
            count++;
        i++;
    }
    if(count==0)
        printf("Binary");
    else
        printf("Not a binary");
    
return 0;
}
