#include <stdio.h>
#include <string.h>

int main()
{
    char num[1000];
    printf("Enter the value\n"); scanf("%s",num);
    int i=0, check1=0,check2=0;
    
    while(num[i]!='\0')
    {
        if(num[i]=='.')
        {
            check1++;
            if(num[i+1]!='\0')
            check2=1;
        }
        i++;
    }
    int float=0;
    for(int i=0; i<strlen(num)-1; i++)
    {
        if((num[i]>=48 & num[i]<=57))
        {
            float=1; break;}
    }
    if(check1==1 && check2==1){ printf("Valid\n");}
    else{printf("Invalid\n");}
}
