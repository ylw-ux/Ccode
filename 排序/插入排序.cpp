# include<stdio.h>

           
int main(){
	int size =10;
	int number[10]= {3,4,1,2,1,33,5,677,8,9};
	for(int i = 1;i<size;i++){
		int key = number[i];
		int j =i-1;
		while(j>=0&& number[j]>key){
			number[j+1]=number[j]; 
			j--;
		}
		number[j+1] = key;
	}
	for(int k = 0;k<size;k++){
		printf("%d\n",number[k]);
	}
	return 0;
}
