class Solution {
public:
    int removeElement(vector<int>& a, int v) {
     int n = a.size(),j=n-1;
        for(int i=0;i<=j;i++){
            while(a[j]==v){
                j--;
                if(j==-1)
                return 0;
            }
            if(i>=j)
             break;
            if(a[i]==v){
                a[i]^=a[j];
                a[j]=a[i]^a[j];
                a[i]^=a[j];
                j--;
            }
        }
        cout<<j<<endl;
        return j+1;
    }
    
};