#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	while (0 < (n--)) {
		string x;
		cin >> x;

		reverse(x.begin(), x.end());

		cout << x << '\n';
	}

	return 0;
}