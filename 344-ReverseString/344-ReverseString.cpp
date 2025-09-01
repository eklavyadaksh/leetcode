// Last updated: 01/09/2025, 22:17:52
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        char r[100];
        char temp;
        for(int i=0;i<n/2;i++){
            std::cout<<s[i]<<std::endl;
            temp = s[i];
            s[i] = s[n-i-1];
            s[n-i-1] = temp;
        }
    }
};