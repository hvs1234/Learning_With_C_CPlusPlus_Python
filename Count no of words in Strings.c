#include<stdio.h>
#include<ctype.h>
int main()
{
    printf("Name:Harshvardhan Sharma");
    char str[100]="Hello World in C"; int length=0,count=0;  printf("\nGiven string is: %s",str);
    
    while(str[length]!= '\0'){ length++; }

    for(int i=0;i<length;i++){ if(isgraph(str[i]) && (str[i+1] == ' ' || str[i+1] == '\n' || str[i+1] == '\0')) count++; }
    printf("\nCount the no. of words in the string: %d",count);

    return 0;
}
