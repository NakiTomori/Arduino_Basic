void setup() {
  // put your setup code here, to run once:
  //pinMode(13,OUTPUT);
  //pinMode(12,OUTPUT);
  //pinMode(11,OUTPUT);
  //pinMode(10,OUTPUT);
  //pinMode(9,OUTPUT);
  //pinMode(8,OUTPUT);
  //pinMode(7,OUTPUT);
  //pinMode(6,OUTPUT);
  for(int i = 13; i>=6;i=i-1)
    pinMode(i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(13,HIGH);
  //digitalWrite(8,HIGH);
  //delay(1000);
  //digitalWrite(13,LOW);
  //digitalWrite(8,LOW);
  //delay(500);
  //for(int i = 13; i>=6;i=i-1){
    //digitalWrite(i,HIGH);
    //delay(100);
    //digitalWrite(i,LOW);
    //delay(100);
  //}
  //int j = 6;
  //for(int i = 13; i >=6;i=i-1){
      //digitalWrite(i,HIGH);
      //digitalWrite(j,HIGH);
      //delay(200);
      //digitalWrite(i,LOW);
      //digitalWrite(j,LOW);
      //delay(200);
      //j = j + 1;
    //}
  int so = 17;
  while(so != 0)
    if(so >= 128){
      so = so - 128;
      digitalWrite(6,HIGH);
    }
    else if(so >=64 && so < 128){
      so = so - 64;
      digitalWrite(7,HIGH);
    }
    else if(so >=32 && so < 64){
      so = so - 32;
      digitalWrite(8,HIGH);
    }
    else if(so >=16 && so < 32){
      so = so - 16;
      digitalWrite(9,HIGH);
    }
    else if(so >=8 && so < 16){
      so = so - 8;
      digitalWrite(10,HIGH);
    }
    else if(so >=4 && so < 8){
      so = so - 4;
      digitalWrite(11,HIGH);
    }
    else if(so >=2 && so < 4){
      so = so - 2;
      digitalWrite(12,HIGH);
    }
    else if(so >=1 && so < 2){
      so = so - 1;
      digitalWrite(13,HIGH);
    }
}

