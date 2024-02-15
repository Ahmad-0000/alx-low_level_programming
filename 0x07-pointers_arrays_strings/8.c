#include <stdio.h>

void addition(int *a, int s){
	int i, j , r = 0, r1 = 0;
	
		for (j = 0; j < s; j++) {
			for (i = 0; i < s*s; i++) {
				if (i == (s * j + j)) {
					r += a[i];
				}
			}	
		}
		for (j = 0; j < s; j++) {
			for (i = 0; i < s*s; i++) {
				if (i == (s*j + s - j - 1)) {
					r1 += a[i];
				}
			}
		}
	printf("%d, %d\n", r, r1);
}
