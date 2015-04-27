#include <stdio.h>
#define ll long long
int main(){
	ll a = 0, b = 0;
	while(1){
		~scanf("%lld %lld", &a, &b);
		if (a == 0 && b == 0)
			return 0;
		printf("%lld\n", a+b);
	}

	return 0;
}