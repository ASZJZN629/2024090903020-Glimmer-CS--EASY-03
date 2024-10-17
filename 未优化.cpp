#include<stdio.h>
int main()
{
	int a[100],n,sum;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("%d",sum);
	return 0;
}
