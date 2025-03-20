bool isPalindrome(string s, int start, int end){
    while(start<=end){
        if(s[start]!=s[end]){
            return false;
        }

        start++;
        end--;
    }

    return true;
}

string longestPalinSubstring(string str) {
    // Write your code here.

    int n = str.size();
    int maxlen = 0;
    int startindx = 0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(isPalindrome(str, i, j)){
                int length = j-i+1;

                if(length>maxlen){
                    maxlen = length;
                    startindx = i;
                }
            }

        }
    }

    return str.substr(startindx, maxlen);


}
