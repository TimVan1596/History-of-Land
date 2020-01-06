#include "CommonHelper.h"
#include "cstdio"
#include "string"
#include "stdafx.h"

using namespace std;



CommonHelper::CommonHelper(void)
{
}


const char* CommonHelper::ConvertToChar(std::string arg)
{
	return arg.data();
}

const char* CommonHelper::ConvertToChar(System::String^ arg)
{
	return (char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg).ToPointer();
}

std::string CommonHelper::ConvertToString(const char* args)
{
	std::string returned = args;
	return returned;
}

std::string CommonHelper::ConvertToString(System::String^ arg)
{
	return ConvertToString(ConvertToChar(arg));
}

System::String^ CommonHelper::ConvertToCLRString(const char* args)
{
	System::String^ clrString = gcnew System::String(args);
	return clrString;
}
System::String^ CommonHelper::ConvertToCLRString(std::string arg)
{
	return System::String(ConvertToChar(arg)).ToString();
}