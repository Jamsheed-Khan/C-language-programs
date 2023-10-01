#include<stdio.h>
#include<string.h>
void main()
{
    char str1[10];
char str2[]=" is friend of ";
char str3[10];
char str4[20];
gets(str1);
gets(str3);
strcpy(str4,(strcat(str1,str2)));
puts(strcat(str4,str3));
}
