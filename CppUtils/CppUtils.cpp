// CppUtils.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MD5.h"
#include "CppDebug.h"
#include "Version.h"

BOOL IsProcessExists(const void *processSource, DWORD dwBufferSize);

void *memmem(const void *haystack, size_t n, const void *needle, size_t m);


int _tmain(int argc, _TCHAR* argv[])
{

    Version v1(TEXT("3.4.4.4"));
    Version v2(TEXT("2.4.4.4"));

    if(v1 > v2)
    {
        _tprintf(TEXT("1"));
    }
    else
    {
        _tprintf(TEXT("2"));
    }
	return 0;
}

