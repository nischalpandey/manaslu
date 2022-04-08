#include<stdio.h>
#include<conio.h>

void main(){

float i,p,t,r;


printf("===========================\n");

printf("**Calculate your intrest**\n");
printf("===========================\n");

printf("-Enter principle amount :\n");
scanf("%f",&p);


printf("-Enter Rate in percentage:");
scanf("%f",&r);


printf("-Enter Time in year:\n");
scanf("%f",&t);

i= (p*t*r)/100;
// wap to display hellow world
//input two no sum
// to area of rectangle
//to calculate SI
// to find area of circle 
// to centigrade to frihiFF
// to find sum and avarage
// all arthematic operation 
// to find distance(s)
// second into hour min and sec

printf("=====> Intest is Rs %.2f \n\n",i);

}