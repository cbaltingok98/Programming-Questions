#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
	string temp(n, ' ');
	for (int i = n - 1; i >= 0; i--) {
		temp.at(i) = '#';
		cout << temp << endl;
	}

}

int main()
{
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	staircase(n);

	return 0;
}
