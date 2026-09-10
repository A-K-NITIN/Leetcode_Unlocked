short int strStr(char* h, char* n) {
    return (strstr(h,n)==NULL)?-1:strstr(h,n)-h;
}