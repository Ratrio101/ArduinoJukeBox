#define PIEZO 13

#define BUTTON_DDIEZ 2
#define BUTTON_F 3
#define BUTTON_FDIEZ 4
#define BUTTON_ADIEZ 5

void setup() {
  for (int i = 2; i <= 10; i++) {
    pinMode(i, INPUT_PULLUP);
  }
  pinMode(PIEZO, OUTPUT);
}

void loop() {
  while (digitalRead(BUTTON_DDIEZ) == LOW)
  {
    tone(PIEZO, 1245, 100);
  }
  while (digitalRead(BUTTON_F) == LOW)
  {
    tone(PIEZO, 1397, 100);
  }

  while (digitalRead(BUTTON_FDIEZ) == LOW)
  {
    tone(PIEZO, 1480, 100);
  }

  while (digitalRead(BUTTON_ADIEZ) == LOW)
  {
    tone(PIEZO, 1865, 100);
  }


  noTone(PIEZO);
}