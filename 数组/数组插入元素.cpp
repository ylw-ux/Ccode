//指定位置插入元素
//典型题目
//输入 n 个整数，再输入插入位置 pos（下标，从 0 开始）
//和待插入元素 x，将 x 插入到数组的 pos 位置，
//输出插入后的数组。
//保证 pos 合法（0 ≤ pos ≤ n）。
#include<stdio.h>
int main(){
	int n,pos,x;
	scanf("%d",&n);
	int arr[n+1];
	int i;
	for(i=0;i<n;i++){
		printf("输入整数："); 
		scanf("%d",&arr[i]);
	}
	scanf("%d %d",&pos,&x);
	if(pos>n-1||pos<0){
		return 0;
	}
	for(i=n;i>pos;i--){
		arr[i] = arr[i-1];
		printf("%d\n",arr[i]);
	}
	arr[pos]  = x;
	
	for(i=0;i<n+1;i++){
		printf("%d",arr[i]);
	}
	
	return 0;
} 
