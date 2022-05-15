#include<stdio.h>
#include<string.h>
int main()
{
    printf("Name:Harshvardhan Sharma");
    char str[100]; printf("\nEnter the first string:"); scanf("%s",str);
    char str1[100]; printf("\nEnter the second string:"); scanf("%s",str1); int i=0,l = 0;

    while(str[l]!='\0'){ l++; }  while(str1[i]!='\0'){ str[l+i] = str1[i]; i++; }
    
    printf("\nString after Concatenated: [%s]",str);
    return 0;
}
