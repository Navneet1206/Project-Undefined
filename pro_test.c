#include <stdio.h>
#include <string.h> 
int main() 
{
    char a[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", a);

    for(i=0;a[i]!='\0'; i++) 
    {
        if(a[i]>='A'&&a[i]<='Z') 
        {
            a[i]=a[i]+('a'-'A');
        }
    }

    
    if (strcmp(a,"navneet") == 0) 
    {
        printf("True\n");
    } 
    else 
    {
        printf("False\n");
    }

    return 0;
}
