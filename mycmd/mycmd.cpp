// mycmd.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>

int main(int argc,char* argsv[])
{

	//使用前需要清零初始化
	PROCESS_INFORMATION pi = {0};  //传出指针
	STARTUPINFO si = {0}; //传出指针


	char szCmdLine[256] = _T("/c calc");
	//TCHAR  是宽字节unicode时候使用这个

	//创建进程API  函数返回一个bool类型
	BOOL bEat=	CreateProcess(
		_T("C:\\Windows\\SysWOW64\\cmd.exe"),
		szCmdLine,
		NULL,
		NULL,
		TRUE,
		CREATE_NO_WINDOW,
		NULL,
		NULL,
		&si,//传出参数  传入指针
		&pi 
	);

	
    return 0;
}

