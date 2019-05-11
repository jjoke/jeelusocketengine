#pragma once
#include "EngineOption.h"

class JEELUSOCKETENGINE_API CJeeluSocketEngine
{
public:
	CJeeluSocketEngine(void);
	virtual ~CJeeluSocketEngine(void);
	
	virtual bool Open(const char * configXml) = 0;
	virtual bool Close() = 0;

	virtual bool AddTcpServer(const char *ServerName,const char *configXml) = 0;
	virtual bool AddTcpClient(const char *ClientName,const char *configXml) = 0;
};

