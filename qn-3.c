//3. Write a function to display employee data. [ Refer structure from question 1 ]


#include<stdio.h>
#include<string.h>
struct employee input();
void display(struct employee );
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
    display(man);
}
struct employee input()
{
    struct employee man1;
    printf("Enter id, name , salary\n");
    scanf("%d",&man1.id);

    fflush(stdin);
    fgets(man1.name,50,stdin);
    man1.name[strlen(man1.name)-1]='\0';

    scanf("%f",&man1.salary);
    return man1;

}
void display(struct employee man2)
{
    printf("%d %s %f",man2.id,man2.name,man2.salary);
}
