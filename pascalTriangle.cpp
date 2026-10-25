class Solution {
public:
    vector<vector<int>> pascalTriangleIII(int n) {
        vector<vector<int>>matrix;
        int i=1;
        while(i<=n){
            vector<int>nums;
            long long val=1;
            nums.push_back(val);
            for(int j=1;j<i;++j){
                val=(val*(i-j))/j;
                nums.push_back(val);
            }
            matrix.push_back(nums);
            ++i;
        }
        return matrix;
    }
};
