// Problem Link
// https://www.codechef.com/problems/TEMPBAL

// Source Code
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> arr(n);
	    
	    for(int i = 0;i < n;i++){
	        cin >> arr[i];
	    }
	    
	    long long int res = 0,p = 0;
	    
	    for(int i = 0;i < n;i++){
	        while(arr[i] < 0){
	            while(arr[p] <= 0){
	                p++;
	            }
	            
	            long long int val = min(arr[p], -arr[i]);
	            arr[p] -= val;
	            arr[i] += val;
	            res += val*abs(i-p);
	        }
	    }
	    
	    cout << res << endl;
	    
	}
	return 0;
}
