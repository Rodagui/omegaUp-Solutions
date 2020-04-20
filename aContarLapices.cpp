/*B. A contar lápices*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int lapices;
	int ans = 0;
	int num;
	int n;

	cin >> lapices >> num;

	for (int i = 0; i < lapices; ++i)
	{
		cin >> n;
		if(n == num){
			ans++;
		}
	}

	cout << ans;
	return 0;
}