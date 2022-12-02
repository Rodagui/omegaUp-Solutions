/*11455. Filtrando múltiplos*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	int k;
	cin >> tam;

	vector <int> arr(tam);

	for (int i = 0; i < tam; ++i)
		cin >> arr[i];

	cin >> k;

	for (int i = 0; i < tam; ++i){

		if(arr[i] % k == 0){
			cout << arr[i] << ' ';
		}
		else{
			cout << "X ";
		}
	}

	return 0;
}