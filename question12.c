#include <stdio.h>

int main(void){
	char s[1000];
	scanf("%1000s", s);
	int len = 0;
	while(s[len] != '\0') len++;
	int i=0, j=len-1, ok=1;
	while(i<j){
		if(s[i]!=s[j]){
			ok=0;
			break;
		}
		i++;
		j--;
	}
	puts(ok? "Palindrome" : "Not Palindrome");
	return 0;
}
