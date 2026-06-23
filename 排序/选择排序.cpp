# include<stdio.h>


int main(){
	int size =10;
	int number[10]= {0,199,0,3,4,1,2,1,199,-1};
//	Ñ¡ÔñÅÅĞò 
//	for(int i = 0;i<size;i++){
//		for(int j = i;j<size;j++){
//			int temp;
//			if(number[j]<number[i]){
//				temp = number[j];
//				number[j] = number[i];
//				number[i] = temp;
//			}
//		}
//	}


//Ã°ÅİÅÅĞò
//	for(int i=0;i<size-1;i++ ){
//		for(int j = 0;j<size-1-i;j++){
//			if(number[j]>number[j+1]){
//				int temp;
//				temp = number[j+1];
//				number[j+1] = number[j];
//				number[j] = temp;
//			}
//		}
//	}

//Ñ¡ÔñÅÅĞò
//	for(int i=0;i<size-1;i++){
//		for(int j=i+1;j<size;j++){
//			if(number[j] < number[i]){
//				int temp;
//				temp = number[j];
//				number[j] = number[i];
//				number[i] = temp;
//			}
//		}
//	} 


//²åÈëÅÅĞò
//	for(int i = 1;i<size;i++){
//		int j =i-1;
//		int key = number[i];
//		while( j>=0 && number[j]>key){
//			number[j+1] = number[j];
//			j--;
//		}
//	 	number[j+1]  =key;
//	} 
 



	for(int k = 0;k<size;k++){
		printf("%d\n",number[k]);
	}
	return 0;
}


