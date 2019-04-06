#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char target[1024] = "clang++ -target i686-pc-windows-gnu ";

int main(int argc, char* argv[]) {
	for(int i=2; i <= argc; i++) {
		strcat(target, argv[i-1]);
		strcat(target, " ");
	}
	printf("%s\n", target);
	system(target);
	return 0;
}