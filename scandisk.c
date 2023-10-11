#include<stdio.h>
#include<math.h>

void main()
{
        int arr[10], head, i, n, temp,j,curr,dist=0,index;
        printf("Enter the number of requests  ");
        scanf("%d",&n);
        printf("Enter the location of the head ");
        scanf("%d",&head);
        printf("Enter the request sequence for the disk ");
        for(i=0;i<n; i++)
                scanf("%d",&arr[i]);
        for(i=0; i<n; i++)
        {
                for(j=1;j<n;j++)
                {
                        if(arr[j-1]>arr[j])
                        {
                                temp = arr[j];
                                arr[j] = arr[j-1];
                                arr[j-1] = temp;
                        }
                 }
         }
         for(i=0; i<n; i++)
         {
                if(arr[i]>head)
                {
                        index = i;
                        break;
                }
         }
         printf("The seek sequence is ");
         for(i=index; i<n; i++)
         {
                curr = arr[i];
                dist += fabs(head-curr);
                head = curr;
                printf("%d  ",curr);
         }
         for(i=0; i<index; i++)
         {
                curr = arr[i];
                dist += fabs(head-curr);
                head = curr;
                printf("%d  ",curr);
         }
         printf("\nThe total seek operations is %d\n",dist);
}
