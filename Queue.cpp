#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5]={0,3,5,7,16},f[5]={2,8,10,14,20},s[5]={0,3,8,10,16},c[4]={3,12,4,1},i,wi[5],wqi[5];
    float l=0.0,lq=0.0,w=0.0,wq=0.0;
    for(i=0;i<5;i++)
    {
        wi[i]=f[i]-a[i];
        wqi[i]=s[i]-a[i];
        w += wi[i];
        wq += wqi[i];
    }
    for(i=1;i<4;i++)
    {
        l += (c[i] * i);
        lq += (c[i] * (i-1));
    }
    printf("No. of Customers\tTime containing customers\n");
    for(i=0;i<4;i++)
    {
        printf("%d\t\t\t%d\n",i,c[i]);
    }
    printf("\nCustomer\tTime spent in system\tTime spent in queue\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t\t%d\t\t\t%d\n",i+1,wi[i],wqi[i]);
    }
    printf("\nTime waited average number of customer = %.2f",l/20);
    printf("\nAverage number of customer in system = %.2f",lq/20);
    printf("\nAverage time spent in system per customer = %.2f",w/5);
    printf("\nAverage time spent in queue per customer = %.2f",wq/5);
    getch();
    return 0;
}
