Complexity=O(M*logN)
bool searchMatrix(vector<vector<int>>& mat, int target) {
        int l=0,h=mat.size()-1;
        while(l<=h)
        {
            int m=ceil((l+h)/2*1.0);
            if(mat[m][0]==target)
            {
                return true;
            }
            else if(mat[m][0]<target)
            {
                for(int j=1;j<mat[m].size();j++)
                {
                    if(target==mat[m][j])return true;
                    
                }
                l=m+1;

            }
            else
            {
                h=m-1;
            }
        }
        return false;
}


Complexity = O(log(M*N));

bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int n = matrix.size(), m= matrix[0].size(), l = 0, h = m*n-1;

        while(l <= h)
        {
            int mid = l+((h-l)/2);   
          

            if(matrix[mid/m][mid%m] == target)
                return true;
            else if(matrix[mid/m][mid%m] > target)
            h = mid-1;
            else
                l = mid+1;
        }

        return false;
}