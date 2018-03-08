//
//  main.cpp
//  accelToG
//
//  Created by James Parks on 6/27/16.
//  Copyright © 2016 James Parks. All rights reserved.
//

#include <iostream>
#include "GConverter.h"
#include <QApplication>
using std::cout;
using std::cin;

int main(int argc, const char * argv[])
{	
	double seconds;
	
	cout << "0-60 in how many seconds: ";
	cin >> seconds;
	
	if(!cin.fail())
	{
		double myGs = GConverter::mphToG_conversion(seconds);
		cout << "\n\n";
		GConverter::GtoMph_conversion(myGs);
	}
	else
	{
		cin.clear();
		cin.ignore(256, '\n');
	}
	
	
    return 0;
}
