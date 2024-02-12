int leds[3] = {6, 5, 3};

String message ="";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i< 3; i++){
    pinMode(leds[i], OUTPUT);
  }
}
w
void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()>0){
    message = Serial.readString();
    message.trim();
  }

  if (message.length()>0){
    if(message.equalsIgnoreCase("r")){
      Serial.println("Turn on RED");
      digitalWrite(leds[0], HIGH);
      digitalWrite(leds[1], LOW);
      digitalWrite(leds[2], LOW);
    }
    else if(message.equalsIgnoreCase("y")){
      Serial.println("Turn on YELLOW");
      digitalWrite(leds[0], LOW);
      digitalWrite(leds[1], HIGH);
      digitalWrite(leds[2], LOW);
    }
    else if(message.equalsIgnoreCase("g")){
      Serial.println("Turn on GREEN");
      digitalWrite(leds[0], LOW);
      digitalWrite(leds[1], LOW);
      digitalWrite(leds[2], HIGH);
    }
    else{
      Serial.println("No such Command");
    }
  }

}
