#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int tmp = INT_MAX;
	int ans_a = 0;
	int ans_b = 0;
	for (int i = 1; i <= n; i++) {
		// check if 'n' is divisible by 'i'
		if (n % i == 0) {
			// get the other factor of 'n' using the value of 'i'
			int a = n / i;
			int b = i;
			// check if 'a' is less than or equal to 'b'
			if (a <= b) {
				// check if the current difference of the two numbers is less than the
				// stored difference from the previous factors
				if (b - a <= tmp) {
					// if yes, then store the new difference value
					tmp = b - a;
					// store the new 'a' value
					ans_a = a;
					// store the new 'b' value
					ans_b = b;
				}
			}
		}
	}
	cout << ans_a << " " << ans_b << '\n';
	return 0;
}
