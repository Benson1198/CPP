class Solution{
	public:

    void permute(string a, int l, int r, vector<string> &res) 
    { 
        if (l == r) 
            res.emplace_back(a);
        else
        { 

            for (int i = l; i <= r; i++) 
            { 
    

                swap(a[l], a[i]); 

                permute(a, l+1, r); 

                swap(a[l], a[i]); 
            } 
        }
    }

    int subsequences(string str, string output[])
    {
        if(str.length() == 0){
            output[0] = "";
            return 1;
        }

        int smallerOpSize = subsequences(str.substr(1),output);

        for(int i=0;i<smallerOpSize;i++){
            output[smallerOpSize + i] = str[0] + output[i];
        }

        return 2*smallerOpSize;
    }
        
    vector<string> AllPossibleStrings(string str){
        string output[1000];

        int outputSize = subsequences(str,output);

        vector<string> res;

        for(int i=0;i<outputSize;i++){
            permute(output[i],0,output[i].length()-1,res);
        }

        sort(res.begin(),res.end());

        return res;
	}
};



