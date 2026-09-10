class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i=0,j=0;
        for(auto d:commands){
            if(d=="UP")
                i--;
            else if(d=="RIGHT")
                j++;
            else if(d=="DOWN")
                i++;
            else if(d== "LEFT")
                j--;
        }
        return (i*n)+j;
    }
};