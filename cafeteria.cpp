/*Cafetería*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int cajas, personas, dist, tiempo;
	int minTime;
	int maxTime;
	int menor = 100000; 

	cin >> cajas >> personas >> dist >> tiempo;
	
	vector <int> atender(cajas);

	for (int i = 0; i < cajas; ++i)
	{
		cin >> atender[i];
		if(atender[i] < menor)
			menor = atender[i];
	}

	minTime = 0;
	maxTime = tiempo - (2*dist) - menor;
	bool can = false;

	while(minTime <= maxTime){

		int aux = personas;
		int div; 

		int midTime;
		midTime = (maxTime + minTime) / 2;

		for (int i = 0; i < cajas; ++i)
		{
			div = midTime / atender[i];
			aux -= div;		
		}

		//cout << midTime << ' ' << aux << '\n';

		if(aux <= 0){
			/*si se puede*/
			maxTime = midTime - 1;
			can = true;
		}
		else
			minTime = midTime + 1;
	}

	if(can)
		cout << "SI\n";
	else
		cout << "NO\n";



	return 0;
}