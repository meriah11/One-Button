int red1 = 22;
int red2 = 30;
int red3 = 33;
int red4 = 36;

int green1 = 24;
int green2 = 31;
int green3 = 34;
int green4 = 37;

int blue1 = 26;
int blue2 = 32;
int blue3 = 35;
int blue4= 38;

int column1 = 42;
int column2 = 43;
int column3 = 44;
int column4 = 45;

int row1 = 46;
int row1_2 = 46;
int row2 = 47;
int row3 = 48;
int row4 = 49;

int butC1 = 50;
int butC1_2 = 50;
int butC2 = 51;
int butC3 = 52;
int butC4 = 53;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(red3, OUTPUT);
  pinMode(red4, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(green3, OUTPUT);
  pinMode(green4, OUTPUT);
  pinMode(blue1, OUTPUT);
  pinMode(blue2, OUTPUT);
  pinMode(blue3, OUTPUT);
  pinMode(blue4, OUTPUT);
  pinMode(column1, OUTPUT);
  pinMode(column2, OUTPUT);
  pinMode(column3, OUTPUT);
  pinMode(column4, OUTPUT);
  pinMode(row1, INPUT);
  pinMode(row2, INPUT);
  pinMode(row3, INPUT);
  pinMode(row4, INPUT);
  pinMode(butC1, INPUT);
  pinMode(butC2, INPUT);
  pinMode(butC3, INPUT);
  pinMode(butC4, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red1, HIGH);
  delay(500);
  digitalWrite(green2, HIGH);
  delay(500);
  digitalWrite(blue3, HIGH);
  delay(500);
  digitalWrite(red4, HIGH);
  delay(500);
  digitalWrite(blue1, HIGH);
  delay(300);
  digitalWrite(blue2, HIGH);
  delay(300);
  digitalWrite(red3, HIGH);
  delay(300);
  digitalWrite(green4, HIGH);
  delay(150);
  digitalWrite(blue1, LOW);
  delay(150);
  digitalWrite(blue2, LOW);
  delay(150);
  digitalWrite(red3, LOW);
  delay(150);
  digitalWrite(green4, LOW);
  int i = 0;
  while(i < 4){
    digitalWrite(red1, LOW);
    delay(125);
    digitalWrite(green2, LOW);
    delay(125);
    digitalWrite(blue3, LOW);
    delay(125);
    digitalWrite(red4, LOW);
    delay(125);
    digitalWrite(red1, HIGH);
    delay(125);
   digitalWrite(green2, HIGH);
    delay(125);
    digitalWrite(blue3, HIGH);
    delay(125);
    digitalWrite(red4, HIGH);
    i++;
  }
  int j = 0;
  while(j < 10){
    digitalWrite(red1, LOW);
    delay(75);
    digitalWrite(green2, LOW);
    delay(75);
    digitalWrite(blue3, LOW);
    delay(75);
    digitalWrite(red4, LOW);
    delay(75);
    digitalWrite(red1, HIGH);
    delay(75);
   digitalWrite(green2, HIGH);
    delay(75);
    digitalWrite(blue3, HIGH);
    delay(75);
    digitalWrite(red4, HIGH);
    j++;
  }

  















}
