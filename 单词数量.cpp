#include <stdio.h>
int main() {
    char str[200];
    gets(str);
//	scanf("%s",str); 
    printf("%s",str); 
    
    int wordCnt = 0;
    int inWord = 0; // 0=不在单词中，1=在单词中
    int i = 0;
    

    while(str[i++] != '\0'){
    	if(inWord == 0  && str[i] != ' '){
    		inWord = 1;
    		wordCnt++;    			
		}else if(str[i] == ' '){
			inWord =0;
		} 	
	}
	
//    while(str[i] != '\0'){
//    	if(inWord == 0  ){
//    		if(str[i] != ' '){
//    			inWord = 1;
//    			wordCnt++;    			
//			}
//		}else if(str[i] == ' '){
//			inWord =0;
//			
//		}
//		i++;   	
//	}

//    while(str[i] != '\0') {
//        if(str[i] != ' ') {
//            if(inWord == 0) {
//                wordCnt++;
//                inWord = 1;
//            }
//        } else {
//            inWord = 0;
//        }
//        i++;
//    }
    
    printf("单词数量：%d\n", wordCnt);
    return 0;
}
