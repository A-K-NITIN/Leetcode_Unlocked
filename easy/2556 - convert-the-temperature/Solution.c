/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double*d=malloc(2*sizeof(double));
    *returnSize=2;
    d[0]=celsius + 273.15;
    d[1]=celsius * 1.80 + 32.00;
    return d;
}