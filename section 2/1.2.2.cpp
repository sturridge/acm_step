#include <stdio.h>
typedef long long ll;

int main(){
	ll n = 0, m = 0, c = 0;
	
	while(~scanf("%lld %lld", &n, &m)){
		if (n == -1 && m == -1)
			return 0;

		while(m != 0){
			c = n % m;
			if (c == 0)
				break;
			n = m, m = c;
			
		}
		
		if (m == 1)
			printf("YES\n");
		else
			printf("POOR Haha\n");
		n = 0, m = 0;
	}
	return 0;
}
