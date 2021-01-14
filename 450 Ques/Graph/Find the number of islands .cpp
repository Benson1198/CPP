class Solution {
public:
    void dfsUtil(vector<vector<char>>& A, int a, int b,int N, int M){
        if(a >= N || a<0 || b >= M || b<0 || A[a][b] != '1'){
            return;
        }
        
        A[a][b] = '9';
        
        dfsUtil(A,a+1,b,N,M);
        dfsUtil(A,a,b+1,N,M);
        dfsUtil(A,a-1,b,N,M);
        dfsUtil(A,a,b-1,N,M);
        dfsUtil(A,a+1,b+1,N,M);
        dfsUtil(A,a-1,b-1,N,M);
        dfsUtil(A,a+1,b-1,N,M);
        dfsUtil(A,a-1,b+1,N,M);
    }

    int numIslands(vector<vector<char>>& A) {
        int count = 0;
        int N = A.size();
        int M = A[0].size();
        
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(A[i][j] == '1'){
                    dfsUtil(A,i,j,N,M);
                    count ++;
                }
            }
        }
        return count;
    }
};