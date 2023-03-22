/*11450. Evaluando una fórmula gigante - OmegaUp*/

#include <bits/stdc++.h>

using namespace std;

double calcula(double x, double y, double z);

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	double x, y, z;

	cin >> x >> y >> z;

	cout << calcula(x, y, z);

	return 0;
}

double calcula(double x, double y, double z){

	double ans;

	ans = ( ((2.0*x) + y) / z ) * (pow(y, 3.0) - z);

	ans /= (( ( x + 2.0 * y + 3.0 * z) / (z - 2.0 * y - 3.0 * x) ) + (pow(x, 2.0)) + (pow(z, 2.0)) );

	return ans;
}