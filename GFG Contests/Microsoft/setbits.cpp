class Solution
{
public:
    int setBits(int n)
    {   int count = 0;
    
        for (int i = 31; i >= 0; i--) { 
        int k = n >> i; 
        if (k & 1) 
            count ++; 
        else
            continue; 
    }
    
    return count;
    }
};