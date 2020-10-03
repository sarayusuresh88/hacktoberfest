#include<stdio.h>
void main()
{
    int a[20],i,n,j,c,temp,pos;
    char ch;
    do
    {
        printf("How many elements ");
        scanf("%d",&n);
        printf("Enter the elements ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf(" 1.Bubble sort\n 2.Selection sort\n 3.Insertion sort\n Enter your choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:     for(i=0;i<n;i++)
                        {
                            for(j=i+1;j<n;j++)
                            {
                                if(a[i]>a[j])
                                {
                                    temp=a[i];
                                    a[i]=a[j];
                                    a[j]=temp;
                                }
                            }
                        }
                        for(i=0;i<n;i++)
                        {
                            printf("%d ",a[i]);
                        }
                        break;
            case 2:  for(i=0;i<n-1;i++)
                        {
                            pos=i;
                            for(j=i+1;j<n;j++)
                            {
                                if(a[pos]>a[j])
                                    pos=j;
                            }
                            if(pos!=i)
                            {
                                temp=a[i];
                                a[i]=a[pos];
                                a[pos]=temp;
                            }
                        }
                        for(i=0;i<n;i++)
                        {
                            printf("%d ",a[i]);
                        }
                        break;
            case 3:     for(i=1;i<n;i++)
                        {
                            temp=a[i];
                            j=i-1;
                            while(temp<a[j]&&(j>=0))
                            {
                                a[j+1]=a[j];
                                j--;
                            }
                            a[j+1]=temp;
                        }
                        for(i=0;i<n;i++)
                        {
                            printf("%d ",a[i]);
                        }
                        break;
        }
        printf("\nDo you want to continue? (Y/N)");
        scanf(" %c",&ch);
    }
    while(ch=='y'||ch=='Y');
}
