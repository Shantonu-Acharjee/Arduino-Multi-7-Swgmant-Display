 int a =0;
 int b =1;
 int c =2;
 int d =3;
 int e =4;
 int f =5;
 int g =6;

 int gnd1 =7;
 int gnd2 =8;

void setup(){
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  
  pinMode(gnd1,OUTPUT);
  pinMode(gnd2,OUTPUT);
}



void loop(){
  
  //1
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);     //12
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  digitalWrite(gnd1,0);
  digitalWrite(gnd2,1);
  //1

delay(300);
  //2
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,1);
  digitalWrite(gnd1,1);
  digitalWrite(gnd2,0);
  //2
delay(300);
  
}
