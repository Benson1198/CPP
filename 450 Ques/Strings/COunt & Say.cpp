class Solution {
public:
    string util(string str){
        vector <char> temp;
        vector <int> ans;
        int n = str.length();

        for(int i=0;i<n;i++){
            if(i==0){
                temp.push_back(str[i]);
            }
            else{
                if(str[i] != str[i-1]){
                    ans.push_back(temp.size());
                    int a = (int) temp[0];
                    ans.push_back(a);
                    temp.clear();
                }

                else{
                    temp.push_back(str[i]);
                }
            }
        }
        
        string res;

        for(int i=0;i<ans.size();i++){
            char b = (char)ans[i]
            res.push_back(b);
        }

        return res;
         
    }


    string countAndSay(int n) {
        string temp, ans,temp1;

        if(n == 1){
            ans = "1";
            return ans;
        }

        temp = "1";

        while( n>0 ){
            temp1 = util(temp);
            temp = temp1;
            n--;
        }

        return temp;
    }
};









// #include <bits/stdc++.h>

// using namespace std;

// string util(string str){
//         vector <char> temp;
//         vector <int> ans;
//         int n = str.length();

//         for(int i=0;i<n;i++){
//             if(i==0){
//                 temp.push_back(str[i]);
//             }
//             else{
//                 if(str[i] != str[i-1]){
//                     ans.push_back(temp.size());
//                     int a = (int) temp[0];
//                     ans.push_back(a);
//                     temp.clear();
//                 }

//                 else{
//                     temp.push_back(str[i]);
//                 }
//             }
//         }
        
//         string res;

//         for(int i=0;i<ans.size();i++){
//             char b = (char)ans[i];
//             res.push_back(b);
//         }

//         return res;
         
//     }


//     string countAndSay(int n) {
//         string temp, ans,temp1;

//         if(n == 1){
//             ans = "1";
//             return ans;
//         }

//         temp = "1";

//         while( n>0 ){
//             temp1 = util(temp);
//             temp = temp1;
//             n--;
//         }

//         return temp;
//     }


// int main()
// {
//     int n = 2;
    
//     string c = countAndSay(n);
    
//     cout << c << endl;

//     return 0;
// }
