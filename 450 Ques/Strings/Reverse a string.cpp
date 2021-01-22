class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        if(len == 0){
            return;
        }
        int n2 = (len-1)/2;

        for(int i=0;i<=n2;i++){
            int a = i;
            int b = len-i-1;

            char temp = s[a];
            s[a] = s[b];
            s[b] = temp;
        }
    }
};