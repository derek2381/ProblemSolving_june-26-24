// problem link
// https://www.codechef.com/START140D/problems/MAKEPERM

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    int curr_sum = 0;
	    for(int i = 0; i< n;i++){
	        cin >> arr[i];
	        curr_sum += arr[i];
	    }

	    sort(arr.begin(), arr.end());
	    int actual_sum = (n*(n+1))/2;
	    int diff = 0;

	    for(int i = 1;i <= n;i++){
	        diff += abs(arr[i-1]-i);
	    }

	    if(curr_sum + diff > actual_sum){
	        cout << "NO\n";
	    }else{
	        cout << "YES\n";
	    }


	}

}
