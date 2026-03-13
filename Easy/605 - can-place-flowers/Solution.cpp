class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int i=0;
        while(i<f.size()&&n>0){
            if(f[i]==0&&f.size()==1){
                n--;
                i+=2;
            }
            else if(i==0&&f[i]==0&&f[i+1]==0){
                n--;
                i+=2;
            }
            else if(i==f.size()-1&&f[i]==0&&f[i-1]==0){
                n--;
                i+=2;
            }
            else if(i>0&&i<f.size()-1&&f[i]==0&&f[i-1]==0&&f[i+1]==0){
                n--;
                i+=2;
            }
            else if(f[i]==1){
                i+=2;
            }
            else
                i++;
            
        }
        return (n==0);
    }
};