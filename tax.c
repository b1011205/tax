#include <stdio.h>

int tax(int a){

	if(a <= 1950000)
		return a * 0.05;
	if(1950000 < a && a <= 3300000)
		return a * 0.10 - 97500;
	if(3300000 < a && a <=6950000)
		return a * 0.20 - 427500;
	if(6950000 < a && a <= 9000000)
		return a * 0.23 - 636000;
	if(9000000 < a && a <= 18000000)
		return a * 0.33 - 1536000;
	if(18000000 < a)
		return a * 0.40 - 2796000;

	return 0;
}

int main(){

	int from, until, i, q[6];
	scanf("%d%d", &from, &until);

	//四等分点の計算
	for(i = 0; i < 5; i++){
		q[i] = from + (until - from) * i/4;
		printf("%d: %d Yen.\n", q[i], tax(q[i]));
	}

	return 0;

}


