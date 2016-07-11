// Program umożliwia konfigurowanie HC-06 przy użyciu komend AT

#include <SoftwareSerial.h>
SoftwareSerial HC06Serial(2, 3); // RX, TX

void setup()
{
  Serial.begin(9600);
  Serial.println("Pisz komendy AT!");

  HC06Serial.begin(9600);
}

void loop()
{
  if (HC06Serial.available() > 0)
  {
    Serial.write(HC06Serial.read());
  }

  if (Serial.available() > 0)
  {
    HC06Serial.write(Serial.read());
  }
}
