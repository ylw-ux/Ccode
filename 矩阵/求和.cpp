# include<stdio.h>

int main (){
	int arr [3][4]= 
	{
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12}
	};
	int col = 4;//lie
	int row  =3;//hang
	int i,j,k;

	//single row traversal in 2row
	for(i=0;i<col;i++){
		printf("arr[2][%d]:%d\n",i,arr[2][i]);
	}
		printf("\n");
	//single col traversal in 0col
	for(i=0;i<row;i++){
		printf("arr[%d][0]:%d\n",i,arr[i][0]);
	}
	printf("\n");
	
	//Sum of main diagonal / 
	int arr2 [][4]= 
	{
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12},
	{13,14,15,16}
	};
	int rowlen =4;int collen = 4;
	for(i = 0;i<4;i++){//4 = rowlen = collen =  4
		printf("arr[%d][%d]:%d\n",i,i,arr2[i][i]);
	}printf("\n");
	
	//secondary diagonal elements
	for(i = 3;i>=0;i--){//3 = rowlen-1 = collen-1 =  4-1 
		printf("arr[%d][%d]:%d\n",i,i,arr2[i][i]);
	}	
	printf("\n");
	
	//Upper triangle (including the main diagonal)
	int lowerSum = 0;
	for( i = 0; i < 4; i++) {//4 = rowlen = collen =  4
    	for( j = 0; j <= i; j++) {
            lowerSum += arr2[i][j];
    	}
	}
	printf("%d\n",lowerSum);
	//Downer triangle(including the main diagonal)
	lowerSum = 0;
	for( i = 0; i < 4; i++) {//4 = rowlen = collen =  4
    	for( j = i; j < 4 ; j++) {
            lowerSum += arr2[i][j];
    	}
	}
	printf("%d\n",lowerSum);
	
	//the sum 0f the bondary of matrix
	lowerSum = 0;
	for(i = 0;i<rowlen;i++)
		for(j=0;j<collen;j++){
			if(i==0||j==0||i==rowlen-1||j==collen-1){
				lowerSum+=arr2[i][j];
			}
		}
	printf("%d\n",lowerSum);
	return 0;
} 
