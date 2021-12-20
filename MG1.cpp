#include<stdio.h>
#include<conio.h>
int main()
{
    float at=1.5,st=2,sd=(1.0/3.0),rho,l,lq,w,wq;
rho = at/st;
    l = rho + ((rho*rho)*(1+((sd*sd)*(st*st))))/(2*(1-rho));
lq = ((rho*rho)*(1+((sd*sd)*(st*st))))/(2*(1-rho));
    w = (1/st) + (at*((1/(st*st))+(sd*sd)))/(2*(1-rho));
wq = (at*((1/(st*st))+(sd*sd)))/(2*(1-rho));
printf("Mean arrival time = %.2f",at);
printf("\nMean service time = %.2f",st);
printf("\nStandard deviation = %.2f",sd);
printf("\nServer utilization = %.2f",rho);
printf("\nLong-run time-average number of customer in system = %.2f",l);
printf("\nLong-run time-average number of customer in queue = %.2f",lq);
printf("\nLong-run time-average spent in system per customer = %.2f",w);
printf("\nLong-run time-average spent time in queue per customer = %.2f",wq);
getch();
getch();
}

