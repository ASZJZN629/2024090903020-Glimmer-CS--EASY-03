#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sum,n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int* p=(int*)malloc(sizeof(int));
		scanf("%d",p);
		sum+=*p;
		free(p);
	}
	printf("%d",sum);
	return 0;
} 
