#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n = 0;
	double x = 0;
	double a = 0;
	double h = 0.001;

	printf("Please enter a:");
	scanf("%lf", &a);

	double y = a;
	printf("x\t         y\n");
	printf("%d\t         %f\n", x, y);

	for (n = 0;  ;) {
		double Y = y;
		y = y + h * (-y);
		x = x + h;
		n++;
		printf("%f\t %f\n", x, y);
		if (Y - y < 0.001 * h) {
			break;
		}
	}

	return 0;

}

