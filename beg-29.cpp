#include <stdio.h>
int main(void) {
	int min,hour,sec,inter;
	scanf("%d",&min);
	hour=min/60;
	printf("the hour of %d min is %d\n",min,hour);
	sec=60*min;
	printf("tne seconds of %d min is %d",min,sec);
	return 0;
}
