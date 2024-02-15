#include <stdio.h>
#include "main.h"
void _changing(char **s, char *t);
int main(){
	char *s = "ahmad";
	char *f = "husain";
	
	printf("%s , %s\n", s, f);
	_changing(&f, s);
	printf("%s, %s\n", s, f);
}
