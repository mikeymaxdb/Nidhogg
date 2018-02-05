#include "Keyboard.h"

int p1_left = 39;
int p1_right = 40;
int p1_up = 38;
int p1_down = 41;
int p1_a = 42;
int p1_b = 43;

int p2_left = 12;
int p2_right = 13;
int p2_up = 10;
int p2_down = 11;
int p2_a = 14;
int p2_b = 15;

void setup() {
  pinMode(p1_left, INPUT_PULLUP);
  pinMode(p1_right, INPUT_PULLUP);
  pinMode(p1_up, INPUT_PULLUP);
  pinMode(p1_down, INPUT_PULLUP);
  pinMode(p1_a, INPUT_PULLUP);
  pinMode(p1_b, INPUT_PULLUP);

  pinMode(p2_left, INPUT_PULLUP);
  pinMode(p2_right, INPUT_PULLUP);
  pinMode(p2_up, INPUT_PULLUP);
  pinMode(p2_down, INPUT_PULLUP);
  pinMode(p2_a, INPUT_PULLUP);
  pinMode(p2_b, INPUT_PULLUP);

  Keyboard.begin();
}

void loop() {
  if(digitalRead(p1_left) == LOW){
    Keyboard.set_key1(KEY_LEFT);
  } else if(digitalRead(p1_right) == LOW){
    Keyboard.set_key1(KEY_RIGHT);
  } else{
    Keyboard.set_key1(0);
  }
  
  if(digitalRead(p1_up) == LOW){
    Keyboard.set_key2(KEY_UP);
  } else if(digitalRead(p1_down) == LOW){
    Keyboard.set_key2(KEY_DOWN);
  } else{
    Keyboard.set_key2(0);
  }

  if(digitalRead(p1_a) == LOW){
    Keyboard.set_key3(KEY_L);
  } else if(digitalRead(p1_b) == LOW){
    Keyboard.set_key3(KEY_K);
  }else {
    Keyboard.set_key3(0);
  }




  if(digitalRead(p2_left) == LOW){
    Keyboard.set_key4(KEY_A);
  } else if(digitalRead(p2_right) == LOW){
    Keyboard.set_key4(KEY_D);
  } else{
    Keyboard.set_key4(0);
  }
  
  if(digitalRead(p2_up) == LOW){
    Keyboard.set_key5(KEY_W);
  } else if(digitalRead(p2_down) == LOW){
    Keyboard.set_key5(KEY_S);
  } else{
    Keyboard.set_key5(0);
  }

  if(digitalRead(p2_a) == LOW){
    Keyboard.set_key6(KEY_F);
  } else if(digitalRead(p2_b) == LOW){
    Keyboard.set_key6(KEY_G);
  } else {
    Keyboard.set_key6(0);
  }

  Keyboard.send_now();
}
