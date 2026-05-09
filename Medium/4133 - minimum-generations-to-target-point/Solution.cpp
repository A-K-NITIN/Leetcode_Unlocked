class Solution {
public:
    int minGenerations(vector<vector<int>>& points, vector<int>& target) {
        int n=points.size();
        if(n<=1)
            return -1;
        map<vector<int>,int> mm;
        for( auto k :points)mm[k]++;
        int gen =0;
        while(!mm.contains(target)){
            gen++;
            vector<vector<int>>tem;
            for(auto i=mm.begin();i!=mm.end();i++){
                for(auto j=next(i);j!=mm.end();j++)
                    tem.push_back({(i->first[0]+j->first[0])/2,(i->first[1]+j->first[1])/2,(i->first[2]+j->first[2])/2});
            }
            for( auto k: tem)mm[k]++;
        }
        
        return gen;
        
    }
};