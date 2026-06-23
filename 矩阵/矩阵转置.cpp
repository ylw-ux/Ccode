//矩阵转置
#include<stdio.h>


//给定一个 row 行 col 列的矩阵，输出它的转置矩阵（行与列互换）。
//- 定义：行变列，列变行 → b[j][i] = a[i][j]
int main (){
	int row =5;
	int col = 2;
	int arr[row][col]={
		{1,1},{2,2},{3,3},{4,4},{5,5}
	}; 
	
	int arr2 [col][row];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			arr2[j][i] = arr[i][j];
		}
	}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("arr[%d][%d]=%d\n",j,i,arr2[j][i]);
		}
	}
	return 0;
}	          

