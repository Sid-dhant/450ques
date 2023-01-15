class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here   
        vector <int> mat;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                mat.push_back(matrix[i][j]);
            }
        }
        sort(mat.begin(),mat.end());
        int m=(mat.size())/2;
        return mat[m];
    }
};
