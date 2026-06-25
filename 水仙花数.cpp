// 水仙花数 [100,999]
#include<stdio.h>
int main (){
	for(int i=100;i<1000;i++){
		int ge,shi,bai;
		ge=i%10;
		shi=(i/10)%10;
		bai=i/100;
		if(ge*ge*ge+shi*shi*shi+bai*bai*bai==i){
			printf("%d为水仙花数\n",i);
		}
	} 
	return 0;
}
