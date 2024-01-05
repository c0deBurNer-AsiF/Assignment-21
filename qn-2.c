/*2. Write a function to take input employee data from the user. [ Refer structure from
question 1 ]*/

#include<stdio.h>
#include<string.h>
struct employee input();
struct employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct employee man;
    man=input();
    printf("%d %s %f",man.id,man.name,man.salary);
}
struct employee input()
{
    struct employee man1;
    printf("Enter id, name , salary");
    scanf("%d",&man1.id);

    fflush(stdin);
    gets(man1.name);

    scanf("%f",&man1.salary);
    return man1;
}
