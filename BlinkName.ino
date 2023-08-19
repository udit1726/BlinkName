void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // setting built-in led as output
}

// creating a new function for blinking dot in Morse code
void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300); // Shorter delay for dots
  digitalWrite(LED_BUILTIN, LOW);
  delay(900);
}

// creating a new function for blinking dash in Morse code
void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

void loop() {

  // My name:     UDIT
  // Morse Code:  ..- -.. .. -

  // led blink for letter 'U'
  dot();
  dot();
  dash();
  delay(1500);

  // led blink for letter 'D'
  dash();
  dot();
  dot();
  delay(1500);

  // led blink for letter 'I'
  dot();
  dot();
  delay(1500);

  // led blink for letter 'T'
  dash();
  delay(10000);
}
