#include<stdio.h>
void main(){
char len[99];
printf("Enater a string:-");
scanf("%s",len);
int *p;
p=&strlen(len);
printf("Length of the string is:%d",*p);
}
