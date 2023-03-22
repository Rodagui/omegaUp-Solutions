/*11187. Nombres y apellidos sanos - OmegaUp*/

#include <bits/stdc++.h>

using namespace std;

int main(){
		
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	string linea;
	int spaces;
	int indice;

	while(getline(cin, linea)){

		spaces = 0;

		for (int i = 0; i < linea.size(); ++i)
		{
			if(linea[i] == ' ')
				spaces++;
		}


		if(spaces >= 4 or spaces < 1)
			cout << "*\n";
		else{
			
			if(spaces == 1){

				indice = linea.find(' ');
		
				for (int i = indice + 1; i < linea.size() ; ++i)
					cout << linea[i];

				cout << ' ';
				for (int i = 0; i < indice ; ++i){
					cout << linea[i];

				}
			}

			if(spaces == 2 or spaces == 3){

				indice = linea.find(' ');
				indice = linea.find(' ', indice + 1);

				for (int i = indice + 1; i < linea.size() ; ++i)
				{
					cout << linea[i];
				}

				cout << " ";

				for (int i = 0; i < indice ; ++i)
				{
					cout << linea[i];
				}
			}

		

			cout << '\n';
		}

	}

	
	return 0;
}