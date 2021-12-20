#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int i,j,fr[10]={0};
	float ar[250][12],minv=1.0,maxv=0.0,sum=0.0,sums=0.0,in[250]={0},bins[10];
	for(i=0;i<250;i++)
    {
        for(j=0;j<12;j++)
        {
            ar[i][j]=(rand()%1000)/1000.0;
            in[i] += ar[i][j];
        }
        in[i]-=6;
    }
	for(i=0;i<250;i++)
	{
	    printf("%f\t",in[i]);
		for(j=0;j<=i;j++)
		{
			maxv = maxv>in[j]?maxv:in[j];
			minv = minv<in[j]?minv:in[j];
		}
		sum += in[i];
		sums += pow(in[i],2);
	}
	float m,md,sd;
	m = sum / 250.0;
	md = (in[125] + in[126]) / 2;
	sd =  (sums/250.0)+pow(m,2);
	sd = sqrt(sd);
	printf("\nMax: %f\nMin: %f\nMean: %f\nMedian: %f\nStandard Deviation: %f",maxv,minv,m,md,sd);
	bins[0]=-3.5;
	for(i=1;i<9;i++)
    {
        bins[i]=bins[i-1]+1;
    }
    for(i=0;i<9;i++)
    {
        if(i==0)
        {
            for(j=0;j<250;j++)
            {
                if(in[j]<bins[i])
                    fr[i]++;
            }
        }
        else
        {
            for(j=0;j<250;j++)
            {
                if(in[j]<bins[i] && in[j]>bins[i-1])
                    fr[i]++;
            }
        }
    }
    printf("\n\nBins\tFrequency\n");
    for(i=0;i<9;i++)
    {
        printf("%.2f\t%d\n",bins[i],fr[i]);
    }
	getch();
	return 0;
}

