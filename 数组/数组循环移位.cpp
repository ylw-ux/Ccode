#include<stdio.h>
int main(){
	//n：输入几位数 k：移动几位 
	int n,k;
	scanf("%d %d",&n,&k);
	int arr[10];
	k=k%n;
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	//左移
//	for(i =0;i<k;i++){
//		int temp = arr[0];
//		for(int j=0;j<n-1;j++){
//			arr[j] = arr[j+1];
//		}
//		arr[n-1] = temp;
//	} 
//	
//	for(i=0;i<n;i++){
//		printf("%d",arr[i]);
//	}
	
	//右移
	for(i =0;i<k;i++){
		int temp = arr[n-1];
		for(int j=n-1;j>0;j--){
			arr[j] = arr[j-1];
		}
		arr[0] = temp;
	} 
	
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	
	return 0;
} 
