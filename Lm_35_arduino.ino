float temp;
int a;
void setup() {
  Serial.begin(9600);
}

void loop() {
  temp=analogRead(A0);
  temp=temp*0.4882125;
  a=analogRead(A0);
//  Serial.print("temperature: ");
//  Serial.print(temp);
//  Serial.print("*C");.octuioyioyuoyuitg
  
  Serial.println(temp);
  delay(20);
}
