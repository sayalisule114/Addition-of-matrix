#include <stdio.h>
int main(){
    int a[3][3],b[3][3],p[9],c[3][3],i,j;
    printf("enter the elements of first array\n");
    for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d", &a[i][j]);
    }
}
printf("enter the elements of second array\n");
 for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d", &b[i][j]);
    }
}
  printf("addition of two arrays is\n");
  for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            *(*(c+ i) + j) =(*(*(a+ i) + j))+(*(*(b + i) + j));
        }
    }
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                printf("%d\t",*(*(c + i) + j));
            printf("\n");
        }
    return 0;
}
