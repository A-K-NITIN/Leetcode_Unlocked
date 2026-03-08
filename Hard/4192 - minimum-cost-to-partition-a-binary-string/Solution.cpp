class Solution {
public:
    void back(int start,int end,string s,int encCost, int flatCost,unsigned long long int& min){
        if(start==end)
            return;
        int x=0;
        for(int i=start;i<end;i++){
           if(s[i]=='1')
               x++;
        }
        if(x&&min>(x*encCost*(end-start)))
            min=(x*encCost*(end-start));
        else if(min>flatCost)
            min=flatCost;

        if((end-start)%2==0){
            int l=(end-start)/2;
            back(start,end-l,s,encCost,flatCost,min);
            back(start+l,end,s,encCost,flatCost,min);
        }
    }
    long long minCost(string s, int encCost, int flatCost) {
        unsigned long long int min=INT_MAX;
            back(0,s.size(),s,encCost,flatCost,min); 
        return min;
    }
};