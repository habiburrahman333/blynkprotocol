
#define BLYNK_TEMPLATE_ID "xxxxxx"
#define BLYNK_TEMPLATE_NAME "xxxxxx"
#define BLYNK_AUTH_TOKEN "xxxxxxxxx"


#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "xxxxxxxx";
char pass[] = "xxxxxxxx";

const int outputPin = 12;

BLYNK_WRITE(V0) {
  int state = param.asInt();

  digitalWrite(outputPin, state);

  Serial.print("Switch: ");
  Serial.println(state);
}

void setup() {
  Serial.begin(115200);

  pinMode(outputPin, OUTPUT);
  digitalWrite(outputPin, LOW);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}
