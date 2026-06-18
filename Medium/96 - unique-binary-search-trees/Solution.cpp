class Solution {
public:
    int numTrees(int n) {
        /*catlon number it follow the following seres 
        Cn=C0.Cn-1+C1.Cn-2+......+Cn-1.C0
                 OR
        1 1 2 5 14 42 132 429 1430 4862 16796 ..... 
        0 1 2 3  4  5  6   7    8    9   10

        so the nth number is == 2n!/n!.(n+1)! => (n+2)*(n+3)*....2n/n!  =>>>> ¹⁄ₙ₊₁ · ⁿ∑ᵢ₌₁ (n+i)/i*/

        
        unsigned long long int num=1;
        for(int i=1;i<=n;i++) num = num*(n+i)/i;
        return num/(n+1);
    }
};