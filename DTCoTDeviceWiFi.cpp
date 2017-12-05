#include <DTCoTDeviceWiFi.h>




/*DeviceWiFi::DeviceWiFi() {

}*/

void DTCoT::DeviceWiFi::begin(char * ssid, char * password) {
    delay(10);

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
    }
}

Client * DTCoT::DeviceWiFi::getClient() {
	return &wifiClient;
}