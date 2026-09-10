class Solution {
    public int removeElement(int[] a, int v) {
        int n = a.length,j=n-1;
        for(int i=n-1-1;i>=0;i--){
            while(a[j]==v){
                j--;
                if(j==-1)
                return 0;
            }
            if(a[i]==v){
                a[i]^=a[j];
                a[j]=a[i]^a[j];
                a[i]^=a[j];
                j--;
            }
        }
        return j+1;
    }
}