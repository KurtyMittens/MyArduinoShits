int leds[3] = {3,4,5};

// LED lights on and off but it goes back
void runback(int led[]) {
    int delayVal = 100;
    for (int i = 0; i < 3; i++){
      digitalWrite(led[i], HIGH);
      delay(delayVal);
      digitalWrite(led[i], LOW);
      if (i == 2) {
        for (int j = i; j >= 0; j--){
          digitalWrite(led[j], HIGH);
          delay(delayVal);
          digitalWrite(led[j], LOW);
        }
      }
    }
}

// my own Traffic Lights simulation
void traffic_lights(int led[]) {
  for (int i = 0; i < 3; i++){
    int delayVal;
    if (i == 0 || i == 2){
      delayVal = 25000;
    } 
    else {
      delayVal = 3000;
    }
    digitalWrite(led[i], HIGH);
    delay(delayVal);
    digitalWrite(led[i], LOW);
  }
}

// Christmas Lights pattern Alternate
void christmas_lights(int led[]){
  for (int i = 0; i < 2; i++){
    int delayVal = 100;
    if (i == 0){
      digitalWrite(led[i], HIGH);
      digitalWrite(led[i+2], HIGH);
      delay(delayVal);
      digitalWrite(led[i], LOW);
      digitalWrite(led[i+2], LOW);
    }
    else{
      digitalWrite(led[i], HIGH);
      delay(delayVal);
      digitalWrite(led[i], LOW);
    }
  }
}

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 3; i++){
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  runback(leds);
  // traffic_lights(leds);
  // christmas_lights(leds);
}
