#include <stdio.h>
int main()
{
	printf("Name:Ashish Gupta\n");
	printf("Enrollment Number:A2305221299\n");	
    int a[20],ub,lb=0,mid=(lb+ub)/2,value,i;
    printf("enter size of array");
    scanf("%d",&ub);
    printf("enter array elements");
    for(i=0;i<ub;i++)
    {
       scanf("%d",&a[i]); 
    }
    printf("enter value");
    scanf("%d",&value);
    while (lb<=ub)
    {
        if (a[mid]==value)
        {
            printf("element is present in the array");
            break;
        }
        else if (a[mid]>value)
        {
            ub=mid-1;
        }
        else
        {
            lb=mid+1;
        }
        mid=(lb+ub)/2;
    }
    
    return 0;
}
