#include <iostream>

void move(int*, int*, int);

int main() {
	char buf[256];
	int x, y, d;
    
	fscanf(stdin, "%d", &d);
    
	while (fscanf(stdin, "%s", buf) != EOF) {
		x = 300;
		y = 420;
		d = 0;
        
		printf("%d %d moveto\n", x, y);
		move(&x, &y, d);
        
		for (int i = 0; buf[i] != '\0'; ++i) {
			d = (d + ((buf[i] == 'V') ? 1 : 3)) % 4;
			move(&x, &y, d);
		}
        
		puts("stroke");
		puts("showpage");
	}
    
	return 0;
}

void move(int* x, int* y, int d) {
	((d & 1) ? *y : *x) += (d & 2) ? -10 : 10;
    
	printf("%d %d lineto\n", *x, *y);
	return;
}