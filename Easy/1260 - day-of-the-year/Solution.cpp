class Solution {
public:
    int dayOfYear(string y) {
        int m=((int)y[5]-48)*10+(int)y[6]-48,d=((int)y[8]-48)*10+(int)y[9]-48;
        int Y=((int)y[0]-48)*1000+((int)y[1]-48)*100+((int)y[2]-48)*10+(int)y[3]-48;
        m--;
        switch(m){
            case 11:
              d+=30;
            case 10:
              d+=31;
            case 9:
              d+=30;
            case 8:
              d+=31;
            case 7:
              d+=31;
            case 6:
              d+=30;
            case 5:
              d+=31;
            case 4:
              d+=30;
            case 3:
              d+=31;
            case 2:
             if(Y%400==0||(Y%100!=0&&Y%4==0))
              d+=29;
            else
              d+=28;
            case 1:
              d+=31;
              break;
        }
        return d;
        
    }
};