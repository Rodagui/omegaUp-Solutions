/*13769. En busca de la mayor diversión*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int numJuguetes;

	cin >> numJuguetes;

	int suma = 0;
	int numMenor = 101;
	int num;

	for (int i = 0; i < numJuguetes; ++i)
	{
		cin >> num;

		if(num < numMenor)
			numMenor = num;

		suma = num + suma; 		//suma += num;
	}

	cout << suma - numMenor;

	return 0;
}