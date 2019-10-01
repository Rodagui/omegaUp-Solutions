/*Aerodrom*/
#include <bits/stdc++.h>
using namespace std;
using Long = long long;


int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int desk;
	Long persons;

	cin >> desk >> persons;
	vector <Long> times(desk);

	for (int i = 0; i < desk; ++i)	
		cin >> times[i];

	Long izq, der, middle, ans;
	izq = 1;
	der = 100000000000001;

	Long aux;
	while( izq <= der){

		middle = (der + izq) / 2;
		aux = 0;

		for (int i = 0; i < desk; ++i)
		{
			aux += (middle/times[i]);
		}

		if(aux >= persons){
			ans = middle;
			der = middle - 1;
		}
		else{
			izq = middle + 1;
		}

	}

	cout << ans << '\n';


	return 0;
}