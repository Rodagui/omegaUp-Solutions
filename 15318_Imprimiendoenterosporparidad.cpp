#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;

	cin >> tam;
	
	vector <int> arr(tam);

	for (int i = 0; i < tam; ++i)
	{
		cin >> arr[i];
	}

	int P;

	cin >> P;

	if(P == 0){
		for (int i = 0; i < tam; ++i)
		{
			if(arr[i] % 2 == 0)
				cout << arr[i] << ' ';
		}
	}

	if (P == 1)
	{
		for (int i = 0; i < tam; ++i)
		{
			if(arr[i] % 2 == 1)
				cout << arr[i] << ' ';
		}
	}


	return 0;
}