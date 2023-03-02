int PIRSens = 2;
bool curr_State = false;
int LED = 7;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(PIRSens, INPUT);

  attachInterrupt(digitalPinToInterrupt(PIRSens), swap, CHANGE);
}

void loop()
{
  delay(1000);
}

void swap()
{
  curr_State = !curr_State;
  digitalWrite(LED, curr_State);
  Serial.println("Interrupted");
}
