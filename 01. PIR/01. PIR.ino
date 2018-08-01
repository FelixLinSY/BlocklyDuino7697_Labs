/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Tue, 31 Jul 2018 15:59:58 GMT
 */



void setup()
{

  pinMode(8, INPUT);
  pinMode(7, OUTPUT);
}


void loop()
{
  if (digitalRead(8) == true) {
    digitalWrite(7, HIGH);

  }
  if (digitalRead(8) == false) {
    digitalWrite(7, LOW);

  }
}