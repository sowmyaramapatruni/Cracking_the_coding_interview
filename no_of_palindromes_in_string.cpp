class Solution {
public:
    int countSubstrings(string s) {
        
        int sum = 0;
        for(int i =0;i<s.length();i++) {
            sum = sum + checkPalindrome(s,i,i);
            
            sum = sum + checkPalindrome(s,i,i+1);
        }
        
        return sum;
    }
    
    int checkPalindrome(string s , int left, int right){
        
        int count = 0;
        
        while(left >=0 && right <=s.length() && s[left--] == s[right++]) {
            count++;
        }
    return count;
    }
};
