//循环读入字符
#include<stdio.h>
int main(){
	int a;
	printf("输入a");
	scanf("%d",&a);
	char arr[3];
	printf("输入arr值");
	for(int i=0;i<3;i++){
		scanf(" %c",&arr[i]);
	}
	printf("a=%d\n",a);
	for(int i=0;i<3;i++){
		printf("arr[%d]=%c\n",i,arr[i]);
	}
	return 0;
} 
