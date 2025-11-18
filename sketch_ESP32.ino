#include <WiFi.h>

const char* ssid = "RED1_5G";      
const char* password = ""; 

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("\nConectando a WiFi...");

  WiFi.begin(ssid, password);

   while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\n✅ Conectado al WiFi!");
  Serial.print("Dirección IP: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  int valorA = analogRead(sensorAnalogico);

  int valorD = digitalRead(sensorDigital);

  Serial.print("Sensor analógico (GPIO34): ");
  Serial.print(valorA);
  Serial.print(" | Sensor digital (GPIO18): ");
  Serial.println(valorD);

  delay(500); // Lee cada medio segundo
}

