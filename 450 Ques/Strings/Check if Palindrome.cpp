class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    if(S.length() == 1){
	        return 1;
	    }
	    
	    int len = S.length();
	    int n2 = (len-1)/2;
	    
	    for(int i=0;i<=n2;i++){
            if(S[i] != S[len-1-i]){
                return 0;
            }
        }
        
        return 1;
	}

};