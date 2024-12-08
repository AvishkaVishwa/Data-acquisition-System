#include <DHT.h>

// Pin Definitions
#define SOIL_MOISTURE_PIN A0
#define MQ135_PIN A1
#define LDR_PIN A2
#define DHT_PIN 2
#define FAN_PIN 3
#define LIGHT_PIN 4

// DHT Sensor Setup
#define DHTTYPE DHT11
DHT dht(DHT_PIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  
  // Initialize Pins
  pinMode(SOIL_MOISTURE_PIN, INPUT);
  pinMode(MQ135_PIN, INPUT);
  pinMode(LDR_PIN, INPUT);
  pinMode(FAN_PIN, OUTPUT);
  pinMode(LIGHT_PIN, OUTPUT);
  
  dht.begin();
}

void loop() {
  // Read Sensor Values
  int soilMoisture = analogRead(SOIL_MOISTURE_PIN);
  int co2Level = analogRead(MQ135_PIN);
  int lightIntensity = analogRead(LDR_PIN);
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();
  
  // Scale Sensor Values
  soilMoisture = map(soilMoisture, 0, 1023, 0, 100); // Convert to percentage
  co2Level = map(co2Level, 0, 1023, 0, 1000); // Convert to approximate PPM
  lightIntensity = map(lightIntensity, 0, 1023, 0, 1000); // Convert to Lux-like scale

  // Send Data to LabVIEW
  Serial.print(soilMoisture); Serial.print(",");
  Serial.print(co2Level); Serial.print(",");
  Serial.print(lightIntensity); Serial.print(",");
  Serial.print(temp); Serial.print(",");
  Serial.println(humidity);

  // Actuator Control Logic
  if (co2Level > 800 || temp > 30) {
    digitalWrite(FAN_PIN, HIGH);
  } else {
    digitalWrite(FAN_PIN, LOW);
  }

  if (lightIntensity < 300) {
    digitalWrite(LIGHT_PIN, HIGH);
  } else {
    digitalWrite(LIGHT_PIN, LOW);
  }

  delay(1000); // Update every second
}
