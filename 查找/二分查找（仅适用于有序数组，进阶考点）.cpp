# include<stdio.h>

typedef struct arr{
	int arrey [10];
	int length ;
} A;
typedef A* Arr;
int check(Arr p,int key);

int main(){
	A array = { {1,2,3,4,5,6,7,8,9,10}, 10 };
	int rul = check(&array,8);
	printf("%d",rul);
	return 0;
}
  
int check(Arr p,int key){
	int l,r,Notfound;
	Notfound = -1;
	l=0;
	r=p->length;
	int n;
	int nn;
	while(l<=r){
		//C语言里的数据初始化之后，不会随着后面的改变而改变
		//C 语言里变量没有 “联动” 效果。你改了下标n，必须手动重新写一句 nn = p->arrey[n];，nn的值才会更新。 
		n= (l+r)/2;
		nn = p->arrey[n];
		if(key == nn ){
			return n;
		}
		if(key<nn){
			r= n-1;
		}
		if(key >nn){
			l= n+1;
		}
	}
	return Notfound;
}
