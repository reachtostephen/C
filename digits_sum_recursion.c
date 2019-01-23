#include<stdio.h>
void fun(int a[], int sum, int num);

int main(void){
    int a[100],i,sum=0,num;
    printf("Enter the Limit\n");
    scanf("%d",&num);
    printf("Enter the elements\n");
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    fun1(a,sum,num-1);
}

void fun1(int a[] ,int sum, int num){
    if(num>=0){
        if(a[num]%2==0)
            sum+=a[num];
            num-=1;
            fun1(a,sum,num);
    }
    else{
        printf("The sum is %d",sum);
    }
}
