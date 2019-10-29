#include <stdio.h>

int main(int argc, char** argv) {
	
	char s[7];  // Leonid\0
	scanf("%s", &s);
	
	for (int i = 0; i < 10; ++i) {
		printf("%s\n", s);
	}
	
	return 0;
}