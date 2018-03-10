//
//  main.cpp
//  accelToG
//
//  Created by James Parks on 6/27/16.
//  Copyright © 2016 James Parks. All rights reserved.
//

#include <iostream>
#include "GConverter.h"
//#include <QApplication>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[])
{	
	double seconds;
    cout << argc;
    cout << "\n";
    int i = 0;
    for(i=0;i<argc;i++)
    {
        cout << argv[i] << " ";
    }

	cout << "\n0-60 in how many seconds: ";
	cin >> seconds;
	
	if(!cin.fail())
	{
		double myGs = GConverter::mphToG_conversion(seconds, true);
		cout << "\n\n";
		GConverter::GtoMph_conversion(myGs, true);
	}
	else
	{
		cin.clear();
		cin.ignore(256, '\n');
	}
	
	
    return 0;
}
