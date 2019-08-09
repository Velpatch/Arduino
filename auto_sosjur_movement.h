
/*pin untuk motor driver1*/
#define enA 6
#define in1 A1
#define in2 A2
#define in3 A3
#define in4 A4
#define enB 5

/*pin untuk motor driver2*/
#define enA2 11
#define in12 4
#define in22 3
#define in32 2
#define in42 1
#define enB2 10

class mov
{
  public:
  //constructor
  mov();

  //fungsi untuk gerakan
  void forward(int x, int y, int z, int i);
  void backward(int x, int y);
  void turnLeft(int x, int y);
  void turnRight(int x, int y);
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

void mov::forward(int x, int y, int z, int i)
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

    /*MD2*/
    //motor 1
    analogWrite(enA2, z);
    digitalWrite(in12, HIGH);
    digitalWrite(in22, LOW);
    //motor 2
    analogWrite(enB2, i);
    digitalWrite(in32, HIGH);
    digitalWrite(in42, LOW);
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

    /*MD2*/
    //motor 1
    analogWrite(enA2, 0);
    digitalWrite(in12, LOW);
    digitalWrite(in22, LOW);
   //motor 2
    analogWrite(enB2,0);
    digitalWrite(in32, LOW);
    digitalWrite(in42, LOW);
}

void mov::turnLeft(int x, int y)
{
    //motor 1
    analogWrite(enA, x);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    //motor 2
    analogWrite(enB, y);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
}

void mov::turnRight(int x, int y)
{
    //motor 1
    analogWrite(enA, x);
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    //motor 2
    analogWrite(enB, y);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
}
