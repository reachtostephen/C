#include<stdio.h>

  struct student{
        char name[100];
        int rollno;
        int marks[3];
        int total;
    };

int main(void){
  int n,i,j,max=0;
  struct student st[50];
  printf("Enter number of students : ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
      printf("\nEnter Student's name and rollno : ");
      scanf("%s",&st[i].name);
      scanf("%d",&st[i].rollno);
      printf("\nEnter The Student's marks : ");
      for(j=0;j<3;j++){
          printf("\nEnter subject%d mark : ",j+1);
          scanf("%d",&st[i].marks[j]);
          st[i].total += st[i].marks[j];
      }
      printf("\nThe Student's name is %s, his Roll number is %d and he scored a total of %d\n",st[i].name,st[i].rollno,st[i].total);
  }
  for(i=0;i<n;i++){
      if(st[i].total>max){
          j=i;
          max=st[i].total;
      }
  }
  printf("%s holds the highest mark",st[j].name);
}
