#include <stdio.h>
typedef long long ll;

int main(){
	ll t = 0, r = 0, e = 0, c = 0;
	
	while(~scanf("%lld", &t)){
		for (ll i = 0; i < t; ++i)
		{
			scanf("%lld %lld %lld",&r, &e, &c);
			e = e - c;
			if (r < e)
				printf("advertise\n");
			else if (r > e)
				printf("do not advertise\n");
			else
				printf("does not matter\n");
		}
		r = 0, e = 0, c = 0;
	}
	return 0;
}
