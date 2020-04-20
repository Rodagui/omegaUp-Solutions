/*G. Karel y los quebrados*/

#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int k;
	int x;

	cin >> k;

	vector <int> ansX;
	vector <int> ansY;

	for (int y = k + 1; y <= 2 * k ; ++y)
	{
		x = (k * y) / (y - k);

		if(k * y % (y - k) == 0){
			ansX.push_back(x);
			ansY.push_back(y);
		}
	}

	cout << ansX.size() << '\n';

	for (int i = 0; i < ansX.size(); ++i)
	{
		if(i > 0){
			cout << '\n';
		}

		cout << "1/" << k << " = 1/" << ansX[i] << " + 1/" << ansY[i];
	}
	
	return 0;
}