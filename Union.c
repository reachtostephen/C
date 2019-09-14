#include<stdio.h>

int main(void){
  struct student{
    int rollno;
    char name[100];
    int total;
  };
  union un{
    struct student st;
  };
  union un s;
  printf("Enter roll number and name : ");
  scanf("%d",&s.st.rollno);
  gets(s.st.name);
  printf("\nEnter his total : ");
  scanf("%d",&s.st.total);
  printf("\n%s with roll number %d has scored %d marks",s.st.name,s.st.rollno,s.st.total);
  return 0;
}
