class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        multiset<int> mst(a.begin(), a.end());
        for(int &x: b){
            auto it = mst.lower_bound(x);
            if(it == mst.end() || *it != x) return false;
            mst.erase(it);
        }
        return true;
    }
};
