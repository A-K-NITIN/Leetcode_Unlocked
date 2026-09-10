class Solution {
public:
    // 1 min = 6 deg   by min hand
    // 1 min = 1/2  deg   by hour hand
    // 1 hour = 360 deg by min hand
    // 1 hour = 30 deg by  hour hand
    double angleClock(int hour, int minutes) {
        double hh=(hour%12)*30 + 0.5*minutes;
        double mh=minutes*6;
        return (abs(mh-hh)>180.0)?360-abs(mh-hh):abs(mh-hh);
    }
};