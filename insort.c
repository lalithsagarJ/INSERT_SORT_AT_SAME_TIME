#include<stdio.h>
#include<stdlib.h>
int insert(int max,int n,int a[max],int e,int i);
int main()
{
    int max,n,e;
    printf("enter the maximum size :");
    scanf("%d",&max);
    printf("enter how many elements :");
    scanf("%d",&n);
    int a[max],ch;
    while(1)
    {
        printf("enter 1 to continue or 0 to exit :\n");
        scanf("%d",&ch);
        if(ch==0)
           exit(0);
        for(int i=0;i<n;i++)
        {
           printf("enter the element :");
           scanf("%d",&e);
           insert(max,n,a,e,i);
        }
    }    
    return 0;
}
int insert(int max,int n,int a[max],int e,int i)
{
    int j=0;
    if(n==max)
    {
        printf("the array is full :\n");
        exit(0);
    }
    else if(n<max)
    {
         if(i==0){
           a[i]=e;
         }
         else{
         for(j=0;j<i;j++)
         {
             if(e<a[j])
             {
                 int te=a[j];
                 a[j]=e;
                 e=a[j+1];
                 a[j+1]=te;
             }
             else 
                 a[i]=e;
         }
       }
       printf("the array after insertion is :");
       for(int k=0;k<=i;k++)
          printf("%d ",a[k]);
       printf("\n");
     }
    else{
        printf("wrong choice \n");
        exit(0);
   }
    return 0;
}
