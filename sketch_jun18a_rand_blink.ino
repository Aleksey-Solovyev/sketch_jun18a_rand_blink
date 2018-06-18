double rnum;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  Serial.println("Hello, World!");
  pinMode(LED_BUILTIN, OUTPUT);
  randomSeed(analogRead(0));
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  rnum = random(100, 1000);
  Serial.println("Delay is:");
  Serial.println(rnum);
  delay(rnum);
  
  Serial.println("It works!");
  delay(rnum);
  
  Serial.println("LED ON");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(rnum);
  
  Serial.println("LED OFF");
  digitalWrite(LED_BUILTIN, LOW);
  delay(rnum);

}
