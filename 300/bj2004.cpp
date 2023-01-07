#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

pair < ll, ll > facCal(ll n)	// n!를 계산하는 동안 나오는 2, 5의 숫자를 계산
{
	ll cnt2 = 0, cnt5 = 0;
	
	for (ll i = 2; i <= n; i *= 2)
	{
		cnt2 += n / i;
	}

	for (ll i = 5; i <= n; i *= 5)
	{
		cnt5 += n / i;
	}


	return { cnt2, cnt5 };
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll n,m;
	cin >> n >> m;
	// n>=m이므로 nCm = n! / ( m! * (n-m)! )

	vector< pair<ll, ll>> res;
	res.push_back(facCal(n)); 
	res.push_back(facCal(m));
	res.push_back(facCal(n-m));

	cout << min(res[0].first - res[1].first - res[2].first, 
		res[0].second - res[1].second - res[2].second) << "\n";

}