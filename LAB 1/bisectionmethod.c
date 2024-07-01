#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

// Equation to solve
float f(float x){
return (x*x+5*x+6);
}


int main(){

int i,n;
float a,b,c;

printf("Enter the no of iteration:");
scanf("%d",&n);
printf("enter two values where the root lies:");
scanf("%f,%f",&a,&b);

if(f(a)*f(b)>0)
{
printf("the initial values are out of range");
getch();
exit(0);
}
else{

for(i=1;i<=n;i++){
c=(a+b)/2;
if(f(c)==0)
break;

if(f(a)*f(c)<0)
b=c;
else
a=c;
}
printf("the reqd. root is:%f",c);

}

return 0;
}
