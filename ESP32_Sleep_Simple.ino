void setup() {
  Serial.begin(115200);
  while (!Serial);
  Serial.println("Starting Test");
  delay(5000);
  Serial.println("Starting deep-sleep period...");
  esp_deep_sleep(1000000LL * 30);   // Set sleep duration to 30-secs
  esp_deep_sleep_start();           // Sleep for 30-secs
}

void loop() {
 // Will never get here...!
}
