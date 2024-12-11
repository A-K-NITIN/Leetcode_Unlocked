int reverse(int x)
{
   int sum=0;
   while(x!=0){
       if (sum < INT_MIN/10 || sum > INT_MAX/10 )
            return 0;
        sum*=10;
        sum+=x%10;
        x/=10;
    }
    return sum;
}