/*11453. Producto punto de dos vectores*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	int tam;
	int aux;

	cin >> tam;

	vector <int> arr(tam);

	for (int i = 0; i < tam; ++i)
		cin >> arr[i];

	for (int i = 0; i < tam; ++i)
	{
		cin >> aux;
		ans = ans + (aux * arr[i]);
	}

	cout << ans;


	return 0;
}