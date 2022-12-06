#include<stdio.h>
int main() {
	
	int m, n, t, r;
	printf("please input the two number:\n");
	scanf("%d,%d",&m,&n);

	if (n == 0) {
		t = m;
		m = n;
		n = t;
	}



	while (m % n != 0) {
		r = m % n;
		m = n;
		n = r;
	} 

	printf("the greatest common divisor is: %d\n",n);

	
	return 0;
}

