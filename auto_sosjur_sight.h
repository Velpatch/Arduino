// mendifinisiakn pin untuk ultrasonic
#define echoPin 13
#define trigPin 12


//vairiable untuk pengukuran jarak
long distance, cm;
int verify;


class sight
{
  public:
  sight();

  void scan(long x);
};

sight::sight()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void sight::scan(long x)
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  distance=pulseIn(echoPin, HIGH);
  cm=(distance/2)*0.0343;
  Serial.print(cm);
  Serial.println("cm");
  //verify=0;
  if(cm<=x)
  {
    verify=1;
  }
  else
  {
    verify=0;
  }

    Serial.println(verify);
}
