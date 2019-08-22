
/*pin untuk motor driver1*/
#define enA 6
#define in1 A1
#define in2 A2
#define in3 A3
#define in4 A4
#define enB 5

class mov
{
  public:
  //constructor
  mov();

  //fungsi untuk gerakan
  //parameter untuk mengatur pwm
  void forward(int x, int y);
  void backward(int x, int y);
  void turnLeft();
  void turnRight();
  void idle();
};

mov::mov()
{
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enB, OUTPUT);
}

void mov::forward(int x, int y)
{
    /*MD1*/
    //motor 1
    analogWrite(enA, x);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    //motor 2
    analogWrite(enB, y);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
}
void mov::backward(int x, int y)
{
    //motor 1
    analogWrite(enA, x);
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    //motor 2
    analogWrite(enB, y);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
}

void mov::idle()
{
    /*MD1*/
    //motor 1
    analogWrite(enA, 0);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
   //motor 2
    analogWrite(enB,0);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
}

void mov::turnLeft()
{
    //motor 1
    analogWrite(enA, 100);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    //motor 2
    analogWrite(enB, 100);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    delay(315);
    //motor 1
    analogWrite(enA, 70);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    //motor 2
    analogWrite(enB, 90);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    
}

void mov::turnRight()
{
    //motor 1
    analogWrite(enA, 100);
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    //motor 2
    analogWrite(enB, 100);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    delay(350);
    //motor 1
    analogWrite(enA, 70);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    //motor 2
    analogWrite(enB, 90);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
}
