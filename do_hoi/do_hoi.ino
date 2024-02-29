void setup() {
  // put your setup code here, to run once:
  for(int i = 13; i>=6;i=i-1)
    pinMode(i,OUTPUT);
}

void Dec2bin(int x) {
  // put your main code here, to run repeatedly:
  int m = 6;
  while(x != 0){
    if(x % 2 != 0){
      digitalWrite(13,HIGH);;
      x = x - 1;
    }
    for(int i = 7; i>=1;i=i-1){
      if(x >= pow(2,i)){
        x = x - pow(2,i);
        digitalWrite(m,HIGH);
      }
      m = m +1 ;    
    }
    for(int i = 13; i >=6;i=i-1){
      delay(50);
      digitalWrite(i,LOW);
    }
  }
}

void loop()
{
  int x = 255;
  while(x>0)
  {
    Dec2bin(x);
    x = x >>1;  
  }
}


