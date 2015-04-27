#include <stdio.h>
#define ll long long
int main(){
	ll a = 0, b = 0, n = 0;
	~scanf("%lld", &n);

	for (int i = 0; i < n; ++i)
	{
		~scanf("%lld %lld", &a, &b);
		printf("%lld\n", a+b);
	}

	return 0;
}