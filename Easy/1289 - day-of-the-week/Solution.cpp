class Solution {
public:
    string dayOfTheWeek(int d, int m, int y) {
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
             if(y%400==0||(y%100!=0&&y%4==0))
              d+=29;
            else
              d+=28;
            case 1:
              d+=31;
              break;
        }
        y--;
        int t=y/100;
        t%=4;
        d+=t*5;
        t=y%100;
        t+=t/4;
        d+=t;
        d%=7;
        switch(d){
            case 0:
            return"Sunday";
            case 1:
            return"Monday";
            case 2:
            return "Tuesday";
            case 4:
            return"Thursday";
            case 5:
            return "Friday";
            case 6:
            return"Saturday";
            case 3:
            return "Wednesday";

        }
        return "sdfesh";
       
    }
};