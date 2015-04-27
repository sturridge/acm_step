#include <stdio.h>
#define ll long long
int main(){
	ll n = 0, s = 0, a = 0;
	while(~scanf("%lld", &n)){
		if (n == 0)
			return 0;
		for (int i = 0; i < n; ++i)
		{
			~scanf("%lld", &a);
			s += a;
		}
		printf("%lld\n", s);
		s = 0;
	}

	return 0;
}