 #include<stdio.h>
#include<string.h>
#define LEN 100
#define WID 80

void ssort()
{
char name[10][100], tname[10][100],copy[10][100], temp[10];
 int i, j, n;
 printf("Enter the value of n \n");
 scanf("%d", &n);
 long long int trname[n],pnr[n];
 char pname[10][10];
 for (i = 0; i < n; i++) 
        {
            printf("Enter the Train Name\n");
            scanf("%s", name[i]);
            strcpy(copy[i],name[i]);
            strcpy(tname[i], name[i]);
            printf("Enter the train number\n");
            scanf("%lld",&trname[i]);
            printf("Enter the Passenger name\n");
            scanf("%s",pname[i]);
            printf("Enter the PNR Number\n");
            scanf("%lld",&pnr[i]);
        }
 
        for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0) 
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }
 
        printf("The Sorted Order iS:-\n");
        for (i = 0; i < n; i++) 
        {
            printf("%s ",  name[i]);
            for(j=0;j<n;j++)
            {
                if(strcmp(copy[j],name[i])== 0)
                printf("%lld %s %lld\n",trname[j],pname[j],pnr[j]);
            }
        }
        
 
      
}
