# include<stdio.h>

//2. 矩阵乘法
//典型题目：给定一个 n 行 m 列的矩阵 A，和一个 m 行 p 列的矩阵 B，计算两个矩阵的乘积 C

//- 结果：结果矩阵 C 为 n行p列

int main(){
	
	int m = 4;
	int n =2; 
	int p=4;
	int arr1 [n][m]= 
	{
	    {1,2,3,4},
	    {5,6,7,8},
	};
	int arr2 [m][p]= 
	{
	    {2,2,2,2},
	    {2,2,2,2},
	    {2,2,2,2},
	    {2,2,2,2}
	};
	int arr3 [n][p] ={
		{0,0,0,0},
	    {0,0,0,0},
	};
	int i=0;
	int j=0;
	int k=0;
	for(i=0;i<p;i++){
		for(j=0;j<m;j++){
			for(k=0;k<n;k++){
				arr3[k][i] += ((arr2[j][i])*(arr1[k][j]));
			}
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			printf("arr3[%d][%d] = %d\n",i,j,arr3[i][j]);
		}
	}

	return 0;
}
