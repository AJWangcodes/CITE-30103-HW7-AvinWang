#include <stdio.h>

int main(void){
	char s[100];
	if(!fgets(s, sizeof s, stdin)) return 1;
	int words = 0, in_word = 0;
	for(int i=0;s[i];i++){
		if(s[i]==' '||s[i]=='\t'||s[i]=='\n') in_word=0;
		else if (!in_word){
			in_word=1;
			words++;
		}
	}
	printf("Word count = %d\n", words);
	return 0;
}
