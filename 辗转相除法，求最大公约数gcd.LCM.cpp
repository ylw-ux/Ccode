//辗转相除法求最大公约数gcd
//LCM 最小公倍数 
#include<stdio.h>
int main(){
	int a = 180;
	int b = 40;
	int A=a,B =b;//保留用于计算LCM 
	int rem ;
	while(b!=0){
		rem = a%b;
		a=b;
		b=rem;
	}
	int gcd= a;
	printf("gcd = %d\n",gcd);
	int LCM = A/gcd*B;//先除防止大小越界 
	printf("LCM = %d",LCM);
} 
