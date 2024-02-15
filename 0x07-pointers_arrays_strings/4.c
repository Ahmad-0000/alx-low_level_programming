#include "main.h"

char *_strpbrk(char *s, char *a)
{
	int i, j;
	char *p = s;

	for (i = 0; s[i] != 0; i++) {
		for (j = 0; a[j] != 0; j++) {
			if (s[i] == a[j]) {
				s = &s[i];
				break;
			}
		}
		if (s != p){
			break;
		}
		else if (s[0] == a[0])
			break;
	}
	return s;
}
