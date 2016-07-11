double rpm = 128.0;
double voltage = 40.5;
double current = 145.7;
double temperature = 40.8;
double sign = 1.0;
double extra = 1.0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.print("[2.1|" + String(rpm, 1) + "]");
  Serial.print("[3.1|" + String(current, 1) + "]");
  Serial.print("[3.2|" + String(current, 1) + "]"); // extra measurement of current
  Serial.print("[4.1|" + String(voltage, 1) + "]");
  Serial.print("[5.1|" + String(temperature, 1) + "]");
  Serial.print("[5.2|" + String(temperature, 1) + "]");
  Serial.print("[5.3|" + String(temperature, 1) + "]");
  Serial.print("[6.4|" + String(extra, 1) + "]"); // extra measurement
  Serial.print("Invalid frame"); // invalid frame 
  double add = 0.1 * sign;
  rpm += add;
  voltage += add;
  current += add;
  temperature += add;
  extra += add;
  if(sign > 0)
    sign = -1.0;
  else
    sign = 1.0;
}
