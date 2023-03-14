#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100];
   int n;
   int i,j,t;
   printf("enter the number of element u want to take\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
           }
       }
   }
   printf("\n Array after sorting \n ");
   for(i=0;i<n;i++)
   {
    printf("%d",a[i]);
   }
    return 0;
}
