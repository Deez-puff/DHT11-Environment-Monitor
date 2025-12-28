#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define DHTPIN 2
#define DHTTYPE DHT11
#define BUZZER_PIN 8
#define TEMP_LIMIT 30

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);        // Start Serial Monitor
  lcd.init();
  lcd.backlight();
  dht.begin();

  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);

  Serial.println("Smart Room Monitoring System Started");

  lcd.setCursor(0, 0);
  lcd.print("Smart Room Sys");
  lcd.setCursor(0, 1);
  lcd.print("Initializing");
  delay(2000);
  lcd.clear();
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("ERROR: DHT Sensor not responding!");
    lcd.setCursor(0, 0);
    lcd.print("Sensor Error");
    lcd.setCursor(0, 1);
    lcd.print("Check Wiring");
    digitalWrite(BUZZER_PIN, LOW);
    return;
  }

  // LCD Output
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print((char)223);
  lcd.print("C  ");

  lcd.setCursor(0, 1);
  lcd.print("Hum: ");
  lcd.print(humidity);
  lcd.print("%  ");

  // Serial Monitor Output
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" C | ");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  // Alert
  if (temperature >= TEMP_LIMIT) {
    digitalWrite(BUZZER_PIN, HIGH);
    Serial.println("⚠ ALERT: High Temperature!");
    lcd.setCursor(10, 0);
    lcd.print("ALRT");
  } else {
    digitalWrite(BUZZER_PIN, LOW);
  }

  Serial.println("------------------------");
  delay(2000);
}
