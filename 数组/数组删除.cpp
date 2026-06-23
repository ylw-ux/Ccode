//删除指定元素
//删除指定下标位置的元素
//典型题目
//输入 n 个整数，再输入删除位置 pos（下标，从 0 开始），删除该位置的元素，输出删除后的数组。保证 pos 合法。


//#include<stdio.h>
//int main(){
//	int n,pos;
//	scanf("%d",&n);
//	int arr[n];
//	int i;
//	for(i=0;i<n;i++){
//		printf("输入整数："); 
//		scanf("%d",&arr[i]);
//	}
//	scanf("%d",&pos);
//	if(pos>n-1||pos<0){
//		return 0;
//	}
//	for(i=pos;i<n;i++){
//		arr[i] = arr[i+1];
//		printf("%d\n",arr[i]);
//	}
//	n--;//有效数组元素减1 
//	for(i=0;i<n;i++){
//		printf("arr[%d]:%d\n",i,arr[i]);
//	}
//	
//	return 0;
//} 


//删除所有值为 x 的元素
//典型题目
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
	
	for(i=0;i<n;i++){
		if(arr[i]==x){//遇到x，从后往前覆盖， 
			for(int j=i;j<n-1;j++){//n为数组长度，n-1为下标长度， 
				arr[j] = arr[j+1];
			}
			arr[n]=NULL; 
			n--; //最后一个已经移到前一个，数组长度减去 
			i--; //每一次删除覆盖为新的数组，都要重新遍历检查，指针归位 
		}
	}
	
	for(i=0;i<n;i++){
		printf("arr[%d]:%d\n",i,arr[i]);
	}
	
	return 0;
} 

