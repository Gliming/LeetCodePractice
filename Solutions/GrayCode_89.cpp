class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>* rs = new vector<int>();
        
        int k;
        int size;
        rs->push_back(0);
        for (int i = 0; i < n; i++)
        {
            k = rs->size();
            for (int j = k-1; j >= 0; j--){
                rs->push_back((*rs)[j] | (1 << i));
            }
        }
        
        return *rs;
    }
};
