void setup()
{
  pinMode(13, OUTPUT);
  pinMode(10,OUTPUT);
}
int red = 13;
int green =  10;
int c=1;
void loop()
{
  digitalWrite(green,HIGH);
  delay(2000);
  digitalWrite(green,LOW);
  while(c==1)
  {
  digitalWrite(red,HIGH);
  delay(100);
  digitalWrite(red,LOW);
  delay(100);
}
}