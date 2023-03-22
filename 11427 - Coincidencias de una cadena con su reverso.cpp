/*11427. Coincidencias de una cadena con su reverso - OmegaUp*/

#include <bits/stdc++.h>

using namespace std;

int main(){
		
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	string cad;
	string rev;
	int ans = 0;

	cin >> cad;

	for (int i = 0; i < cad.size(); ++i)
		cad[i] = tolower(cad[i]);
	
	rev = cad;
	reverse(rev.begin(), rev.end());

	for (int i = 0; i < cad.size(); ++i)
		if(cad[i] == rev[i])
			ans++;
		
	cout << ans;
	
	return 0;
}