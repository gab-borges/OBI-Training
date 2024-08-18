#include <bits/stdc++.h>
using namespace std;

int main() {
	float c, d, t;
	scanf("%f %f %f", &c, &d, &t);

	if(t >= d/c) {
		printf("0.0\n");
	}

	else {
		printf("%.1f\n", d/c - t);	
	}

	return 0;
}
