#include <stdio.h>
#define ll long long
int main(){
	ll n = 0, s = 0, a = 0, t = 0;
	while(~scanf("%lld", &t)){
		for (int i = 0; i < t; ++i)
		{
			~scanf("%lld", &n);
			for (int i = 0; i < n; ++i)
			{
				~scanf("%lld", &a);
				s += a;
			}
			printf("%lld\n", s);
			s = 0;
		}
		
	}

	return 0;
}