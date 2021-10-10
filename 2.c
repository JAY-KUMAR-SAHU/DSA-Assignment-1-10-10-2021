// JAY KUMAR SAHU
//2012122

#include<stdio.h>

int main()
{
    char em[1000];  scanf("%s",em);
    int i=0, check=0, at_the_rate_count=0, adj_dot=0, pos1=-1, pos2=-1;
    // pos1 : position of @
    // pos2 : position of .
    // adj_dots : adjacent dots are not allowed

    while(em[i]!='\0')
    {
        if((em[i]>='A' && em[i]<='Z') || (em[i]>='a' && em[i]<='z') || (em[i]>='0' && em[i]<='9')) { check=1; }

        else if((em[i]=='.' || em[i]=='-' || em[i]=='!' || em[i]=='%' || em[i]=='_'  || em[i]=='@') && (i!=0 && em[i+1]!='\0')) { check=1; }

        else { check=-1; break; }


        if(em[i]=='@') { at_the_rate_count++; pos1=i; }
        if(at_the_rate_count != 1) { check=-1; break; }
        if(em[i]=='.' & em[i+1]=='.'){ check=-1; pos2=i; }
        if(em[i]=='.') { pos2=i; }

        i++;
    }
    if(pos2-pos1<2) { check=-1; }

    if(check==1) { printf("Valid Email address !\n")   ; }
    else         { printf("Invalid Email address !\n") ; }
}
