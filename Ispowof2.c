#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	scanf("%d",&n);
            for(i=1;i<=n;i++)	 
            if(pow(2,i)==n) 
            printf("yes");
	return 0;
}
