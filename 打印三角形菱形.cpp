# include<stdio.h>
# include<stdlib.h>


// 倒的直角三角形
// int main(){
// 	int n;
// 	scanf("%d",&n);
// 	for(int i=n;i>0;i--){
// 		for(int j=i;j>0;j--){
// 			printf("*");
//		 }
//		 printf("\n");
//	 }
// 	return 0;
// } 
 
 
// 正的直角三角形
//int main() {
//    int n;
//    scanf("%d", &n);
//    // 外层循环：控制总行数
//    for (int i = 1; i <= n; i++) {
//        // 内层循环：控制每行打印的星号数量，第i行打印i个
//        for (int j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}


//打印正等腰三角形
//int main(){
//	int n;
// 	scanf("%d",&n);
// 	for(int i=0;i<n;i++){
// 		for(int j=n-1-i;j>0;j--){
// 			printf(" ");
//		}
//		for(int k =0;k<(2*i+1);k++){
//		 	printf("*");
//		}
//		printf("\n");
//	 }
//	
//	return 0;
//} 

//打印空心菱形
//int main(){
//	int n;
//	int i,j,k;
//	scanf("%d",&n);
//	for( i=0;i<n;i++){
//		if(i == 0){
//			for( j= 0;j<n-1;j++){
//				printf(" ");
//			}
//			printf("*");
//			printf("\n");			
//		}else{
//			for( j= 0;j<n-1-i;j++){
//				printf(" ");
//			}
//			printf("*");
//			for( k=0;k<2*i-1;k++){
//				printf(" ");
//			}
//			printf("*");
//			printf("\n");
//		}
//	}
//	for(i =0;i<n-1;i++){
//		if(i==n-2){
//			for(j= 0;j<n-1;j++){
//				printf(" ");
//			}
//			printf("*");
//			
//		}else{
//			for(j=0;j<i+1;j++){
//				printf(" ");
//			}
//			printf("*");
//			for(k=0;k<2*n-5-2*i;k++){
//				printf(" ");
//			}
//			printf("*");
//			printf("\n");
//		}
//		
//	}
//
//	return 0;
//}


//打印乘法表 
//int main(){
//	int n;
//	scanf("%d",&n);
//	int i,j,k,q;
//	for(i =1;i<=n;i++){
//		for(j=1;j<=i;j++){
//			printf("%d * %d = %d  ",j,i,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

 

//打印矩阵，可待优化
//int main(){
//	int n;
//	scanf("%d",&n);
//	int m= n-2;
//	int i=0;
//	for(i=0;i<n;i++){
//		printf("1");
//	}
//	printf("\n");
//	for(int  k=1;k<=m;k++){
//		printf("1");
//		for(int j= 1;j<=m;j++){
//			if(j==k){
//				printf("2");
//			}else{
//				printf("0");
//			}
//		}
//		printf("1");
//		printf("\n");
//	}
//	for(i=0;i<n;i++){
//		printf("1");
//	}
//	return 0;
//}

//百钱百鸡（经典不定方程）
//int main(){
//	int i,j,k;
//	int cnt;
//	int sum;
//	for( j=0;j<=20;j++){
//		
//		for( i=0;i<=33;i++){
//			
//			int k = 100-j-i;//注意点 不用3个循环 直接用题目的约束条件计算出k的值 
//				
//				sum = j*5 + i*3 + k/3;
//				if((i+j+k) == 100 &&sum == 100 && k%3 ==0){
//					printf("%d %d %d\n",j,i,k);
//				}
//			
//		}
//	} 
//}


//1000 以内的完数（中等）	
//	for(int i=1;i<=1000;i++){
//		int sum =0;//注意这个sum是为了给每一个数服务的，所以每一次到新的数都要重新初始化，
//		//总结：分析变量的服务对象和范围 
//		for(int j=1;j<i;j++){
//			if(i%j==0){
//				sum+=j; 	
//			}	
//		}
//		if(sum == i){
//			printf("wangshuwei:%d",i);
//			for(int k =1;k<i;k++){
//				if(i%k == 0){
//					printf("  His yizhi is:%d\n",k);
//				}
//			}
//			
//		}
//	}

//回文数判断（简单 - 中等）
//题目描述
//回文数是指正读和反读完全相同的整数，例如 121、123321、5 都是回文数，123、1234 不是回文数。
//输入一个正整数，判断它是否为回文数。
//int main(){

//	int n;scanf("%d",&n);
//	int num = n;
//	
//	int cnt=0;
//	do{
//		cnt++;
//		n= n/10;
//	}while(n!=0);
//	
//	if(cnt%2 ==0){
//		printf("No\n");
//		return 0;
//	}
//	printf("%d %d\n",n,num);
//	int a =0;
//	int b=0;
//	for(int i =0;i<(cnt-1)/2;i++){
//		int  temp  =  num%10;
//		a+=temp;
//		num = num/10;
//	} 
//	printf("%d\n",a);
//	printf("%d\n",b);
//	num = num/10;
//	for(int i =0;i<(cnt-1)/2;i++){
//		int  temp  =  num%10;
//		b+=temp;
//		num = num/10;
//	} 
//	printf("%d\n",a);
//	printf("%d\n",b);
//	if(a==b){
//		printf("Yes\n");
//	}else{
//		printf("NO\n");
//	}
//	return 0;
//}
//?    出错为 回文数的本质是「数字顺序对称」，不是「左右数字的和相等」


//下面来写一下正确的回文数操作 你采用的是数组正反指针对撞法
//先把我们的这个数字来来写进一个数组里
//int main(){
//	int n,size=0;
//	scanf("%d",&n);
//	if(n<0){
//		
//	
//		printf("WOrse num");
//		return 0;
//	}
//	int num = n;
//	int m =n;
//	do{size++;
//		m = m/10;
//	}while(m!=0);
//	
//	printf(" cnt = %d",size);
//	int * arr = (int*)malloc(sizeof(int)*size);
//	for(int i=0;i<size;i++){
//		arr[i] = num%10;
//		num = num/10; 
//	}
////	int j=0;
////	while(){
////		printf("%d\n",arr[j]);
////	}
//	for(int i=0;i<size/2;i++){
//		if(arr[i] != arr[size-1-i]){
//			printf("No");
//			free(arr);
//			return 0;
//		}
//	}
//	printf("Yes");
//	free(arr);
//	return 0; 
//}





