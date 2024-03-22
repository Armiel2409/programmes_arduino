#define LEDJAUNE 14
#define LEDROUGE 13


void setup() 
{

  pinMode(LEDROUGE, OUTPUT);
  pinMode(LEDJAUNE, OUTPUT);
  pinMode(12, INPUT);

  attachInterrupt(1, REPONSE_INTERRUPTION, RISING); // interruption INT0 sur PCINT12 = pin réelle 18

}

void loop() 
{
  digitalWrite(LEDJAUNE, HIGH);
  delay(50);
  digitalWrite(LEDJAUNE, LOW);
  delay(700);

}

void REPONSE_INTERRUPTION()
{
  digitalWrite(LEDROUGE, HIGH);
  delay(500);
  digitalWrite(LEDROUGE, LOW);
}