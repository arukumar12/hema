#include<stdio.h>
int  main()
{
	int n,i,co=0,m=1,p=2;
	scanf("%d",&n);
	while(n!=1)
	{
		n=n/2;
		co++;
	}
	for(i=0;i<co+1;i++)
	{
		m=m*p;
	}
	printf("%d",m);
  return 0;
}
