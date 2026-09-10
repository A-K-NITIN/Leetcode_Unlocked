class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        stack<int> s;
        int n=nums2.size();
        for(int i=n-1;i>=0;--i){
            while((!s.empty())&&s.top()<=nums2[i])s.pop();
            if(s.empty())
                m[nums2[i]]=-1;
            else
                m[nums2[i]]=s.top();    
            
            s.push(nums2[i]);
        }
        n=nums1.size();
        for(int i=0;i<n;++i)nums1[i]= m[nums1[i]];
        return nums1;
    }
};