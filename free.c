//WAP free the  memory allocated with calloc.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("enter the number :");
    scanf("%d",&n);
     ptr =(int *)calloc(n,sizeof(float ));

   
     for(int i=0;i<n;i++)
     {
        printf("%d\n",ptr[i]);
     }

     free(ptr);
      ptr =(int *)calloc(2,sizeof(float ));

   
     for(int i=0;i<2;i++)
     {
        printf("%d\n",ptr[i]);
     }

     return 0;

}