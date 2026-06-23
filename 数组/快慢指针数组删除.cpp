//删除指定x元素
//快慢指针解法
//输入 n 个整数和一个目标值 x，删除数组中所有等于 x 的元素，输出删除后的数组。

#include<stdio.h>
int main(){
	int n,x;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		printf("输入整数："); 
		scanf("%d",&arr[i]);
	}
	
	scanf("%d",&x);
	
	int k=0;//创建慢指针k代表我要存入的位置 
	for(i=0;i<n;i++){ //快指针i 遍历整个数组 查找筛选目标值 
		if(arr[i] != x){
			arr[k++]=arr[i];
		}
	}

	
	for(i=0;i<k;i++){
		printf("arr[%d]:%d\n",i,arr[i]);
	}
	
	return 0;
} 
