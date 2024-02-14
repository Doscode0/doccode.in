#include<stdio.h>
int binarysearch(int arr[],int size,int item);
int main()
{
    int n;
    printf("Enter the array size:- ");
    scanf("%d",&n);
    int lr=0;int up=n-1;
    int arr[n];
    printf("Enter the array element in Ascending Order:- ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the searching item:- ");
    int item;
    scanf("%d",&item);
    int bs=binarysearch(arr,n,item);
    if(bs==-1)
    {
        printf("no");
    }
    else{
        printf("yes and Location is %d",bs);
    }
    return 0;
}
int binarysearch( int arr[],int size,int item)
{
    int lr=0,up=size-1;// here lr is lower and up is upper
    int f=0;int mid;
    while(lr<=up)
    {
        mid=(lr+up)/2;
        if(arr[mid]==item)
        {
            return mid;
        }
        if(arr[mid<item])
        {
            lr=mid+1;
        }else{
            up=mid-1;
        }
        return -1;
    }
    {
        /* code */
    }
    
}