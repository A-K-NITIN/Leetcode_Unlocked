class Solution {
public:
    string trafficSignal(int timer) {
        switch(timer){
            case 0:
                return "Green";
            case 30:
                return "Orange";
            case 31 ... 90:
                return "Red";
            default:
                return "Invalid";
        }
    }
};