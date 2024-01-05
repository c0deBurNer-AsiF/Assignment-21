//1. Define a structure Employee with member variables id, name, salary.

#include<stdio.h>
#include<string.h>
struct employee
{
   int id;
   char name[20];
   float salary;
     
};
int main()
{
    struct employee man;
    printf("enter id, name and salary:\n");
    scanf("%d",&man.id);
    fflush(stdin);
    fgets(man.name,20,stdin);
    man.name[strlen(man.name)-1]='\0';
    scanf("%f",&man.salary);

    printf("%d %s %f",man.id,man.name,man.salary);
}
