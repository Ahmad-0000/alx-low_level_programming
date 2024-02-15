#include "main.h"

char *_strstr(char *h, char *n)
{
	int i, j, s;

	for (i = 0; h[i] != 0; i++) {
		if (h[i] == n[0]) {
			h = &h[i];
			s = 1;
			for (j = 0; n[j] != 0; j++) {
				if (n[j] != h[j]) {
					s = 0;
				}
			}
			if (s == 1) {
				break;
			}
		}
	}
	if (s == 1)
		return h;
	else
		return 0;
}
