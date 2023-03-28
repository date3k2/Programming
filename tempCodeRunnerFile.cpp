#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	char mess[] = "more";
	char* ptr;
	ptr = mess + strlen(mess);
	while (ptr > mess) {
		printf("%s", --ptr);
	}
return 0;
}