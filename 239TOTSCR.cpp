#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define log(a) cout<<(a)<<endl;
#define v vector<int>
#define loop(i,a,b) for(ll i = a; i < b; i++)
#define looprev(i,a,b) for(ll i = a-1; i >=b; i--)
void file_i_o()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
	int n, k;
	cin >> n >> k;
	vector<ll> points(k);
	for (int i = 0; i < k; ++i)
	{
		cin >> points[i];
	}
	while (n--)
	{
		string s;
		cin >> s;
		ll score = 0;
		for (int i = 0; i < k; ++i)
		{
			if (s[i] == '1')
				score += points[i];
		}
		log(score);
	}
}

int main()
{
	file_i_o();
	int t = 1;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		solve();
	}
	return 0;

}
