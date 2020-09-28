#include <PubSubClient.h>

// Update these with values suitable for your network.
const char* ssid = "user-messages";
const char* password = "guest";
const char* mqtt_server = "192.168.99.100";
const char* mqtt_user = "guest";
const char* mqtt_pass = "guest";
PubSubClient client;

void callback(char[] , byte * payload, unsigned int length) {
  Serial.print("mensagem : %d");
}

void reconnect() {
  // Loop until we're reconnected
  Serial.println("In reconnect...");

  Serial.print("Attempting MQTT connection...");
  // Attempt to connect
  if (client.connect("Arduino_Gas", mqtt_user, mqtt_pass)) {
    Serial.println("connected");
    client.subscribe("user-messages");
    client.setCallback(callback);
  } else {
    Serial.print("failed, rc=");
    Serial.print(client.state());
    Serial.println(" try again in 5 seconds");
    delay(5000);
  }
}

void setup() {
  Serial.begin(9600);
  Serial.println("RabbitMQ Teste");
  client.setServer(mqtt_server, 32781);
}

void loop() {
  Serial.print("connecting ...");
  if (!client.connected()) {
    reconnect();
  }
  delay(5000);
}
