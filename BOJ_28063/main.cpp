#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	int x, y;
	cin >> x >> y;

	auto ans = int{ 0 };
	if (1 < x) {
		++ans;
	}

	if (x < n) {
		++ans;
	}

	if (1 < y) {
		++ans;
	}

	if (y < n) {
		++ans;
	}

	cout << ans;

	return 0;
}