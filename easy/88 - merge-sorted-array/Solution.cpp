class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
      n1.erase(remove(n1.begin()+m,n1.end(),0),n1.end());
     n1.insert(n1.begin()+m,n2.begin(),n2.begin()+n);
       sort(n1.begin(),n1.end());
    }
};