//
//  GConverter.h
//  accelToG
//
//  Created by James Parks on 6/27/16.
//  Copyright © 2016 James Parks. All rights reserved.
//

#ifndef GConverter_h
#define GConverter_h

class GConverter
{
public:
	//Constructors
	GConverter();
	~GConverter();
	
	static double mphToG_conversion(double seconds);
	static double GtoMph_conversion(double g_units);
private:
};

#endif /* GConverter_h */
