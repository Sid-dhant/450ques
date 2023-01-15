pair<int, int> search(vector<vector<int>> matrix, int x)
{
    // Write your code here.
    pair<int,int> res;
    int n=matrix.size()-1;
    int i=0,j=n;
    while(i<=n&&j>=0){
        if(matrix[i][j]==x){
            res.first=i;
            res.second=j;
            return res;
        }
        else{
            if(x<matrix[i][j])
                j--;
            else
                i++;
        }
    }
    res.first=-1;
    res.second=-1;
    return res;
}
