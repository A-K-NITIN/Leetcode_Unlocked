class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> pref=height,suf=height;
        int n=height.size();
        //to find max element present in the left
        for(int i=1;i<n;i++){
            if(pref[i]<pref[i-1])
            pref[i]=pref[i-1];
        }
        //to find max element present in the right
        for(int i=n-2;i>=0;--i){
            if(suf[i]<suf[i+1])
                suf[i]=suf[i+1];
        }
        int ans=0,b;
        for(int i=1;i<n-1;i++){
            //as the water level of block is smallest compair to both height 
            //II__-- heare the water won't be more then -
            b=min(pref[i],suf[i]);
            // to check wethear the block is lower than the level 
            //if so add the no of space acupied bu the water
            if(b>height[i])
                ans+=b-height[i];
        }
        return ans;
    }
};