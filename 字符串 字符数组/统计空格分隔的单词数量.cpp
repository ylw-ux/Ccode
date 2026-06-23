//统计空格分隔的单词数量
//典型题目
//输入一行由空格分隔的英文句子，统计其中单词的个数。
//高频坑点：开头有空格、连续多个空格、结尾有空格，都不能重复计数。

# include<stdio.h>
int main(){
	char str[100];
//    scanf("%s", str);
	fgets(str, sizeof(str), stdin);
    int i;i=0;
    int flag;flag=0;
    int cnt=0;
	for(i=0;i<100;i++){
    	if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
    		flag=1;

		}
		if((str[i] == ' ' || str[i] == '\0')&& (flag==1)){
			flag=2;

		}
		if(flag==2){
			cnt++;
			flag=0;
		}
		if(str[i] == '\0'){
			break;
		}
		//判断要依赖'\0'怎么办 
		//再加一个判断 先用了'\0' 在退出 
	}
	//    Add  ff f   ? yf   df?  dfyh..
	printf("%d",cnt);
	

	return 0;
}
