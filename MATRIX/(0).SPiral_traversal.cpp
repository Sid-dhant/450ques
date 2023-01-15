class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> vec;
        int i,ro=0,co=0,last_ro=r-1,last_co=c-1;
        while(ro<=last_ro&&co<=last_co){
            for(i=co;i<=last_co;i++)
              vec.push_back(matrix[ro][i]);
            ro++;
            for(i=ro;i<=last_ro;i++)
              vec.push_back(matrix[i][last_co]);
            last_co--;
            if(ro<=last_ro){
                for(i=last_co;i>=co;i--)
                  vec.push_back(matrix[last_ro][i]);
                last_ro--;
            }
            if(co<=last_co){
                for(i=last_ro;i>=ro;i--)
                  vec.push_back(matrix[i][co]);
                co++;
            }
        }
        return vec;
    }
};
