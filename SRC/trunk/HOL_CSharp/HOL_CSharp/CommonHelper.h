#pragma once
#include <string>
using namespace std;
using namespace System;

ref class CommonHelper
{

public:
	static const char* ConvertToChar(string);
	static const char* ConvertToChar(System::String^ arg);
	static string ConvertToString(const char* args);
	static string ConvertToString(System::String^ arg);
	static System::String^ ConvertToCLRString(const char* args);
	static System::String^ ConvertToCLRString(string arg);
public:
	CommonHelper(void);
};

