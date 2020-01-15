// these constants describe the pins. They won't change:
const int groundpin = 18;             // analog input pin 4 -- ground
const int powerpin = 19;              // analog input pin 5 -- voltage
const int xpin = A0;                  // x-axis of the accelerometer
const int ypin = A1;                  // y-axis
int  xval,yval;                  

int D1=8;     //output1 for HT12E IC
int D2=9;     //output1 for HT12E IC
int D3=10;    //output1 for HT12E IC
int D4=11;    //output1 for HT12E IC

void setup() {
  // initialize the serial communications:
  Serial.begin(9600);

  
  pinMode(groundpin, OUTPUT);
  pinMode(powerpin, OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  digitalWrite(groundpin, LOW);
  digitalWrite(powerpin, HIGH);
}

void loop() {
  // print the sensor values:
  xval=analogRead(xpin);
  Serial.print(xval);
  // print a tab between values:
  Serial.print("\t");
  yval=analogRead(ypin);
  Serial.print(yval);
  // print a tab between values:
  Serial.print("\t");
 
  // delay before next reading:
  delay(2000);

  if(xval<300)  //Change the value for adjusting sensitivity
  forward();
  else if(xval>350)  //Change the value for adjusting sensitivity
  backward();
  else if(yval<300)  //Change the value for adjusting sensitivity
  left();
  else if(yval>350)  //Change the value for adjusting sensitivity
  right();
  else
  stop_();
  Serial.println();
}

void stop_()
{
  //Serial.println("");
  Serial.println("STOP");
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
}
void forward()
{
  //Serial.println("");
  Serial.println("Forward");
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, LOW);
}
void backward()
{
  //Serial.println("");
  Serial.println("Backward");
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH);
}
void left()
{
  //Serial.println("");
  Serial.println("Left");
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH);
}
void right()
{
  //Serial.println("");
  Serial.println("Right");
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, LOW);
}
