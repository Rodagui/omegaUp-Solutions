/*D. Posicion Fibonacci*/

#include <bits/stdc++.h>

using namespace std;
using Long = unsigned long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Long num;
	Long a = 1ull;
	Long b = 1ull;
	Long ans = 2ull;
	Long n;

	cin >> num;

	if(num == 1ull){
		cout << "1";
	}
	else if(num == 2ull){
		cout << "3";
	}
	else{
		
		n = a + b;

		while( n < num){
				
			if(n >= num){
				break;
			}

			n = a + b;
			a = b;
			b = n;
			ans++; 
			
		}

		if(n != num){
			cout <<"-1";
		}
		else{

			cout << ans;
		}

	}
	return 0;
}