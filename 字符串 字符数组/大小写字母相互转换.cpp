//大小写字母相互转换
//典型题目
//输入一个字符串，将其中所有大写字母转为小写，小写字母转为大写，其他字符保持不变，输出转换后的字符串。
#include<stdio.h>
int main(){
	char str[100];
	scanf("%s",str);
	int i=0;
	while(str[i]!='\0'){
		if(str[i]>='A'&&str[i]<='Z'){
			str[i]=str[i]+32;
		}else if(str[i]>='a'&&str[i]<='z'){
			str[i]=str[i]-32;
		}
		i++;
	}
	printf("%s",str);
	
	return 0;
}
