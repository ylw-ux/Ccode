# include <stdio.h>
int main(){
	//计算阶乘、阶乘累加和斐波那契数列求项遍历输出
	
	//计算阶乘
//	int n;
//    long long fact = 1;  // long long 防止溢出
//    scanf("%d", &n);
//    for(int i=2;i<=n;i++)
//    	fact *= i;
//	printf("%d",fact);
//	return 0;
	
	
//	//阶乘累加
//	int n;
//    long long fact = 1;
//	long long sum =1;  // long long 防止溢出
//    scanf("%d", &n);
//    for(int i=2;i<=n;i++){
//    	
//    	sum =sum*i;
//    	fact+= sum;
//	}
//    	
//	printf("%lld",fact);
// !!!!!!!!!!!!!!%d 只能打印 int 类型；long long 标准输出格式是 %lld
//	return 0;





//斐波那契数列求项遍历输出

	int n;
    scanf("%d", &n);
    long long a = 1, b = 1,newm;
    if(n<=0){
    	printf("Worse");
    	return 0;
	}
    if(n==1){
    	printf("f1= %lld\n",a);
    	return 0;
	}
	if(n==2){
    	printf("f1= %lld\n",a);
		printf("f2= %lld\n",b);
    	return 0;
	}
	printf("f1= %lld\n",a);
	printf("f2= %lld\n",b);
	for(int i =3;i<=n;i++){
		newm = a+b;
		printf("f%d= %lld\n",i,newm);
		a=b;
		b=newm;
		
	}
    	return 0;
}
