#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,i,j,r=0,f=0,l=0;
    printf("Enter the no. of samples:");
    scanf("%d",&n);
    printf("Enter the samples:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            printf("Sample Number:%d||Sample Value:%d||Falling Edge\n",i+1,a[i]);
            f++;
        }
        else if(a[i]<a[i+1])
        {
            printf("Sample Number:%d||Sample Value:%d||Raising Edge\n",i+1,a[i]);
            r++;
        }
        else if(a[i]==a[i+1])
        {
            printf("Sample Number:%d||Sample Value:%d||Level\n",i+1,a[i]);
            l++;
        }
    }
    printf("No. of Raising edge=%d\n",r);
    printf("No. of Falling edge=%d\n",f);
    printf("No. of Level=%d",l);
    return 0;
}
