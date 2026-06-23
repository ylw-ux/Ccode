//判断素数
//什么是素数（质数）
//素数也叫质数，是大于 1 的自然数中，除了 1 和它自身之外，不存在其他正因数的数。
//正例：2、3、5、7、11、13、17 都是素数
//反例：4（能被 2 整除）、6（能被 2、3 整除）是合数
//特殊边界：1 既不是素数也不是合数；2 是唯一的偶素数，所有大于 2 的偶数都不是素数 

#include<stdio.h>
int main ( ){
	int su;
	scanf("%d",&su);
	if(su<=1){
		printf("NO");
		return 0;//每一次最终判断后问问自己，程序结束了没，需不需要结束 
	}
	if(su==2){
		printf("Yes");
		return 0;
	}
	if(su%2==0){
		printf("NO");
		return 0;
	}
	for(int i=3;i*i<=su;i+=2){
		if(su%i==0){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
