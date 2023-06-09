#include<stdio.h>
main()
{
	int a[100];	
	int *p[100];
	
    int i,n,t;
    printf("enter array size :-");
    scanf("%d",&n);
	
	for(i=0;i<=4;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}	
	
	printf("square of array :-");
	for(i=0;i<=4;i++)
	{
		p[i]=&a[i];
		t=*p[i];
		printf("%d\n",t*t);
	}
}
