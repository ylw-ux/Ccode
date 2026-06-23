# include<stdio.h>
# include<stdlib.h>
# define Max 10

struct s{
	int arr [Max];
	int length ;
};
typedef struct s* List ;
List sort(List n);
int main(){
//	int size =10;
//	int number[10]= {3,4,1,2,1,33,5,677,8,9};
//	List arr = (List)malloc(sizeof(struct s));
	struct s arry= {{3,4,1,2,1,33,5,677,8,9},10};
	List arr = &arry;
	List sorted = sort(arr); 
	
	for(int k = 0;k<sorted->length;k++){
		printf("%d\n",sorted->arr[k]);
	}
	free(arr);
	
	return 0;
}

List sort(List n){
	List l = n;
	int size = l->length;
	int *number = l->arr;//数组在进行运算表达式的时候退化为指针，原本arr代表这个一整个数组，这也就退化为指向它第一个元素 
	for(int i = 0;i<size-1;i++){	
		for(int j=0;j<size-1-i;j++){
			int temp;
			if(number[j]>number[j+1] ){
				temp = number[j];
				number[j] = number[j+1];
				number[j+1] = temp;
			}	
		}
	}
	return l;
}




