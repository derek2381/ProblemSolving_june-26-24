// problem link
// https://www.codechef.com/START140D/problems/TREATS


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	     cin >> n >> k;
	     vector<long long int> arr1(n), arr2(n);
	     map<long long int,long long  int> mp1, mp2;

	     for(int i = 0;i < n;i++){
	         cin >> arr1[i];
	         mp1[arr1[i]%k]++;
	     }

	     for(int i = 0; i <n;i++){
	         cin >> arr2[i];
	         mp2[arr2[i]%k]++;
	     }

	     long long int res = 0;

	     for(auto it : mp1){
	         if(it.first == 0){
	             res += mp1[0] * mp2[0];
	         }
	         else{
	             int rem = k - it.first;
	             res += mp1[it.first] * mp2[rem];
	         }
	     }

	     cout << res << endl;
	}

}
