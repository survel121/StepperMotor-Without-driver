int iRotate = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  iRotate = 0;
}

void loop() {
  // On fait un tour de moteur pas à pas dans le sens horaire et on fait un tour de moteur pas à pas dans le sens anti horaire
  // Et on fait ça en boucle!
  iRotate = 0;
  
  do{
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  delay(5);

  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  delay(5);

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

  delay(5);

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);

  delay(5);
  iRotate++;
  }
  while(iRotate <= 512); // 2048/4 pour actualiser iRotate une seule fois par cycle
  Serial.println(iRotate);



  iRotate = 0;

  do{
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);

  delay(5);

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

  delay(5);

  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  delay(5);

  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  delay(5);
  iRotate++;
  }
  while(iRotate <= 512); // 2048/4 pour actualiser iRotate une seule fois par cycle
  
}
