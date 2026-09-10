bool checkTwoChessboards(char* coordinate1, char* coordinate2) {
    coordinate1[0]-='a';
    coordinate2[0]-='a';
   return  (((coordinate1[0]%2==0&&coordinate1[1]%2!=0)||(coordinate1[0]%2!=0&&coordinate1[1]%2==0)&&(coordinate2[0]%2==0&&coordinate2[1]%2!=0)||(coordinate2[0]%2!=0&&coordinate2[1]%2==0))||((coordinate1[0]%2==0&&coordinate1[1]%2==0)||(coordinate1[0]%2!=0&&coordinate1[1]%2!=0)&&(coordinate2[0]%2==0&&coordinate2[1]%2==0)||(coordinate2[0]%2!=0&&coordinate2[1]%2!=0))) ?1:0;
}