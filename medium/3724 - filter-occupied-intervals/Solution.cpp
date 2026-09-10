class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& o, int s, int e) {
        sort(o.begin(),o.end());
        vector<vector<int>> tem;
        for(int i=0;i<o.size();i++){
            int j=i+1;
            while(j<o.size()&&(o[i][1]-o[j][0]>=-1)){
                if(o[i][1]<o[j][1])
                o[i][1]=o[j][1];
                j++;
            }
            tem.push_back(o[i]); 
            i=j-1;  
        }
        vector<vector<int>>().swap(o);//clear all memeory at O(1);
       for(int i=0;i<tem.size();i++){
           if(tem[i][0]>=s&&tem[i][1]<=e)
            continue;
           else if(tem[i][0]>=s&&tem[i][0]<=e)
               o.push_back({e+1,tem[i][1]});
           else if(tem[i][1]>=s&&tem[i][1]<=e)
               o.push_back({tem[i][0],s-1});
           else if(tem[i][0]<s&&tem[i][1]>e){
             o.push_back({tem[i][0],s-1});
             o.push_back({e+1,tem[i][1]});
           }
           else
            o.push_back(tem[i]);
       }
       vector<vector<int>>().swap(tem);//clear all memeory at O(1);
        return o;
    }
};