//鞍点查找 
#include<stdio.h>
int main (){
//	int arr [4][4]= 
//	{
//	{1,9,1,1},
//	{1,9,1,1},
//	{1,2,1,1},
//	{1,9,1,1}
//	};
	
	int arr [][4]= 
	{
    {2,2,2,2},
    {2,2,2,2},
    {2,2,2,2},
    {2,2,2,2}
	};
	
	int col[4];
	int row[4];
	//记录每一行的最大值 
	for(int i=0;i<4;i++){
		row[i] = arr[i][0];
		for(int j=0;j<4;j++){
			if(arr[i][j]>row[i]){
				row[i] = arr[i][j];
			}
		}
	}
	//记录每一列的最小值
	for(int i=0;i<4;i++){
		col[i] = arr[0][i];
		for(int j=0;j<4;j++){
			if(arr[j][i]<col[i]){
				col[i] = arr[j][i];
			}
		}
	}
	//如果某个点同时满足，它在当前行等于最大值，并且在当前列等于最小值，那它就是鞍点 
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(arr[i][j]==row[i] && arr[i][j]==col[j]){
				printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
			}
		}
	}
	
	return 0;
}
