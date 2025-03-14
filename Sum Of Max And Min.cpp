#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	int sum = 0;

	int maxi = INT_MIN;
	int mini = INT_MAX;

	for(int i=0; i<n; i++){
		maxi = max(arr[i], maxi);
		mini = min(arr[i], mini);
	}

	sum = maxi + mini;
	
	return sum;
}
