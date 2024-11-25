#include <stdio.h>
int main(){
	int n;
	printf("nhap 1 so nguyen duong ");
	scanf("%d",&n);
	int sum=0;
	if(n>0){
		for(int i = 1; i <= n; i++){
			sum+=i;
		}
		printf("tong cua so nguyen tu 1 den %d la %d", n, sum);
	}
}
