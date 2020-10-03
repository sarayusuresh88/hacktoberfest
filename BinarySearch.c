#include<stdio.h>
#include<D:\C\BubbleSort.c>
void main(){
    int n,i,ar[20],j,temp,s,low,high,mid,f = 0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("Sorting array elements...");
    sort(ar,n);
    printf("\nEnter the element to be searched: ");
    scanf("%d",&s);
    low = 0;
    high = n - 1;
    while(low<=high){
        mid = (low+high)/2;
        if(s<ar[mid]){
            high = mid - 1;
        }
        else if(s>ar[mid]){
            low = mid + 1;
        }
        else if(s==ar[mid]){
            printf("The element %d found at position %d.",s,mid+1);
            f = 1;
            break;
        }
    }
    if(f == 0)
        printf("Element not found.");
}