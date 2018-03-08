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
double GConverter::mphToG_conversion(double seconds)
{
	double milePH_per_second = 60.0 / seconds;
	double miles_per_second_per_second = milePH_per_second / static_cast<double>(SECONDS_PER_HOUR);
	double feet_per_second_per_second = miles_per_second_per_second * static_cast<double>(FEET_PER_MILE);
	double meters_per_second_per_second = feet_per_second_per_second / static_cast<double>(FEET_PER_METER);
	double retVal = meters_per_second_per_second / ACCEL_DUE_TO_GRAVITY;
		
	cout << milePH_per_second << " mph / s\n";
	cout << miles_per_second_per_second << " mps / s\n";
	cout << feet_per_second_per_second << " fps /s\n";
	cout << meters_per_second_per_second << " meters per s / s\n";
	cout << retVal << "g's\n";
		
	return retVal;
}
	
double GConverter::GtoMph_conversion(double g_units)
{
	double meters_per_second_per_second = g_units * ACCEL_DUE_TO_GRAVITY;
	double feet_per_second_per_second = meters_per_second_per_second * static_cast<double>(FEET_PER_METER);
	double miles_per_second_per_second = feet_per_second_per_second / static_cast<double>(FEET_PER_MILE);
	double milePH_per_second = miles_per_second_per_second * static_cast<double>(SECONDS_PER_HOUR);
	double retVal = 60.0 / milePH_per_second;
	
	cout << meters_per_second_per_second << " meters per s / s\n";
	cout << feet_per_second_per_second << " fps / s\n";
	cout << miles_per_second_per_second << " mps / s\n";
	cout << milePH_per_second << " mph / s\n";
	cout << "0 - 60 in " << retVal << " seconds\n";
		
	return retVal;
}