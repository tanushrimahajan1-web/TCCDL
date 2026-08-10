#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i,len;
int zero=0,one=0;
printf("Enter a binary string:");
scanf("%99s",str);
len = strlen(str);

/*Check for empty string */
if(len==0)
{

printf("String Rejected\n");
return 0;
}/*Validate binary input*/

for(i=0;i<len;i++)
{
if(str[i]!='0'&& str[i]!='1')
{
printf("Invalid Input! Enter only 0 and 1.\n");
return 0;
}
/*Check first and  last symbols*/

if(str[i]=='0')
zero++;
else
one++;
}
if(zero % 2==0 && one % 2==0)
printf("String Accepted\n");
else
printf("String Rejected\n");
return 0;
}
