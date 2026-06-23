 #include<stdio.h>

int main (){
//矩阵翻转
//典型题目：给定一个 n 阶方阵，
//分别对矩阵进行、操作，
//输出翻转后的矩阵。
//左右翻转
	int n=3;
	int arr[n][n]={
		{19,1,1},
		{29,2,2},
		{39,3,3}
	}; 
	for(int i=0;i<n;i++){
		for(int j =0;j<n/2;j++){
			int temp = arr[i][n-1-j];
			arr[i][n-1-j] = arr[i][j]; 
			arr[i][j]  =  temp;
		}
	}
	
//上下翻转
	int arr2[n][n]={
		{19,19,19},
		{29,2,2},
		{3,3,3}
	};
	for(int i=0;i<n/2;i++){
		for(int j =0;j<n;j++){
			int temp = arr2[n-1-i][j];
			arr2[n-1-i][j] = arr2[i][j]; 
			arr2[i][j]  =  temp;
		}
	}	


	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("arr2[%d][%d]=%d ",i,j,arr2[i][j]);
		}
		printf("\n"); 
	}
	return 0;
}	 
