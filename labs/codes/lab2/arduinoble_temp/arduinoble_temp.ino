#include <ArduinoBLE.h>
#include <DHTesp.h>

/** Initialize DHT sensor */
DHTesp dht;
/** Task handle for the light value read task */
//TaskHandle_t tempTaskHandle = NULL;
/** Pin number for DHT11 data pin */
int dhtPin = 8;

BLEService tempService("713D0000-503E-4C75-BA94-3148F18D941E"); // create a new BLE Temp service
// create temp characteristic and allow remote device to get notifications
//BLEByteCharacteristic tempCharacteristic("713D0000-503E-4C75-BA94-3148F18D941E", BLERead | BLENotify);
BLEStringCharacteristic tempCharacteristic("713D0002-503E-4C75-BA94-3148F18D941E", BLERead | BLENotify, 20);

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  // Initialize temperature sensor
  dht.setup(dhtPin, DHTesp::DHT11);


  Serial.begin(57600); // 115200);
  // while (!Serial); // removing this to allow it to work without serial connection

  if (!BLE.begin())                 // initialize the BLE device
  {                                 // 1 on success, 0 on failure
    Serial.println("Failed to start BLE!");
    while (1);                      // only wait out is to kill execution
  }

  BLE.setLocalName("HILL981");// set the local value used when advertising
  BLE.setAdvertisedService(tempService);// set the advertised service UUID used when advertising to the value of the BLEService provided
  
  tempService.addCharacteristic(tempCharacteristic);// add the characteristics to the service

  BLE.addService(tempService);       // add the service

  /*
   ledCharacteristic.writeValue(0);
   buttonCharacteristic.writeValue(0);
   */

  BLE.advertise();                  // start advertising
  
  Serial.println("Bluetooth device active, waiting for connections...");
}

//Celsius to Fahrenheit conversion
double Fahrenheit(double celsius)
{
  return 1.8 * celsius + 32;
}

// the loop function runs over and over again forever
void loop() {
  // make it blink
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  Serial.println("HELLO WORLD");

  BLE.poll();                       // poll for BLE events

  TempAndHumidity lastValues = dht.getTempAndHumidity();

  if (!isnan(lastValues.temperature)) {
    String temperature = String(Fahrenheit(lastValues.temperature), 2);
    String humidity = String(lastValues.humidity, 2);
    Serial.println("Temperature: " + temperature);
    Serial.println("Humidity: " + humidity);
       
    tempCharacteristic.writeValue("T" + temperature + "D");
    tempCharacteristic.writeValue("H" + humidity + "D");
  }
}
