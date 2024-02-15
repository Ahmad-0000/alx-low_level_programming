#include "main.h"

char *_strchr(char *s, char c){
	int i, j;

	for (i = 0; s[i] != 0; i++){
		if (s[i] == c){
			s = &s[i];
			break;
		}
	}
	return (s);
}
