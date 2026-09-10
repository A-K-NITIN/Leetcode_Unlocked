class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0;
        int sum=0;
        for(auto i:gain){
            sum+=i;
            if(max<sum)
                max=sum;
        }
        return max;
    }
};