#ifndef Command_h
#define Command_h

#include"iostream"
#include <fstream>
#include <iostream>
#include <sstream>
#include<vector>
#include <algorithm> 
#include <math.h> 

#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include<cppunit/XmlOutputter.h>
#include <cppunit/extensions/HelperMacros.h>
#pragma once
class Command
{
	int line1;
	int line2;
public:
	Command();
	~Command();
	double distanceCalculate(double valueArr[40][3]);
	int getLine1();
	int getLine2();
};
#endif
