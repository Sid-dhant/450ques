class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        int k=0;
        int temp[N*N];
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                temp[k]=Mat[i][j];
                k++;
            }
        }
        sort(temp,temp+k);
        k = 0;
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                Mat[i][j] = temp[k];
                k++;
            }
        }
        return Mat;
    }
};
