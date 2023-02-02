//11098번
#include <iostream>
using namespace std;

int main() {

	int n, p;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> p;
		int price;
		string name;

		int max = 0;
		string ans;

		for (int j = 0; j < p; j++) {
			cin >> price >> name;
			if (price > max) {
				max = price;
				ans = name;
			}
		}
		cout << ans << endl;
	}
	return 0;
}