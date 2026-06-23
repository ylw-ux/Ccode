//字符串判定：判断回文字符串
//典型题目
//输入一个字符串，判断它是不是回文字符串（正读和反读完全一致），是则输出 YES，否则输出 NO。

#include<stdio.h>
void check(char *p);
int main(){
	//调用函数版
//	char str[100];
//	scanf("%s",str);
//	check(str);
	//普通的写法
	char str2[100];
	scanf("%s",str2);
	int cnt=0;	
	while(str2[cnt]!='\0')cnt++;
	for(int j=0;j<cnt/2;j++){
		if(str2[j]!=str2[cnt-j-1]){
			printf("No");
			return 0;
		}
	}
	printf("Yes");	
	return 0;
}

void check(char *p){
	int i=0;
	while(p[i]!='\0')i++;
	int j=0;
	for(j=0;j<i/2;j++){
		if(p[j]!=p[i-j-1]){
			printf("No");
			return;
		}
	}
	printf("Yes");
}
