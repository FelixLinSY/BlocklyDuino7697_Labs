/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Tue, 31 Jul 2018 16:00:18 GMT
 */



int relay_state;

void setup()
{
  Serial.begin(9600);

  pinMode(8, OUTPUT);
  digitalWrite(8, LOW);
  relay_state = 0;
  pinMode(6, INPUT);
}


void loop()
{
  if (digitalRead(6) == HIGH) {
    delay(100);
    if (digitalRead(6) == HIGH) {
      if (relay_state == 1) {
        relay_state = 0;
        digitalWrite(8, LOW);
        Serial.println("斷開繼電器線圈");

      } else {
        relay_state = 1;
        digitalWrite(8, HIGH);
        Serial.println("導通繼電器線圈");

      }

    }

  }
}