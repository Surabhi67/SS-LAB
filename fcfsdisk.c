#include<stdio.h>
#include<math.h>

void main()
{
        int dist=0, arr[10],curr,i,n, head;
        printf("Enter the number of requests  ");
        scanf("%d",&n);
        printf("Enter the location of the head ");
        scanf("%d",&head);
        printf("Enter the request sequence for the disk ");
        for(i=0;i<n; i++)
                scanf("%d",&arr[i]);
        printf("The seek sequence is ");
        for(i=0; i<n;i++)
        {
                curr = arr[i];
                dist += fabs(head-curr);
                head = curr;
                printf("%d  ",curr);
        }
        printf("\nThe total seek operations is %d\n",dist);
}
                
