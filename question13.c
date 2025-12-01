#include <stdio.h>
#include <ctype.h>

int main(void){
	char s[101];
	if(!fgets(s, sizeof s, stdin)) return 1;
	
	int vow=0, con=0, dig=0;
	for(int i=0;s[i];i++){
		if(isdigit((unsigned char)s[i])) dig++;
		else if(isalpha((unsigned)s[i])){
			char c=tolower((unsigned char)s[i]);
			if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vow++;
			else con++;
		}
	}
	printf("Vowels = %d\nConsonants = %d\nDigits = %d\n", vow, con, dig);
	return 0;	
}
