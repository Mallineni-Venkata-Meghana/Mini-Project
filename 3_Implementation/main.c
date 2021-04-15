 #include<stdio.h>
#include<string.h>
#define LEN 100
#define WID 80
int main()
{
int choice;
printf("1.Do You Want to Sort Train Numbers using Bubble Sort\n");
printf("2.Do You Want to Sort Train Names using Selection Sort\n");
printf("3.Do You Want to Sort Passenger Names using Inseertion Sort\n");
printf("4.Do You Want to Sort PNR Numbers using Quick Sort\n");
printf("Enter the Choice:\n");
scanf("%d",&choice);
if(choice==1)
bsort();
if(choice==2)
ssort();
if (choice==3)
{
       int n, i,j;
       char s[LEN][WID],tname[10][10],temp[10][10];
       printf("Enter the How many passengers were travelling?\n");
       scanf("%d", &n);
       long long int pnr[n],tnum[n];
      for (i = 0; i < n; i++)
      {
       printf("Enter the Pasenger name\n");
        scanf(" %s", s[i]);
        strcpy(temp[i],s[i]);
        printf("Enter the PNR Number\n");
        scanf("%lld",&pnr[i]);
        printf("Enter the train number:-\n");
        scanf("%lld",&tnum[i]);
        printf("Enter The train name:\n");
        scanf("%s",tname[i]);
       }
     isort(s, n);
      for(i=0;i<n;i++)
      {
      printf("%s ",s[i]);
      for(j=0;j<n;j++)
      {
         if(strcmp(temp[j],s[i]) == 0) 
         printf("%lld %lld %s\n",pnr[i],tnum[i],tname);
      }
      } 
}
if(choice==4)
    {
    int size, i,j;
    printf("Enter the How many passengers were travelling?\n");
    scanf("%d", &size); 
    int list[size],f,l,man[size];
    long long int tnum[size];
    char tname[10][10],pname[10][10];
    for (i = 0; i < size; i++)
    {
        printf("Enter the PNR Number\n");
        scanf("%d", &list[i]);
        man[i]=list[i];
        printf("Enter the train number:-\n");
        scanf("%lld",&tnum[i]);
        printf("Enter the train name:-\n");
        scanf("%s",tname[i]);
        printf("Enter the passenger name:-\n");
        scanf("%s",pname[i]);
    }
    quicksort(list, 0, size - 1);
    printf("The sorted Oder is:-\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", list[i]);
        for(j=0;j<size;j++)
        {
            if(man[j]==list[i])
            printf("%lld %s %s\n",tnum[j],tname[j],pname[j]);
        }
    }
    printf("\n");
}
}

