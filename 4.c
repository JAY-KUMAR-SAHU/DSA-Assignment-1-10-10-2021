#include<stdio.h>
#include<time.h>
#include<math.h>

void selection_sort(float a[],long long int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("\n");
}

void bubble_sort(float a[],long long int n)
{
    int count=1;
    while(count<n)
    {
        for(int i=0;i<n-count;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        count++;
    }
    printf("\n");
}
int main()
{
    long long int n;
    printf("Enter no of elements : ");  scanf("%d",&n);
    printf("\nALREADY SORTED INPUT\n");

    float a[n];

    // FOR ALREADY SORTED INPUT
    for(int i=0; i<n; i++) { a[i]=i; }

    clock_t start1,end1;
    long long t1;
    start1=clock();
    selection_sort(a,n);
    end1=clock();
    t1=end1-start1;
    printf("    Total time elapsed for selection sort: %.7f seconds\n",(double)t1/(double)CLOCKS_PER_SEC);

    clock_t start2,end2;
    long long t2;
    start2=clock();
    bubble_sort(a,n);
    end2=clock();
    t2=end2-start2;
    printf("    Total time elapsed for bubble sort: %.7f seconds\n",(double)t2/(double)CLOCKS_PER_SEC);

    // FOR RANDOMLY GENERATED INPUT
    printf("\nRANDOMLY GENERATED INPUT\n");
    for(int i=1; i<=n; i++)
    {
        // CAN USE ANY FUNCTION HERE
        a[i]=(float)i*cos(i);
        // printf("%d-> %f , ", i, a[i]);
    }

    clock_t start3,end3;
    long long t3;
    start3=clock();
    selection_sort(a,n);
    end3=clock();
    t3=end3-start3;
    printf("    Total time elapsed for selection sort: %.7f seconds\n",(double)t3/(double)CLOCKS_PER_SEC);

    clock_t start4,end4;
    long long t4;
    start4=clock();
    bubble_sort(a,n);
    end4=clock();
    t4=end4-start4;
    printf("    Total time elapsed for bubble sort: %.7f seconds\n",(double)t4/(double)CLOCKS_PER_SEC);
}
