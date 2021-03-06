#include <iostream>
using namespace std;
#include <algorithm>

int n, m;
int num[10];
int arr[10];

void func(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	int tmp = 0;
	for (int i = 0; i < n; i++) {
		if (tmp != num[i]) {	// 이전 수열의 마지막 항과 새로운 수열의 마지막 항이 같으면 중복 수열
			arr[k] = num[i];
			tmp = arr[k];
			func(k + 1);
		}

	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> num[i];
	sort(num, num + n);

	func(0);
}