#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    // Write your code here.

    int n = s.size();

    int left = 0;
    int right = n-1;

    while(left<right){

        while(left<right && !isalnum(s[left])){
            left++;
        }

        while(left<right && !isalnum(s[right])){
            right--;
        }

        if(tolower(s[left])!= tolower(s[right])){
            return false;
        }

        left++;
        right--;
    }

    return true;


}
