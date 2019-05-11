//**********************************************************************
//
// Copyright (C) 2013-2014 HuangYang(huangyangh2004@gmail.com) LuKan(SimplyKan@gmail.com)
// All rights reserved.
//
// This copy of JeeluSocketEngine is licensed to you under the terms described 
// in the LICENSE.txt file included in this distribution.
//
//**********************************************************************

#ifndef JEELUSOCKETENGINE_ENGINEBASETYPE_H
#define JEELUSOCKETENGINE_ENGINEBASETYPE_H
#pragma once

typedef unsigned char byte;
typedef char  int8;
typedef short int16;
typedef int   int32;
typedef unsigned char  uint8;
typedef unsigned short uint16;
typedef unsigned int   uint32;
typedef unsigned long  ulong;
typedef unsigned short ushort;
typedef float	f32;
typedef double	f64;

#ifdef _WIN32
	typedef __int64				int64;
	typedef unsigned __int64	uint64;
	#if _MSC_VER <= 1200
		typedef int  bool;
		typedef 0    false;
		typedef 1    true;
	#endif
#else
	typedef long long			int64;
	typedef unsigned long long	uint64;
#endif

#endif