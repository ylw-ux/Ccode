# include<stdio.h>

int check(int arr[10],int size,int key);

int main ( ){
	int size =10;
	int number[10]= {3,4,1,2,1,33,5,677,8,9};
	int key = 2;
	int rul = check(number,size,key);
	if(number[rul] == key)
		printf("%d",rul);
	else
		printf("worse");
	return 0;
}


int check(int arr[10],int size,int key){
	int i ;
	arr[0] = key;
	for(i = size-1;arr[i] != key;i--);
	return i;

} 
