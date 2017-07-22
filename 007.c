#include <stdio.h>

#define N 10
void max_min(int a[],int n,int *max,int *min);
int main()
{
     int b[N],i,max,min;
     printf("enter %d counters:",N);
     for(i=0;i<N;i++)
         {
             scanf("%d",&b[i]);
         }

     max_min(b,i,&max,&min);
     printf("largest:%d\n",max);
     printf("smallest:%d\n",min);


    return 0;
}
void max_min(int a[],int n,int *max,int *min)
{
    int i;
    *max=*min=a[0];
    for(i=0;i<n;i++)
       {
           if(a[i]>*max)
               *max=a[i];
            else  if(a[i]<*min)
                *min=a[i];
       }
}
