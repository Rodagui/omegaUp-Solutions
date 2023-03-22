/*11452. Dibujando un tache - OmegaUp*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int tam;

	cin >> tam;

	for (int i = 0; i < tam ; ++i)
	{
		for (int j = 0; j < tam ; ++j)
		{
			if(i == j or i + j == tam - 1)
				cout << "@";
			else
				cout << " ";

		}
		cout << '\n';
	}
	return 0;
}