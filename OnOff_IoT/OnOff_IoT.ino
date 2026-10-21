
#define BLYNK_TEMPLATE_ID "TMPL6z5cC7iWf"
#define BLYNK_TEMPLATE_NAME "ON OFF Relay"
#define BLYNK_AUTH_TOKEN "8K8xffKRoh0lzzpmYOODeJQWZ3KbTR_C"


#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "suryanaA1.6";
char pass[] = "KostSuryana";

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