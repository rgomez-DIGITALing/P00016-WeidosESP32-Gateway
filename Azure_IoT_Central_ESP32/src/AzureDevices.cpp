#include "AzureDevices.h"
#include <ArduinoBearSSL.h>

#ifdef USING_ETHERNET_CLIENT
#include <Ethernet.h>
EthernetClient client0(1);
EthernetClient client1(2);
EthernetClient client2(3);
EthernetClient client3(4);
EthernetClient client4(5);
EthernetClient client5(6);
#endif

#ifdef USING_WIFI_CLIENT
#include <WiFiClient.h>
WiFiClient client0(1);
WiFiClient client1(2);
WiFiClient client2(3);
WiFiClient client3(4);
WiFiClient client4(5);
WiFiClient client5(6);
#endif


AzureIoTDevice* Azure0;
AzureIoTDevice* Azure1;
AzureIoTDevice* Azure2;
AzureIoTDevice* Azure3;
AzureIoTDevice* Azure4;
AzureIoTDevice* Azure5;


#define MQTT_CLIENT_BUFFER_SIZE 3000

void createObjects(){
    BearSSLClient* bear_ssl_client0 = new BearSSLClient(client0);
    MQTTClient* mqttClient0 = new MQTTClient(MQTT_CLIENT_BUFFER_SIZE);
    Azure0 = new AzureIoTDevice(mqttClient0, bear_ssl_client0);

    BearSSLClient* bear_ssl_client1 = new BearSSLClient(client1);
    MQTTClient* mqttClient1 = new MQTTClient(MQTT_CLIENT_BUFFER_SIZE);
    Azure1 = new AzureIoTDevice(mqttClient1, bear_ssl_client1);

    BearSSLClient* bear_ssl_client2 = new BearSSLClient(client2);
    MQTTClient* mqttClient2 = new MQTTClient(MQTT_CLIENT_BUFFER_SIZE);
    Azure2 = new AzureIoTDevice(mqttClient2, bear_ssl_client2);

    BearSSLClient* bear_ssl_client3 = new BearSSLClient(client3);
    MQTTClient* mqttClient3 = new MQTTClient(MQTT_CLIENT_BUFFER_SIZE);
    Azure3 = new AzureIoTDevice(mqttClient3, bear_ssl_client3);

    BearSSLClient* bear_ssl_client4 = new BearSSLClient(client4);
    MQTTClient* mqttClient4 = new MQTTClient(MQTT_CLIENT_BUFFER_SIZE);
    Azure4 = new AzureIoTDevice(mqttClient4, bear_ssl_client4);

    BearSSLClient* bear_ssl_client5 = new BearSSLClient(client5);
    MQTTClient* mqttClient5 = new MQTTClient(MQTT_CLIENT_BUFFER_SIZE);
    Azure5 = new AzureIoTDevice(mqttClient5, bear_ssl_client5);

    return;
}

char emModelId[60] = "dtmi:conexiones:EnergyMeter_6bm;1";
char gwModelId[60] = "dtmi:conexionesSmartFactory:gateway_62;1";
char gatewayId[50] = IOT_CONFIG_DEVICE_GATEWAY_ID;
char* scopeId = DPS_ID_SCOPE;

void configureAzureDevices(){
    Azure0->usingSasToken(IOT_CONFIG_DEVICE_GATEWAY_KEY);
    Azure0->setDeviceId(IOT_CONFIG_DEVICE_GATEWAY_ID);
    Azure0->setDpsScopeId(scopeId);
    Azure0->setModelId(gwModelId);
    Azure0->init();
  
    Azure1->usingSasToken(IOT_CONFIG_DEVICE_1_KEY);
    Azure1->setDeviceId(IOT_CONFIG_DEVICE_1_ID);
    Azure1->setDpsScopeId(scopeId);
    Azure1->setGatewayId(gatewayId);
    Azure1->setModelId(emModelId);
    Azure1->init();

    Azure2->usingSasToken(IOT_CONFIG_DEVICE_2_KEY);
    Azure2->setDeviceId(IOT_CONFIG_DEVICE_2_ID);
    Azure2->setDpsScopeId(scopeId);
    Azure2->setGatewayId(gatewayId);
    Azure2->setModelId(emModelId);
    Azure2->init();

    Azure3->usingSasToken(IOT_CONFIG_DEVICE_3_KEY);
    Azure3->setDeviceId(IOT_CONFIG_DEVICE_3_ID);
    Azure3->setDpsScopeId(scopeId);
    Azure3->setGatewayId(gatewayId);
    Azure3->setModelId(emModelId);
    Azure3->init();


    Azure4->usingSasToken(IOT_CONFIG_DEVICE_4_KEY);
    Azure4->setDeviceId(IOT_CONFIG_DEVICE_4_ID);
    Azure4->setDpsScopeId(scopeId);
    Azure4->setGatewayId(gatewayId);
    Azure4->setModelId(emModelId);
    Azure4->init();


    Azure5->usingSasToken(IOT_CONFIG_DEVICE_5_KEY);
    Azure5->setDeviceId(IOT_CONFIG_DEVICE_5_ID);
    Azure5->setDpsScopeId(scopeId);
    Azure5->setGatewayId(gatewayId);
    Azure5->setModelId(emModelId);
    Azure5->init();
}



AzureIoTDevice* azureDevices[6];

void fillArray(){
    azureDevices[0] = Azure0;
    azureDevices[1] = Azure1;
    azureDevices[2] = Azure2;
    azureDevices[3] = Azure3;
    azureDevices[4] = Azure4;
    azureDevices[5] = Azure5;
    return;
}
