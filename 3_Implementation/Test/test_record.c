  #include<stdio.h>
#include<string.h>
#define LEN 100
#define WID 80
void bsort()
{
long long int n,count,imp;
printf("Enter the Number Of Passengers:-\n");
scanf ("%lld",&n);
long long int a[n],b[n],i,j,t,r,cn=0,pnr[10];
char name[10][10],tname[10][10];
for(i=0;i<n;i++)
{
count=0;
  printf("Enter the Train Number:");
  scanf("%lld",&a[i]);
  b[i]=a[i];
  imp=a[i];
  while(imp>0)
      {
          imp=imp/10;
         count++;
     }
  if(count==5)
  {
pintf("Enter the Passenger Name\n");
   scanf("%s",name[i]);
   printf("Enter the Train Name\n");
   scanf("%s",tname[i]);
   printf("Enter the PNR Number\n");
   scanf("%lld",&pnr[i]);}
     }
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
        {
             if(a[i]<a[j])
                {
                    t=a[i];
                   a[i]=a[j];
                   a[j]=t;
               }
}
}
printf("Sorted Order is:\n");
for(i=0;i<n;i++){
printf("%lld ",a[i]);
r=a[i],cn=0;
for(j=0;j<n;j++)
{
      if(b[j]==r)
      cn=j;
}
printf(" %s %s %lld\n",name[cn],tname[cn],pnr[cn]);
}
}
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
void isort(char s[][WID], int n)
{
    int i, item;
    char elem[WID];
    for (item = 1; item < n; item++) {
        strcpy(elem, s[item]);
        for (i = item; strcmp(s[i - 1], elem) > 0 && i > 0; i--) {
            //strcpy(s[i], s[i - 1]);
        }
        memcpy(&s[i + 1], &s[i], (item - i) * WID);
        strcpy(s[i], elem);
    }
}
void quicksort(int list[], int low, int high)
{
    int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j) 
        {
            while (list[i] <= list[pivot] && i <= high)
            {
                i++;
            }
            while (list[j] > list[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        temp = list[j];
        list[j] = list[pivot];
        list[pivot] = temp;
        quicksort(list, low, j - 1);
        quicksort(list, j + 1, high);
    }
}

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

