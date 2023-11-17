#include <stdio.h>

/**
 * beforeMain - is a function to be executed before main function
 */

void __attribute__((constructor))beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
