/*10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.*/

#include<stdio.h>
#include<string.h>
struct students
{
    char name[20];
    float chem_marks,maths_marks,phy_marks;
};
struct students input();
int main()
{
    struct students percent[5];
    int i;
    float sum;
    printf("enter students marks\n");
    for(i=0;i<5;i++)
    {
       percent[i]=input();
    }
    for(i=0;i<5;i++)
    {
        sum=(percent[i].chem_marks+percent[i].maths_marks+percent[i].phy_marks)/3;
        printf("%s got %f percent\n",percent[i].name,sum);
    }
}
struct students input()
{
    struct students percent1;

    printf("enter your name:\n");
    fflush(stdin);
    fgets(percent1.name,20,stdin);
    percent1.name[strlen(percent1.name)-1]='\0';

    printf("enter the mark of chemistry: ");
    scanf("%f",&percent1.chem_marks);

    printf("enter the mark of mathematics: ");
    scanf("%f",&percent1.maths_marks);

    printf("enter the marks of physics: ");
    scanf("%f",&percent1.phy_marks);

    return percent1;


}

