//
//  GConverter.cpp
//  accelToG
//
//  Created by James Parks on 6/27/16.
//  Copyright © 2016 James Parks. All rights reserved.
//

#include <iostream>
#include "GConverter.h"
using std::cout;
using std::cin;

const int MINUTES_PER_HOUR = 60;
const int SECONDS_PER_MINUTE = 60;
const int SECONDS_PER_HOUR = SECONDS_PER_MINUTE * MINUTES_PER_HOUR;

const double ACCEL_DUE_TO_GRAVITY = 9.80665;

const int FEET_PER_MILE = 5280;
const double FEET_PER_METER = 3.28084;


GConverter::GConverter() {}
double GConverter::mphToG_conversion(double seconds, bool verbose)
{
	double milePH_per_second = 60.0 / seconds;
	double miles_per_second_per_second = milePH_per_second / static_cast<double>(SECONDS_PER_HOUR);
	double feet_per_second_per_second = miles_per_second_per_second * static_cast<double>(FEET_PER_MILE);
	double meters_per_second_per_second = feet_per_second_per_second / static_cast<double>(FEET_PER_METER);
	double retVal = meters_per_second_per_second / ACCEL_DUE_TO_GRAVITY;
	
    if(verbose)
    {
        cout << "Converting seconds to Gs:\n";	
	    cout << "\t" << milePH_per_second << " mph / s\n";
	    cout << "\t" << miles_per_second_per_second << " mps / s\n";
	    cout << "\t" << feet_per_second_per_second << " fps /s\n";
	    cout << "\t" << meters_per_second_per_second << " meters per s / s\n";
	    cout << "\t" << retVal << "g's\n";
    }		

	return retVal;
}
	
double GConverter::GtoMph_conversion(double g_units, bool verbose)
{
	double meters_per_second_per_second = g_units * ACCEL_DUE_TO_GRAVITY;
	double feet_per_second_per_second = meters_per_second_per_second * static_cast<double>(FEET_PER_METER);
	double miles_per_second_per_second = feet_per_second_per_second / static_cast<double>(FEET_PER_MILE);
	double milePH_per_second = miles_per_second_per_second * static_cast<double>(SECONDS_PER_HOUR);
	double retVal = 60.0 / milePH_per_second;
	
    if (verbose)
    {
        cout << "Converting Gs to seconds:\n";
	    cout << "\t" << meters_per_second_per_second << " meters per s / s\n";
	    cout << "\t" << feet_per_second_per_second << " fps / s\n";
	    cout << "\t" << miles_per_second_per_second << " mps / s\n";
	    cout << "\t" << milePH_per_second << " mph / s\n";
	    cout << "\t0 - 60 in " << retVal << " seconds\n";
    }		

	return retVal;
}
