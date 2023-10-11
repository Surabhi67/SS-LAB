#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct
{
        char dname[10], fname[10][10];
        int fcount;
}dir;

void main()
{
        char name[10];
        int op, i;
        dir.fcount=0;
        printf("Enter the name of the directory to be created ");
        scanf("%s",dir.dname);
        do
        {
                printf("1.Create file  2.Delete file  3.Display  4.Exit - ");
                scanf("%d",&op);
                switch(op)
                {
                        case 1:
                         printf("Enter the name of the file to be created  ");
                         scanf("%s",name);
                         int flag = 1;
                         for(i=0; i<dir.fcount; i++)
                         {
                           if(strcmp(dir.fname[i],name)==1)
                           {
                             printf("File of the same name already exists in the directory\n");
                             flag = 0;
                             break;
                           }
                          }
                           if(flag == 1)
                           {
                             strcpy(dir.fname[dir.fcount],name);
                             dir.fcount++;
                             printf("The file is added to the directory\n");
                           }
                           break;
                         case 2:
                           printf("enter the name of the file to be deleted");
                           scanf("%s",name);
                            for(i=0; i<dir.fcount; i++)
                         {
                           if(strcmp(dir.fname[i],name))
                           {
                             strcpy(dir.fname[i],dir.fname[dir.fcount-1]);
                             printf("The file is deleted\n");
                             dir.fcount--;
                             break;
                           }
                          }
                          if(i == dir.fcount)
                                printf("file not found\n");
                          break;
                          case 3:
                            if(dir.fcount ==0)
                              printf("Directory empty");
                            else
                            {
                              for(i=0; i<dir.fcount; i++)
                                printf("%s\n",dir.fname[i]);
                            }
                            break;
                          case 4:
                            exit(0);
                          default:
                                printf("Invalid!!");
                           }
                   }while(1);
}
                       
                          
                       
                       
                       
                       
                       
                       
              
                          
                                        
