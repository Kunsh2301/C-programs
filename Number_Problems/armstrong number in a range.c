//armstrong number coming in a range
#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2,rem;
    printf("enter starting point:");
    scanf("%d",&n1);
    printf("enter ending point:");
    scanf("%d",&n2);
    printf("the armstrong number between the range %d-%d are:\n",n1,n2);
    for(int i=n1; i<=n2; i++)
    {
        int org=i,count=0,sum=0,temp=i;
        while(temp>0)
        {
            temp/=10;
            count+=1;
        }
        temp=org;
        while(temp>0)
        {
            rem=temp%10;
            sum+=pow(rem,count);
            temp/=10;
        }
        if(sum==org)
        {
        printf("%d\n",org);
        }
    }
    return 0;
}