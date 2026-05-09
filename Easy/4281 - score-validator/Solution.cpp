class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int count=0,scr=0;
        for( auto i:events){
            if(i=="1"||i=="WD"||i=="NB")
                scr+=1;
            else if(i=="3")
                scr+=3;
            else if(i=="4")
                scr+=4;
            else if(i=="5")
                scr+=5;
            else if(i=="2")
                scr+=2;
            else if(i=="6")
                scr+=6;
            else if(i=="W")
                count+=1;
            if(count>=10)
                break;
        }
         vector<int>ans={scr,count};
        return ans;
    }
};