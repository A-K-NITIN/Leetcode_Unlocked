class Solution {
public:
    int minLights(vector<int>& l) {
        
        int n=l.size();
        vector<int > tem(n,0);
        for(int i=0;i<n;i++){
            if(l[i]>0){
                tem[(i-l[i]>=0)?i-l[i]:0]+= 1;
                if(i+l[i]+1<n)
                tem[i+l[i]+1]-=1;
            }
        }
        //for(int i=1;i<n;i++)tem[i]+= tem[i-1];
        int c=0,tre=0;
        for(int i=0;i<n;i++){
            if(i!=0)
            tem[i]+= tem[i-1];
            //cout<<tem[i]<<"   ";
            if(tem[i]==0){
                c++;
                tre++;
                if(tre==3){
                    c-=2;
                    tre=0;
                }
            }
            else{
                if(tre==2)
                    c-=1;
                tre=0;
            }
        }
        if (tre > 1) 
            c -= (tre-1);
            
        return c;
    }
};