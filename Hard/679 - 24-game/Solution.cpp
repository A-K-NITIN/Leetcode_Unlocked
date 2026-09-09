class Solution {
public:
    void back(vector<int>& c,int ans,bool &f){
        if(ans==24)
            f=true;
        if(f)
            return;
        int tem;
        for(int i=0;i<4;++i){
            if(c[i]==-1)
                continue;
            tem=c[i];
            c[i]=-1;
            back(c,ans+tem,f);
            back(c,ans-tem,f);
            back(c,ans*tem,f);
            back(c,ans/tem,f);
            c[i]=tem;
        }
    }
    bool judgePoint24(vector<int>& c) {
        bool f=0;
        back(c,0,f);
        return f;
    }
};