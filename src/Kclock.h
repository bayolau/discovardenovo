// Copyright (c) 2000-2003 Whitehead Institute for Biomedical Research
// 


#ifndef KCLOCK
#define KCLOCK
//
//  Usage:
//    kclock ktime ;              //  Initialize "ktime"
//    cout << ktime << endl ;     //  Prints out time since ktime was initialized
//    cout << total_time << endl; // Print out time since start of execution
//    ktime.WallClock()           // WallClock time since ktime was initialized
//    ktime.SystemTime()          // System Time since ktime was initialized
//    ktime.UserTime()            // User Time since ktime was initialized
//    total_time.WallClock()      // WallClock time since start of execution 
//    total_time.SystemTime()     // System Time since start of execution
//    total_time.UserTime()       // User Time since start of execution 
//
//  Compiling kclock.cc with -DSHOW_MICROSECONDS prints more detail 
//  in  cout << total_time  and cout << ktime.
//

#include <time.h>
#include <iostream>

using namespace std;

class kclock {

public:
  kclock() ; 

  friend ostream& operator<<(ostream &o, kclock &c);

  double WallClock() ;
  double SystemTime() ;
  double UserTime() ;

private:
  double wtime_start ; 
  double stime_start ;
  double utime_start ; 
} ;

extern kclock total_time ;  // Time from start of execution
#endif 
