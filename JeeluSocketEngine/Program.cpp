//**********************************************************************
//
// Copyright (C) 2013-2014 HuangYang(huangyangh2004@gmail.com) LuKan(SimplyKan@gmail.com)
// All rights reserved.
//
// This copy of JeeluSocketEngine is licensed to you under the terms described 
// in the LICENSE.txt file included in this distribution.
//
//**********************************************************************

// Program.cpp : Defines the entry point for the DLL application.
//
#include "EngineOption.h"
BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
    return TRUE;
}


