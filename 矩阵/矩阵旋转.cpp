// 矩阵旋转（n 阶方阵）
//典型题目：给定一个 n 阶方阵，分别按要求顺时针旋转 90°、逆时针旋转 90°、旋转 180°，输出旋转后的矩阵。
//以下均为「原矩阵 a → 新矩阵 b」的写法。

#include<stdio.h>

int main (){
	int n=3;
	int arr[n][n]={
		{1,1},{2,2},{3,3}
	}; 
//	顺时针旋转 90°
	int arr2 [n][n];
	for(int i=0;i<n;i++){
		for(int j =0;j<n;j++){
			arr2[i][j] = arr[n-1-j][i];
		}
	}
//	逆时针旋转 90°	
	int arr3 [n][n];
	for(int i=0;i<n;i++){
		for(int j =0;j<n;j++){
			arr3[i][j] = arr[j][n-1-i];
		}
	}
//	旋转180°
	int arr4 [n][n];
	for(int i=0;i<n;i++){
		for(int j =0;j<n;j++){
			arr3[i][j] = arr[n-1-j][n-1-i];
		}
	}
//矩阵翻转
//典型题目：给定一个 n 阶方阵，
//分别对矩阵进行翻转、上下翻转操作，
//输出翻转后的矩阵。
//左右
	int arr [n][n];
	for(int i=0;i<n;i++){
		for(int j =0;j<n/2;j++){
			arr3[i][j] 
		}
	}


	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("arr[%d][%d]=%d\n",j,i,arr[j][i]);
		}
	}
	return 0;
}	 
