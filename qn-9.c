//9. Write a program to store information of n students and display them using structure.

#include<stdio.h>
#include<string.h>
struct students
{
    int roll;
    char name[20];
    char section;


};
struct students input();
void display(struct students);
int main()
{
    int i,n;
    printf("How many students information u want to store:\n");
    scanf("%d",&n);
    struct students list[n];

    for(i=0;i<n;i++)
    {
      list[i]=input();
    }
    for(i=0;i<n;i++)
    {
      display(list[i]);
    }
}
struct students input()
{
    struct students list1;
    printf("enter roll,name and section:\n");

    scanf("%d",&list1.roll);

    fflush(stdin);
    fgets(list1.name,20,stdin);
    list1.name[strlen(list1.name)-1]='\0';


    scanf("%c",&list1.section);

    return list1;

}
void display(struct students list2)
{
    printf("%s %d %c\n",list2.name,list2.roll,list2.section);
}
