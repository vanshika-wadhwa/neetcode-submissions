class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";
        for (char c:s){
            if (isalnum(c)) filtered+=tolower(c);
        }
        int low=0,high=(int)filtered.size()-1;
        while(low<high){
            if(filtered[low]!=filtered[high]){
                return false;
            }
            low++, high--;
        }
        return true;
    }
};