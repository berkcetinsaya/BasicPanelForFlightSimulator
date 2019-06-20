#include "Arduino.h"
#include "Keyboard.h"

int LANDING=7;
int RUNWAY=9;
int TAXI=5;
int STROBE=13;
int LOGO=3;
int WING=12;
int WHEEL=2;
int BRAKE=11;
int GEAR=4;
int TEST=10;
int led=6;

void setup()
{
  pinMode(LANDING, INPUT_PULLUP);
  pinMode(RUNWAY, INPUT_PULLUP);
  pinMode(TAXI, INPUT_PULLUP);
  pinMode(STROBE, INPUT_PULLUP);
  pinMode(LOGO, INPUT_PULLUP);
  pinMode(WING, INPUT_PULLUP);
  pinMode(WHEEL, INPUT_PULLUP);
  pinMode(TEST, INPUT_PULLUP);
  pinMode(BRAKE, INPUT_PULLUP);
  pinMode(GEAR, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Keyboard.begin();
}

void loop()
{
  if (digitalRead(LANDING) == HIGH) {
    delay(200);
  }
  else{
    delay(200);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('k');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
    digitalWrite(led, HIGH);
	delay(200);
    digitalWrite(led, LOW);
	delay(200);
  }
  if (digitalRead(RUNWAY) == HIGH) {
    delay(200);
  }
  else{
    delay(200);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('l');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
    digitalWrite(led, HIGH);
	delay(200);
    digitalWrite(led, LOW);
	delay(200);
  }
  if (digitalRead(TAXI) == HIGH) {
    delay(200);
  }
  else{
    delay(200);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(';');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
    digitalWrite(led, HIGH);
	delay(200);
    digitalWrite(led, LOW);
	delay(200);
  }
  if (digitalRead(STROBE) == HIGH) {
    delay(200);
  }
  else{
    delay(200);
    Keyboard.press('o');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
    digitalWrite(led, HIGH);
	delay(200);
    digitalWrite(led, LOW);
	delay(200);
  }
  if (digitalRead(LOGO) == HIGH) {
    delay(200);
  }
  else{
    delay(200);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('\'');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
    digitalWrite(led, HIGH);
	delay(200);
    digitalWrite(led, LOW);
	delay(200);
  }
  if (digitalRead(WING) == HIGH) {
    delay(200);
  }
  else{
    delay(200);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('[');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
    digitalWrite(led, HIGH);
	delay(200);
    digitalWrite(led, LOW);
	delay(200);
  }
  if (digitalRead(WHEEL) == HIGH) {
    delay(200);
  }
  else{
    delay(200);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('p');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
    digitalWrite(led, HIGH);
	delay(200);
    digitalWrite(led, LOW);
	delay(200);
  }
  if (digitalRead(BRAKE) == HIGH) {
    delay(200);
  }
  else{
    delay(200);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('b');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
    digitalWrite(led, HIGH);
	delay(200);
    digitalWrite(led, LOW);
	delay(200);
  }
  if (digitalRead(GEAR) == HIGH) {
    delay(200);
  }
  else{
    delay(200);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('g');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
    digitalWrite(led, HIGH);
	delay(200);
    digitalWrite(led, LOW);
	delay(200);
  }
  if (digitalRead(TEST) == HIGH) {
    delay(200);
  }
  else{
    delay(200);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('t');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
    digitalWrite(led, HIGH);
	delay(200);
    digitalWrite(led, LOW);
	delay(200);
  }
}
