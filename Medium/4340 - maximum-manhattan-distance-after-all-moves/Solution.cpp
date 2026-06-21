class Solution {
public:
    int maxDistance(string moves) {
        int x=0,y=0,z=0;
        for(auto i:moves){
            if(i=='U')
                y++;
            else if (i=='D')
                y--;
            else if (i=='L')
                x--;
            else if (i=='R')
                x++;
            else if (i=='_')
                z++;
            
        }
        return abs(x)+abs(y)+z;
    }
};