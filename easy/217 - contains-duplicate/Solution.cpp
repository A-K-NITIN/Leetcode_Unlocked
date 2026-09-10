class Solution {
public:
    bool containsDuplicate(vector<int>& n) {
        unordered_set<int> s(n.begin(),n.end());
        return s.size()!=n.size();
    }
};