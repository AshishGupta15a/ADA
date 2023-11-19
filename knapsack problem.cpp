//Fractional Knapsack
#include<stdio.h>
#include<stdlib.h>
struct item
{
    int weight;
    int profit;
    float ratio;
};
void swap(struct item *a,struct item *b)
{
    struct item temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void sort(struct item *arr,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j].ratio<arr[j+1].ratio)
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
float knapsack(struct item *arr,int n,int capacity)
{
    int i;
    float profit=0.0;
    for(i=0;i<n;i++)
    {
        if(arr[i].weight<=capacity)
        {
            profit+=arr[i].profit;
            capacity-=arr[i].weight;
        }
        else
        {
            profit+=arr[i].ratio*capacity;
            break;
        }
    }
    return profit;
}
int main()
{
    int n,i,capacity;
    float max_profit;
    printf("Ashish Gupta\n");
    printf("A2305221299\n");
    printf("Enter the number of items: ");
    scanf("%d",&n);
    struct item *arr=(struct item *)malloc(n*sizeof(struct item));
    printf("Enter the weight and profit of each item:\n");
    for(i=0;i<n;i++)
    {
        printf("Item %d:\n",i+1);
        printf("Weight: ");
        scanf("%d",&arr[i].weight);
        printf("Profit: ");
        scanf("%d",&arr[i].profit);
        arr[i].ratio=(float)arr[i].profit/arr[i].weight;
    }
    printf("Enter the capacity of knapsack: ");
    scanf("%d",&capacity);
    sort(arr,n);
    max_profit=knapsack(arr,n,capacity);
    printf("Maximum profit: %f\n",max_profit);
	return 0;
}

