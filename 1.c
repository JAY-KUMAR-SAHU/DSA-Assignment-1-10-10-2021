// JAY KUMAR SAHU
//2012122

#include <stdio.h>
#include <string.h>

int main()
{
    char num[1000];
    printf("Enter the value\n"); scanf("%s",num);

    int f=1, dots=0;
    for(int i=0; i<strlen(num); i++)
    {
        if( num[i]>=48 & num[i]<=57  &  f==1 ) { continue; }
        else if(num[i]=='.' & f==1)            { dots++; continue; }
        else                                   { f=0; break; }
    }
    if(num[strlen(num)-1]=='.' || dots>1) { f=0; }

    if( f==1 ) { printf("Valid\n")   ;}
    else       { printf("Invalid\n") ;}
}
