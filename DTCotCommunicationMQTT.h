#ifndef MQTTCommunication_h_
#define MQTTCommunication_h_


#include <Adafruit_MQTT.h>
#include <Adafruit_MQTT_Client.h>

#include "DTCoTPrivate.h"
#include "DTCoTCommunicationBase.h"

namespace DTCoT {
	
	
	class CoTCommunicationMQTT: public CoTCommunicationBase { 
	public:
		CoTCommunicationMQTT(const CoTDeviceBase& device
			, const CoTConfigBase& config
			, const CoTAuthBase& authentication );
	
	virtual void init();
	
	private:
		class Adafruit_MQTT_Client mqtt;
	
	/*class MQTTCommunication : public CommunicationBase {
	public:
		MQTTCommunication(DeviceBase & device, const char * server, const char * username, const char * key);
		
		virtual void init();
		
		virtual void send(const char * key, const char * value);
		

		const char * username;
	*/
};

}

#endif // MQTTCommunication_h_
