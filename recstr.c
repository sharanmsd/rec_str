#include<stdio.h>
#include<string.h>
void recstr(char *s)
{
    if(*s=='\0')
    {
        return;
    }
    *s++;
    recstr(s);
    *s--;
    printf("%c",*s);
}
int main() {
    char s[1000];
    int i,j,k,l;
    scanf("%s",s);
    l=strlen(s);
    recstr(s);
}
