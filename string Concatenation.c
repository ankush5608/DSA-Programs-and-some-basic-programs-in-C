#include<stdio.h>
int main()
{
 char str1[100],str2[100],str3[100];
 int i=0,j=0,count=0;
 printf("Enter the string 1 :\n");
 gets(str1);
 printf("Enter the string 2: \n");
 gets(str2);
 while (str1[i]!='\0')
 {
    str3[count]=str1[i];
    i++;
    count++;
 }
 str3[count++] = "";
while (str2[j]!='\0')
{
    str3[count]=str2[j];
    count++;
    j++;
}
printf(" \n String str1=\t");
puts(str1);
printf("\n String str2=\t");
puts(str2);
printf("\n String str3=\t");
puts(str3);
return 0;

 
}