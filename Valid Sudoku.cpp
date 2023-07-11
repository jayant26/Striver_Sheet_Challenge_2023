
bool isPossible(int num ,int row, int col,int board[][9])
{  for(int i=0;i<9;i++)
        {
            if(board[row][i]==(num))return false;
        }
        for(int i=0;i<9;i++)
        {
            if(board[i][col]==(num))return false;
        }
        int x=(row/3)*3,y=(col/3)*3;
        for(int i=0;i<9;i++)
        {
           if(board[x+i/3][y+i%3]==num)return false;

        }
        return true;
}

bool isItSudoku(int board[9][9]) {

   for(int i=0;i<9;i++  )
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]==0)
                {
                    for(int x=1;x<=9;x++)
                    {
                        if(isPossible(x,i,j,board))
                        {
                            board[i][j]=x;
                        
                        if(isItSudoku(board)==true)return true;
                        else
                        {
                            board[i][j]=0;
                        }
                    }}
                    return false;
                }
            }
        }
        return true;
    
}
	