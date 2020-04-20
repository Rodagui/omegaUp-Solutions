/*A. Rango simple*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	int a, b;
	int ans = 0;

	cin >> tam;

	vector <int> arr(tam);

	for (int i = 0; i < tam; ++i)
	{
		cin >> arr[i];
	}

	cin >> a >> b;

	for (int i = 0; i < tam ; ++i)
	{
		if(arr[i] >= a and arr[i] <= b){
			ans++;
		}
	}

	cout << ans;

	return 0;
}