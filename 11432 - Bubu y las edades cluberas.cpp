/*Bubu y las edades cluberas - Omega Up*/

#include <bits/stdc++.h>

using namespace std;

int main(){
		
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	set <int> edades;
	vector <int> ans;
	int edad;

	while(cin >> edad){
		edades.insert(edad);
	}

	set<int>::iterator it;


	for (it = edades.begin(); it != edades.end() ; ++it)
		ans.push_back(*it);
	
	sort(ans.begin(), ans.end(), greater<int>());

	cout <<"[";
	for (int i = 0; i < ans.size(); ++i)
	{
		cout << '\'' << ans[i] <<'\'';

		if(i < ans.size() - 1)
			cout << ", ";
	}

	cout << "]";

	return 0;
}