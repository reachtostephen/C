#include<stdio.h>
void csearch(int a[],int first,int last,int middle,int search);
//void sort(int a[]);
int main(void){
    int num,i,a[100],first,last,search,middle;
    printf("Enter the number of elements in the array ");
    scanf("%d",&num);
    printf("Enter the elements one by one ");
    for(i = 0;i<num;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the elements to be searched ");
    scanf("%d",&search);
    first=0;
    last= num-1;
    middle= (first+last)/2;
    csearch(a,first,last,middle,search);
}

void csearch(int a[],int first,int last,int middle,int search){
    while(first<=last){
        if(a[middle]>search){
            last=middle-1;
        }
        else if(a[middle]<search){
            first = middle+1;
        }
        if(search == a[middle]){
            printf("The element is at position %d",middle+1);
            break;
        }
    middle=(last+first)/2;
    }
    if(last<first)
        printf("The element is not found");
}
