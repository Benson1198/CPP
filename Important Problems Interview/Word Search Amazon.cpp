// Searching a given word in a 2D array using DFS


bool DFS(char board[][],int i,int j,int count, string word){
	if(count == word.length()){
		return true;
	}

	if(i<0 || i>sizeof(board) || j < 0 || j>sizeof(board[0]) || board[i][j] != word[count]){
		return false;
	}

	char temp = board[i][j];
	board[i][j] = " ";

	bool found = DFS(board,i+1,j,count+1,word) ||
				DFS(board,i-1,j,count+1,word) ||
				DFS(board,i,j+1,count+1,word) ||
				DFS(board,i,j-1,count+1,word);

	board[i][j] = temp;

	return found;
}


bool exist(char board[][], string word){
	for(int i=0;i<sizeof(board);i++){
		for(int j=0;j<sizeof(board[0]);j++){
			if(board[i][j] == word[0] && DFS(board,i,j,0,word)){
				return true;
			}
		}
	}

	return false;
}