#include <Wire.h>
void setup() {
Serial.begin (115200);
while (!Serial)
{
}
Serial.println ();
Serial.println ("I2C Scanner. Scanning ...");
byte count = 0;
Wire.begin();
for (byte i = 1; i < 120; i++)
{
Wire.beginTransmission (i);
if (Wire.endTransmission () == 0)
{
Serial.print ("Ditemukan Alamat: ");
Serial.print (i, DEC);
Serial.print (" (0x");
Serial.print (i, HEX);
Serial.println (")");
count++;
delay (1);
}
}
Serial.println ("Selesai.");
Serial.print ("Ditemukan ");
Serial.print (count, DEC);
Serial.println (" device(s).");
}
void loop()
{
}

