#include "DTCoTPrivate.h"
#include "DTCoTDeviceNBIoT.h"

#include "DTCoTDebugOutput.h"

using namespace DTCoT;

#define DEBUG_PRINT(x) Serial.println(x)

CoTConfigDeviceNBIoT::CoTConfigDeviceNBIoT(
	const char* serverIP
	, const char* serverPort
	, const char* imsi
	, const char* password)
	:  _serverIP(serverIP), _serverPort(serverPort), 
		_imsi(imsi), _password(password), CoTConfigDevice()
{
}

const char* CoTConfigDeviceNBIoT::getServerIP() { 
	return _serverIP;
}

const char* CoTConfigDeviceNBIoT::getServerPort() { 
	return _serverPort;
}


const char* CoTConfigDeviceNBIoT::getIMSI() { 
	return _imsi;
}


const char* CoTConfigDeviceNBIoT::getPassword() { 
	return _password; 
}

CoTDeviceNBIoT::CoTDeviceNBIoT(	const CoTConfigDeviceNBIoT& nbiotConfig)
	: CoTDeviceBase( nbiotConfig)
{
}

bool CoTDeviceNBIoT::init() {
		DEBUG_PRINT("CoTDeviceNBIoT::init");

	/* TODO: Initialize Gimasi modem here */
	
	return false;
}

Client * DTCoT::CoTDeviceNBIoT::getClient() const {
	return (Client*)(&_nbiotClient);
}