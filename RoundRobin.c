#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,i,count=0,qt,temp,sq=0;
    float awt=0,atat=0;
    printf("Enter the number of process: ");
    scanf("%d",&n);
    int rem[n],wt[n],tat[n],bt[n] ;
    printf("Enter the burst time of each process");
    for(i=0 ; i<n;i++)
    {
        scanf("%d",&bt[i]);
        rem[i]=bt[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d",bt[i]);
    }
    printf("Enter the quantum time : ");
    scanf("%d",&qt);

    while(1)
    {
        for(i=0,count=0 ; i<n;i++)
        {
            temp=qt;
            if(rem[i]==0){count++; continue;}
            if(rem[i]>qt)
            {
                rem[i]=rem[i]-qt;
            }
            else{
                if(rem[i]>=0)
                {
                    temp=rem[i];
                    rem[i]=0;
                }
                sq=sq+temp; 
                tat[i]=sq;

            }
        }
        if(n==count)
        {
            break;
        }
    }
    printf("\nprocess%d\tburst time \tturnaroundtime\twaiting time\n");
    for(i=0;i<n;i++)
    {
        wt[i]=tat[i]-bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("\n%d\t%d\t\t%d\t\t%d", i+1, bt[i], tat[i], wt[i]);
    }

return 0 ;
}