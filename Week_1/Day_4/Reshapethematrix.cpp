class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size(),n=mat[0].size();
        if(m*n!=r*c)
         return mat;
        vector<int> mid;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mid.push_back(mat[i][j]);
            }
        }
        vector<vector<int>> ans(r, vector<int>(c));
        int k = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                ans[i][j] = mid[k++];
            }
        }

        return ans;
    }
};