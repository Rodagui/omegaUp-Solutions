/*11401. Speeding*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int photos;

	cin >> photos;
	
	int t, d;
	int dAnt = 0, tAnt = 0; 
	int mayor = INT_MIN;
	int aux = 0;
	while(photos--){

		cin >> t >> d;

		if(t != 0 and d != 0){
			
			aux = (d - dAnt) / (t - tAnt);
			
			if(aux > mayor)
				mayor = aux;

			dAnt = d;
			tAnt = t;
		}

		

	}

	cout << mayor;

	return 0;
}