int SW = 9;
int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;

int generator = 0;

void show1() {
  digitalWrite(D, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void show2() {
  digitalWrite(C, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(A, LOW);
  digitalWrite(D, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void show3() {
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void show4() {
  digitalWrite(A, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(D, LOW);
  digitalWrite(F, LOW);
}

void show5() {
  digitalWrite(A, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(F, LOW);
}

void show6() {
  digitalWrite(A, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(D, LOW);
}


void setup() {
  pinMode(SW, INPUT_PULLUP);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
int button_read = digitalRead(SW);

if (button_read == 0) {
  generator = (random(1,7));
  delay(300);
  Serial.print("Number: ");
  Serial.println(generator);
}

if  (generator == 1) {
  show1();
}

else if (generator == 2) {
  show2();
}

else if (generator == 3) {
  show3();
}

else if (generator == 4) {
  show4();
}

else if (generator == 5) {
  show5();
}


else{
  show6();
}
delay(100);

}
