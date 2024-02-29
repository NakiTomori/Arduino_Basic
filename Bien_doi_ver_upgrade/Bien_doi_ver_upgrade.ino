void setup() {
  // put your setup code here, to run once:
  for(int i = 13; i>=6;i=i-1)
    pinMode(i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int so = 0;
  int m = 6;
  while(so != 0){
    if(so % 2 != 0){
      digitalWrite(13,HIGH);
      so = so - 1;
    }
    for(int i = 7; i>=1;i=i-1){
      if(so >= pow(2,i)){
        so = so - pow(2,i);
        digitalWrite(m,HIGH);
      }
      m = m +1 ;    
    }
  }
}


