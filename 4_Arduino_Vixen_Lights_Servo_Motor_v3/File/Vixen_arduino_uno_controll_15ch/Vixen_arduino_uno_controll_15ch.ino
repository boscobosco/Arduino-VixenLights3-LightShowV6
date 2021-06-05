int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;
int H = 9;
int I = 10;
int J = 11;
int K = 12;
int L = 13;
int M = A0;
int N = A1;
int O = A2;



int i = 0;
int incomingByte[15];

void setup()
{
  Serial.begin(9600);

  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
  pinMode(I, OUTPUT);
  pinMode(J, OUTPUT);
  pinMode(K, OUTPUT);
  pinMode(L, OUTPUT);
  pinMode(M, OUTPUT);
  pinMode(N, OUTPUT);
  pinMode(O, OUTPUT);
 


}

void loop()
{
  if (Serial.available() >= 15)
  {
    for (int i=0; i<15;i++)
    {
      incomingByte[i] = Serial.read();
    }                                       // Arduino pins
    digitalWrite(A, incomingByte[0]);  // Pin 2
    digitalWrite(B, incomingByte[1]);  // Pin 3
    digitalWrite(C, incomingByte[2]);  // Pin 4
    digitalWrite(D, incomingByte[3]);  // Pin 5
    digitalWrite(E, incomingByte[4]);  // Pin 6
    digitalWrite(F, incomingByte[5]);  // Pin 7
    digitalWrite(G, incomingByte[6]);  // Pin 8
    digitalWrite(H, incomingByte[7]);  // Pin 9
    digitalWrite(I, incomingByte[8]);  // Pin 10
    digitalWrite(J, incomingByte[9]);  // Pin 11
    digitalWrite(K, incomingByte[10]); // Pin 12
    digitalWrite(L, incomingByte[11]); // Pin 13
    digitalWrite(M, incomingByte[12]); // Pin A0
    digitalWrite(N, incomingByte[13]); // Pin A1
    digitalWrite(O, incomingByte[14]); // Pin A2
    
  }
}
