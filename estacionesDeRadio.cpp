/*E. Estaciones de Radio*/

#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int freq;
	int dif;
	int ans;
	int izq;
	int der;

	vector <int> radioDif = {580, 980, 1190, 1250, 1420};

	cin >> freq;

	if(freq < 540 or freq > 1520){
		cout << "error";
	}
	else{

		if(freq < 580){
			cout << "adelante " << 580 -  freq;
		}
		else if(freq > 1420){
			cout << "atras " << freq - 1420;
		}
		else{
			for (int i = 1; i < 5; ++i)
			{
				if(radioDif[i] > freq){
					izq = radioDif[i - 1];
					der = radioDif[i];
					break;
				}
			}

			if( freq - izq < der - freq){
				cout << "atras " << freq - izq;
			}
			else{
				cout << "adelante " << der - freq;
		}
		}
		
	}

	return 0;
}