// MyNotePad.cpp: 主项目文件。

#include "stdafx.h"
#using "mscorlib.dll"
using namespace System;
using namespace System::Collections;
using namespace System::IO;

delegate int fuckDelegate(int);
delegate void FirstEventHandle(String ^);
delegate void SecondEventHandle(String ^);

ref class EvtSrc {
public:
	event FirstEventHandle ^onFirstEvent;
	event SecondEventHandle ^onSecondEvent;

	void rasieFirstEvent(String ^msg) {
		onFirstEvent(msg);
	}
	void rasieSecondEvent(String ^msg) {
		onSecondEvent(msg);
	}


	EvtSrc();
	~EvtSrc();

private:

};

EvtSrc::EvtSrc() {
}

EvtSrc::~EvtSrc() {
}



int main(array<System::String ^> ^args)
{
	//fuckDelegate ^op = gcnew fuckDelegate(&EvtSrc::fuckFoo);
	//int c = op->Invoke(9);
	//System::Console::WriteLine("c = {0}",c);
	try
	{
		FileStream ^fp = gcnew FileStream("fuckOut.txt",System::IO::FileMode::Create);
		StreamWriter ^fs = gcnew StreamWriter(fp);
		fs->WriteLine("fuck UR Mother");
		fs->Flush();
		fs->Close();
	}
	catch (System::Exception ^e)
	{
		Console::WriteLine(e->ToString());
	}

	return 0;
}
