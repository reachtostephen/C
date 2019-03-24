#include<stdio.h>
#include<conio.h>

int main(void){
    char str[100][100];
    char s[100];
    int i,j,n;
    printf("Enter the number of names \n");
    scanf("%d",&n);
    printf("Enter the names in a order\n");
    for(i=0;i<n;i++){
        scanf("%s",&str[i]);
    }
    for(i=0;i<n;i++){
       // printf("Hii");
        for(j=i+1;j<n;j++){
           // printf("Hello");
            if(strcmp(str[i],str[j])>0){
                strcpy(s,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],s);
            }
        }
    }
    printf("Hence the sorted names are\n");
    for(i=0;i<n;i++){
        printf("%s\n",str[i]);
    }
    return 0;
}
