//7. Write a program to calculate the difference between two time periods.

#include<stdio.h>
#include<string.h>
struct difference
{
    int hour, minute, second;
};
struct difference input();
void display(struct difference );
struct difference between2(struct difference[]);
int main()
{
    struct difference time[2];
    struct difference finalround;
    int i;
    for(i=0;i<2;i++)
    {
      time[i]=input();
    }
    for(i=0;i<2;i++)
    {
        display(time[i]);
    }

    finalround=between2(time);

    printf("Difference between two time periods:\n");

    printf("%d %d %d",finalround.hour,finalround.minute,finalround.second);

}
struct difference input()
{
    struct difference time1;
    printf("enter the time:\n");
    fflush(stdin);
    scanf("%d",&time1.hour);
    scanf("%d",&time1.minute);
    scanf("%d",&time1.second);
    return time1;
}
void display(struct difference time2)
{
    while((time2.minute>60)||(time2.second>60))
    {
        if(time2.second>60)
        {
            time2.second=time2.second-60;
            time2.minute=time2.minute+1;
        }
        else if(time2.minute>60)
        {
            time2.minute=time2.minute-60;
            time2.hour=time2.hour+1;
        }
    }

      printf("%d-%d-%d\n",time2.hour,time2.minute,time2.second);


}
struct difference between2(struct difference finalcame[])
{
    struct difference time3;
    if(finalcame[0].second>finalcame[1].second)
    {
      time3.second=(finalcame[0].second-finalcame[1].second);
    }
    else
    {
      time3.second=(finalcame[1].second-finalcame[0].second);
    }

    if(finalcame[0].minute>finalcame[1].minute)
    {
      time3.minute=(finalcame[0].minute-finalcame[1].minute);
    }
     else
    {
      time3.minute=(finalcame[1].minute-finalcame[0].minute);
    }

     if(finalcame[0].hour>finalcame[1].hour)
    {
      time3.hour=(finalcame[0].hour-finalcame[1].hour);
    }
     else
    {
      time3.hour=(finalcame[1].hour-finalcame[0].hour);
    }

    return time3;
}

