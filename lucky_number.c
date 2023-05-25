#include <stdio.h>

int main(void)
{
int t;
scanf("%d",&t);
while(t--)
{
    int x,sum=0,flag=0;
    scanf("%d",&x);
    while(x){
        sum=x%10;
        if(sum==7)
            flag++;
        x = x/10;
        
    }
    if(flag)
    printf("yes\n");
    else
    printf("no\n");
    

}

	return 0;
}

