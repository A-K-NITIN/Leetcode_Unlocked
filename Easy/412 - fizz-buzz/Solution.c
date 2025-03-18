/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char **s = malloc(n * sizeof(char*));
    *returnSize=n;
    for(int i=0;i<n;i++){
        s[i] = malloc(9 * sizeof(char));
        if((i+1)%3==0&&(i+1)%5==0)
        strcpy(s[i],"FizzBuzz");
        else if((i+1)%3==0)
        strcpy(s[i],"Fizz");
        else if((i+1)%5==0)
         strcpy(s[i],"Buzz");
        else
        sprintf(s[i],"%d",i+1);
    }
    return s;
}