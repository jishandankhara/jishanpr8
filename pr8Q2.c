#include<stdio.h>
cube(){
int b,a;
printf("Enter array size:");
scanf("%d",&a);
b=a;
int j[a][b];
int z,r,c;
for(r=0;r<a;r++){
for(c=0;c<b;c++){
printf("j[%d][%d]=",r,c);
scanf("%d",&j[r][c]);
}
}
for(r=0;r<a;r++){
for(c=0;c<b;c++){
z=j[r][c]*j[r][c]*j[r][c];
printf("\ncube is %d\n",z);
}
}
}
void main(){
cube();
}
