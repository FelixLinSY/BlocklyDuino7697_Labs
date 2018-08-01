/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Tue, 31 Jul 2018 15:59:23 GMT
 */



void setup()
{
  Serial.begin(9600);


  pinMode(4, INPUT);
}


void loop()
{
  Serial.print(digitalRead(4));
  Serial.print("      ");
  Serial.println(analogRead(A0));
  delay(1000);
}