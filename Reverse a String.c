#include<stdio.h>
#include<string.h>
int main()
{
    char str[45],temp; printf("\nEnter the string:"); scanf("%s",str);  int i, length = 0;
    
    while(str[length]!='\0'){ length++; }

    for(i=0; i<(length/2); i++){ temp=str[i]; str[i] = str[length - (i+1)]; str[length - (i+1)] = temp; }
    printf("\nString after reversed: %s",str);

    return 0;
}
