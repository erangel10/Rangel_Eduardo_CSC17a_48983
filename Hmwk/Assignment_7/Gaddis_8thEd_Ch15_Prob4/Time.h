/* 
 * File:   Time.h
 * Author: admin
 *
 * Created on December 1, 2015, 10:02 AM
 */

#ifndef TIME_H
#define	TIME_H


class Time {
    
    protected:
        int hour;
        int min;
        int sec;
    public:
        // Default constructor
        Time()
        { hour = 0; min = 0; sec = 0; }

        // Constructor
        Time(int h, int m, int s)
        { hour = h; min = m; sec = s; }

        // Accessor functions
        virtual int getHour() const
        { return hour; }

        int getMin() const
        { return min; }

        int getSec() const
        { return sec; }
 };
 
 
 class milTime : public Time
 {
    private:
        int milHours;
        int milSeconds;
        
    public:
        milTime()
        {
            milHours= 0;
            milSeconds = 0;
        }
        milTime(int, int);
        void setTime(int mH, int mS);
        int getHour(){return milHours;}
        int getStandHr(){return hour % 12;}
 };

#endif	/* TIME_H */

