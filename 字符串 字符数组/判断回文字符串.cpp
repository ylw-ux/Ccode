//字符串判定：判断回文字符串
//典型题目
//输入一个字符串，判断它是不是回文字符串（正读和反读完全一致），是则输出 YES，否则输出 NO。

# include<stdio.h>
# include<string.h>
void check(char *p,int len);
int main(){
	char str[100];
	scanf("%s",str);
	int len =strlen(str);
	printf("%d",len);
	check(str,len);
	return 0;
}

void check(char *p,int len){
	for(int i=0;i<len/2;i++){
		if(p[i] != p[len-1-i]){
			printf("不是回文字符串");
			return ;
		}
	}
	printf("是回文字符串");
}
