int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
   int h=arrivalTime+delayedTime;
   if (h>23)
     h-=24;

     return h; 
}