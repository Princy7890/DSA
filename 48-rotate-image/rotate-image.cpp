class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<rows;i++)
        {
            int start=0;
            int end=rows-1;
            while(start<end)
            {
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;
            }
        }

    }
};