#include<stdio.h>
#include<math.h>

int main()
{
int n;
printf("please enter the weight of the watermelon");
scanf("%d",&n);

if(n==2||n==1)
{
printf("no");
}

else if(n>=3&&n<=100)
{
if(n%2==0)
{
printf("yes");
}
else{
    printf("no");
    }
}

return 0;
}
