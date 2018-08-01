/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Tue, 31 Jul 2018 15:59:43 GMT
 */



void setup()
{
  Serial.begin(9600);


  pinMode(4, INPUT);
}


void loop()
{
  Serial.print("土壤濕度讀數：");
  Serial.print(analogRead(A0));
  if (digitalRead(4) == true) {
    Serial.println("    土壤濕度過乾");

  } else {
    Serial.println("    土壤濕度正常");

  }
  delay(1000);
}