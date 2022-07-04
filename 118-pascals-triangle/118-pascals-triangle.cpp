class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<int> a;
        vector<vector<int>> b;
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==0||j==i){
                    a.push_back(1);
                }
                else{
                    a.push_back(b[i-1][j-1]+b[i-1][j]);
                }
            }
            b.push_back(a);
            a.clear();
        }        
        return b;
    }
};