class Solution {
public:
    char maxi(vector<int> &vov,vector<int> &tem,char s){
        int max=-1,j=-1, k;
        if(s=='a')
                 k=0;
            if(s=='e')
                 k=1;
            if(s=='i')
                 k=2;
            if(s=='o')
                 k=3;
            if(s=='u')
                 k=4;
        
        for(int i=0;i<5;i++){
            if(max<vov[i]&&tem[i]!=0){
                max=vov[i];
                j=i;
            }
        }
        if(vov[k]==max){
            tem[k]--;
            return s;
        }
            
        tem[j]--;
        if(j==0)
            return 'a';
        if(j==1)
            return 'e';
        if(j==2)
            return 'i';
        if(j==3)
            return 'o';
        if(j==4)
            return 'u';
        else 
            return 'z';
    }
    string sortVowels(string s) {
        vector<int> vov(5,0);
        for(auto i:s){
            if(i=='a')
                vov[0]++;
            if(i=='e')
                vov[1]++;
            if(i=='i')
                vov[2]++;
            if(i=='o')
                vov[3]++;
            if(i=='u')
                vov[4]++;
        }
        vector<int> tem=vov;
         for(auto &i:s){
            if((i=='a')||(i=='e')||(i=='i')||(i=='o')||(i=='u'))
                i=maxi(vov,tem,i);
        }
        return s;
    }
};