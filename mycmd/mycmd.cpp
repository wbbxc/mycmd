// mycmd.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <Windows.h>

int main(int argc,char* argsv[])
{

	//ʹ��ǰ��Ҫ�����ʼ��
	PROCESS_INFORMATION pi = {0};  //����ָ��
	STARTUPINFO si = {0}; //����ָ��


	char szCmdLine[256] = _T("/c calc");
	//TCHAR  �ǿ��ֽ�unicodeʱ��ʹ�����

	//��������API  ��������һ��bool����
	BOOL bEat=	CreateProcess(
		_T("C:\\Windows\\SysWOW64\\cmd.exe"),
		szCmdLine,
		NULL,
		NULL,
		TRUE,
		CREATE_NO_WINDOW,
		NULL,
		NULL,
		&si,//��������  ����ָ��
		&pi 
	);

	
    return 0;
}

