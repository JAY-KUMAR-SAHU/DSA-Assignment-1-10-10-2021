/* Given 2-D Array -   a b c d e f g
                       p q r s t u v
                       I J K L M N O

    Convert it to 1-D Array : a b c d e f g p q r s t u v I J K L M N O
*/

#include<stdio.h>

int main()
{
    int r,c; char t;
    printf("Enter the order of 2D matrix (row*col)\n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the 2D array :\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("      a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Inital 2D Array:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    int n=r*c;
    int b[n], k=0;
    printf("\n Final 1D array:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
            b[k++]=a[i][j];
        }
    }
}
