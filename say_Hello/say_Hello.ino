int varKirim;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Hello");
varKirim = 65;
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("Data Biner : ");
Serial.println(varKirim, BIN);
delay(1000);

Serial.print("Data Hexa : ");
Serial.println(varKirim, HEX);
delay(1000);

Serial.print("Data Oktal : ");
Serial.println(varKirim, OCT);
delay(1000);

Serial.print("Data Desimal : ");
Serial.println(varKirim, DEC);
delay(1000);

Serial.println("");

}
