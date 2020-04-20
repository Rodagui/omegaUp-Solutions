/*C. Números NO Fibonaccis*/

#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Long num;
	cin >> num;

	bool fibo = false;
	Long raiz;
	Long prop;

	int band = 0;

	for (Long i = 4; i < num ; ++i)
	{
		fibo = false;

		

		prop = (5ll * i * i ) - 4ll;
		raiz = sqrt(prop);
		
		if(raiz * raiz == prop){
			fibo = true;
		}

		prop = (5ll * i * i ) + 4ll;
		raiz = sqrt(prop);
		
		if(raiz * raiz == prop){
			fibo = true;
		}

		if(fibo == false){

			if(band > 0){
				cout << ' ';
			}

			cout << i;
			band = 1;
		}
	}

	return 0;
}