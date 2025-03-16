// --> Select Minimums and Swap
// --> Time Complexity : O(n^2)  For best, worst, avg

void selectionSort(vector<int> &arr) {
        
        int n = arr.size();
        // code here
        for(int i=0; i<n-1; i++){
            int mini = i;
            for(int j=i; j<n; j++){
                if(arr[j]<arr[mini]){
                    mini = j;
                }
            }
            
            swap(arr[mini], arr[i]);
        }
    }
