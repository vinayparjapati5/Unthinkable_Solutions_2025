// Take an element and place it in correct position

// TC : O(n^2) for worst, avg
// O(n) for best if already arr sorted ie no swaps required.

void insertionSort(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            
            int j = i;
            
            while(j>0 && arr[j-1]>arr[j]){
                swap(arr[j-1], arr[j]);
                j--;
            }
        }
    }
