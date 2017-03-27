

int pins[] = {-1, 10, 15, 9, 13, 2, 8, 3, 6, 14, 4, 5, 11, 7, 12, 16, 17};

int rows[] = {-1, pins[1], pins[2], pins[5], pins[4], pins[3], pins[7], pins[6], pins[8]};
int cols[] = {-1, pins[9], pins[13], pins[11], pins[12], pins[10], pins[14], pins[15], pins[16]};

int delS = 100;
int wait = 5000;
int delL = 200;

void setup() {
  for (int i = 1; i <= 8; i++) {
    pinMode(cols[i], OUTPUT);
    pinMode(rows[i], OUTPUT);
  }
  //DO NOT UNDER ANY REASON TOUCH THIS BUTTON CONNECTED TO THE UNO BOARD OR WE WILL HAVE TO ELIMINATE YOU!!!!11!!1
  pinMode(18,INPUT);
}



void loop() {
    
  for (int i = 1; i <= 8; i++) {

      digitalWrite(rows[i], HIGH);
      digitalWrite(cols[i], LOW);
    delay(delL);
  }

  for (int t = 0; t < 6; t++) {

    for (int j = 1; j <= 8; j++) {
    digitalWrite(rows[j], LOW);
    }
    for (int j = 1; j <= 8; j++) {
    digitalWrite(cols[j], HIGH);
    }
    
    delay(delS);

    for (int j = 1; j <= 8; j++) {
    digitalWrite(rows[j], HIGH);
    }
    for (int j = 1; j <= 8; j++) {
    digitalWrite(cols[j], LOW);
    }
    
  delay(delS);
    }
  
  for (int i = 1; i <= 8; i++) {
      digitalWrite(cols[i], HIGH);
    delay(delL);
  }
  
  for (int t = 0; t < 6; t++) {
    for (int j = 1; j <= 8; j++) {
    digitalWrite(rows[j], HIGH);
    }
    for (int j = 1; j <= 8; j++) {
    digitalWrite(cols[j], LOW);
    }
    delay(delS);
    for (int j = 1; j <= 8; j++) {
    digitalWrite(rows[j], HIGH);
    }
    for (int j = 1; j <= 8; j++) {
    digitalWrite(cols[j], HIGH);
    }
    delay(delS);
    }
  for (int i = 1; i <= 8; i++) {
      digitalWrite(cols[i], LOW);
    delay(delL);
  }

  for (int t = 0; t < 6; t++) {

    for (int j = 1; j <= 8; j++) {
    digitalWrite(rows[j], LOW);
    }
    for (int j = 1; j <= 8; j++) {
    digitalWrite(cols[j], HIGH);
    }
    
    delay(delS);

    for (int j = 1; j <= 8; j++) {
    digitalWrite(rows[j], HIGH);
    }
    for (int j = 1; j <= 8; j++) {
    digitalWrite(cols[j], LOW);
    }
    
  delay(delS);
    }

    for (int i = 1; i <= 8; i++) {
      digitalWrite(rows[i], LOW);
    delay(delL);
  }
  //We broke it!
  for (int c = 0; c < 1000; c++){
  delay(10);
  digitalWrite(cols[random(1,8)],HIGH);
  digitalWrite(rows[random(1,8)],HIGH);
  digitalWrite(cols[random(1,8)],LOW);
  digitalWrite(rows[random(1,8)],LOW);
  }
  delay(wait);
}

