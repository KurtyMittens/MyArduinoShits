 int leds[2] = {2, 3};
String username = "";
String password = "";
int state = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i =0 ; i < 2; i++){
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Enter your Username: ");
  while (Serial.available() == 0){
  }
    username = Serial.readString();
    username.trim();

   Serial.println("Enter your Password: ");
   while (Serial.available() == 0){
  }
    password = Serial.readString();
    password.trim();

  if((username.length()>0) && (password.length()>0)){
    if (username.equals("admin")){
      if (password.equals("admin")){
        Serial.println("GOODSHIT!");
        digitalWrite(leds[0], HIGH);
        digitalWrite(leds[1], LOW);
      }
      else {
        Serial.println("password WRONG");
        digitalWrite(leds[0], LOW);
        digitalWrite(leds[1], HIGH);
      }
    }
    else {
      Serial.println("username WRONG");
      digitalWrite(leds[0], LOW);
      digitalWrite(leds[1], HIGH);
      }
    }
}
