/*11435. Comparando número de galaxias*/

#include <bits/stdc++.h>

using namespace std;

int main(){
		
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int a, b, c;

	cin >> a >> b >> c;

	if(a < b)
		cout << "True ";
	else 
		cout << "False ";

	if(c > a)
		cout << "True ";
	else 
		cout << "False ";

	if(a == b)
		cout << "True ";
	else 
		cout << "False ";

	if(a != c)
		cout << "True ";
	else 
		cout << "False ";

	if(c <= b)
		cout << "True";
	else 
		cout << "False";


	return 0;
}