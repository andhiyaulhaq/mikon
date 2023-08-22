#include <reg52.h>

void main() {
	unsigned char a;
	unsigned int c;
	
	a = 0;
	while (1) {
		a = a == 0 ? 1 : a << 1; 
		P2 = ~a;
		for (c = 0; c < 30000; c++);
	}
}
