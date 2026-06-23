//输入一个字符，判断该字符属于「大写字母、小写字母、数字字符、其他字符」中的哪一类。
#include<stdio.h>

int main (){
	char c ;
	scanf("%c",&c);
	if(c>='A' && c<='Z'){
		printf("大写字母");
	}else if(c>='a' && c<='z'){
		printf("小写字母");
	}else if(c>='0' && c<= '9'){
		printf("数字"); 
	}else{
		printf("其他字符"); 
	}
	
	
	return 0;
}
