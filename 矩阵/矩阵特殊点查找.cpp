# include<stdio.h>
int main(){
//	int arr [][4]= 
//	{
//	{1,9,1,1},
//	{1,9,1,1},
//	{1,2,1,1},
//	{1,9,1,1}
//	};
//
//int arr [][4]= 
//{
//    {1,2,3,4},
//    {5,6,7,8},
//    {9,10,11,12},
//    {13,14,15,16}
//};
//int arr [][4]= 
//{
//    {2,2,2,2},
//    {2,2,2,2},
//    {2,2,2,2},
//    {2,2,2,2}
//};
//int arr[][4] = 
//{
//    {1, 4, 3, 2},
//    {2, 1, 4, 3},
//    {3, 2, 1, 4},
//    {4, 3, 2, 1}
//};

//int arr[][4] = 
//{
//    {-1, -3, -1, -5},
//    {-2, -4, -6, -8},
//    {-1, -2, -3, -4},
//    {-5, -1, -5, -1}
//};

int arr[][4] = 
{
    {-5, -3, -5, -2},  // 行最大值：-2 (j=3)
    {-6, -4, -6, -1},  // 行最大值：-1 (j=3)
    {-7, -5, -7, -3},  // 行最大值：-3 (j=3)
    {-8, -6, -8, -4}   // 行最大值：-4 (j=3)
};

//鞍点 saddle point max in the row ,min in the col
	int rowlen =4;int collen = 4;
	int i,j,k;
	
	int cnt = 0;
	for(i=0;i<rowlen;i++){
		int r=i,c=0;//bug修复  r初始化要等于I，而不是0
		int Max=arr[i][0];
		for(j=0;j<collen;j++){
			if(arr[i][j]>Max){
				r=i;
				c=j;
				Max = arr[r][c];
			}
		}
		printf("%d %d\n",r,c);
		for(j=0;j<collen;j++){
			int flag=1;//bug修复  Flag是用来判断当前的这一列的这个元素，它跟它纵向的所有进行比较，
			//如果出现不符的情况，就flag=零，错了。
			//但是如果把flag初始化放在这一个大循环外面，当这个循环进行到下一次，还等于的判断的时候，
			//由于上一次已经把flag等于零了，下一次flag还是零，导致错判，所以要放在循环内部，每次重新初始化 
			if( Max == arr[i][j]){
				for(k=0;k<rowlen;k++){
					if(arr[k][j]<Max){
						flag=0;
						break;
					}
				}
				if(flag==1){
					printf("arr[%d][%d]\n",i,j);
					cnt++;
				}
			}
		}	
	}
	if(cnt==0){
		printf("NO NUMBER");
	}else{
		printf("ALL index number:%d",cnt);
	}
	
	return 0;
} 
