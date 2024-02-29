 void setup()
{ 
  pinMode( 8, OUTPUT);
  digitalWrite( 8, HIGH);
}
 
void loop()
{
  Reset();
}
void Reset()
{
  digitalWrite( 8, LOW);
}