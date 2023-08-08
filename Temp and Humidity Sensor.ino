#include <dht11.h> //includes the DHT11 library
#define DHT11PIN 7 //the signal line pin on our DHT11 sensor

dht11 DHT11; //DHT11 sensor
void setup() {
  Serial.begin(9600); //starts serial comunication
}

void loop() {
  Serial.println(); //prints a new line before every print segment

  int chk = DHT11.read(DHT11PIN); //reads incoming DHT11 sensor data

  //serial.print(content): prints the content in the brackets to the
  //serial monitor.
  Serial.print("Humidity percentage: ");
  Serial.println((float)DHT11.humidity, 2); //prints humidity

  Serial.print("Temperature celcius: ");
  Serial.println((float)DHT11.temperature, 2); //prints temperature

  delay(1000); //the delay of the generation of both temperature and humidity
  //by the specified milliseconds.
}

