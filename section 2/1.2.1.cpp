#include <stdio.h>

int main(){
	int n = 0, u = 0, d = 0, t = 0;
	while(1){
		~scanf("%d %d %d", &n, &u, &d);
		if (n == 0 && u == 0 && d == 0)
			return 0;
		while(n > 0){
			n -= u;
			t++;
			if (n <= 0)
				printf("%d\n", t);
			t++; // rest
			n += d;
			t++;
		}
		t = 0;
	}
}