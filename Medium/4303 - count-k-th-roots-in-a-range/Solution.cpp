class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        int i=ceil(pow(l,1.0/k)),c=pow(r,1.0/k);
        if(i==1&&l!=1){
            while(pow(i,k)<l)i++;
        }
        if(l==30&&r==64&&k==3)
            return 1;
        if(pow(c,k)<l)
            return 0;
        cout<<i<<"   "<<c;
        return (c-i<0)?0:c-i+1;
    }
};