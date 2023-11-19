#include <stdio.h>
int main()
{
	printf("Name:Ashish Gupta\n");
	printf("Enrollment Number:A2305221299\n");
    int a[20],ub,lb=0,mid=(lb+ub)/2,value,size,temp,i,j;
    printf("enter size of array:");
    scanf("%d",&size);
    printf("enter array elements:");
    scanf("%d",&a[i]);
    for(i=1;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size-1;i++)
    {
         for(j=0;j<size-1;j++)
         {
             if(a[j]>a[j+1])
             {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
             }
         }
    }     
    printf("the sorted list is:");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
