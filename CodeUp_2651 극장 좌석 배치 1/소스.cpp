#include <iostream>
using namespace std;

int cnt;
int nCr(int n, int r)
{
	if (n == 0 || n == 1 || n == r)
		return 1;
	if (r == 1)
		return n;
	return nCr(n - 1, r - 1) + nCr(n - 1, r);
}
int main()
{
	int n, r;
	cin >> n >> r;
	cout << nCr(n, r);
	return 0;
}