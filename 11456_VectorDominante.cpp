/*11456. Vector dominante*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = 1;
	int tam;
	
	cin >> tam;

	vector <int> arr1(tam);

	int aux;
	
	for (int i = 0; i < tam; ++i)
		cin >> arr1[i];

	for (int i = 0; i < tam; ++i){
		
		cin >> aux;

		if (aux >= arr1[i]){
			ans = 0;
		}

	}

	cout << ans;

	return 0;
}