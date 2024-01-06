/*4. Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]*/

#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
struct employee input();
void sort(struct employee[],int);
void display(struct employee);

int main()
{

    int n,i;
    printf("how many name will be added here:\n");
    scanf("%d",&n);
    struct employee man[n];
    for(i=0;i<n;i++)
    {
       man[i]=input();
    }
    printf("The highest salary person is \n");
    sort(man,n);
}

struct employee input()
{
    struct employee man1;
    printf("enter id, name and salary:\n");
    scanf("%d",&man1.id);

    fflush(stdin);
    fgets(man1.name,20,stdin);
    man1.name[strlen(man1.name)-1]='\0';

    scanf("%f",&man1.salary);

    return man1;
}
void display(struct employee man2)
{
    printf("%d %s %f\n",man2.id,man2.name,man2.salary);
}
void sort(struct employee man3[],int x)
{
    struct employee k;
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=1+i;j<x;j++)
        {
            if(man3[i].salary<man3[j].salary)
            {
               k=man3[i];
               man3[i]=man3[j];
               man3[j]=k;
            }


        }

    }
    display(man3[0]);
}
