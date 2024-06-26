// problem link
// https://www.codechef.com/START140D/problems/YOGACLASS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x, y, n;
	    cin >> n >> x >> y;
	    int val1 = (n/2)*y + (n%2)*x;
	    int val2 = (n*x);

	    if(val1 > val2){
	        cout << val1 << endl;
	    }else{
	        cout << val2 << endl;
	    }
	}
	return 0;
}
