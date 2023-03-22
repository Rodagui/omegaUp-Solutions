/*11451. El perrito que quiere un hueso - Omega Up*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie(0);

	int tam1, olor1;
	int tam2, olor2;
	int hueso1 = 0;
	int hueso2 = 0;
	cin >> tam1 >> olor1 >> tam2 >> olor2;

	if(tam1 > tam2)
		hueso1++;
	else if(tam2 > tam1)
		hueso2++;

	if(olor1 > olor2)
		hueso1++;
	else if(olor2 > olor1)
		hueso2++;

	if(hueso1 == 2)
		cout << "Hueso 1";
	else if(hueso2 == 2)
		cout << "Hueso 2";
	else 
		cout << "Perrito confundido :(";

	return 0;
}