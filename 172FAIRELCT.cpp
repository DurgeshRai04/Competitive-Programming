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

int sum(v a)
{
	return accumulate(a.begin(), a.end(), 0);
}

void solve()
{
	int n, m, i;
	cin >> n >> m;
	v N(n), M(m);
	loop(i, 0, n)
	cin >> N[i];
	loop(i, 0, m)
	cin >> M[i];

	int Nsum = sum(N), Msum = sum(M);
	if (Nsum > Msum)
	{
		log(0)
		return;
	}
	else
	{
		sort(N.begin(), N.end());
		sort(M.begin(), M.end());
		int count = 0;
		int minN = 0, maxM = m - 1;
		int Nsum = sum(N), Msum = sum(M);
		while ((Nsum <= Msum ) && (minN < n && maxM >= 0))
		{
			swap(N[minN++], M[maxM--]);
			count++;
			Nsum = sum(N), Msum = sum(M);
		}

		if (Nsum > Msum) {
			log(count);
		}
		else {
			log(-1);
		}
	}

}

int main()
{
	file_i_o();
	int t = 1, i = 0;
	cin >> t;
	loop (i, 0, t)
	solve();
	return 0;
}

