#include <Keyboard.h> 

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  Serial.begin(9600);  
}
void sendSliderValues() {
  String builtString = String("");
    builtString += String((int)analogRead(A0));
    builtString += String("|");
    builtString += String((int)analogRead(A1));
  Serial.println(builtString);
}

void loop() {
  
 Keyboard.begin();        

  if(digitalRead(2)==0){                             //1) Valorant
    Keyboard.press(KEY_RIGHT_GUI);
    delay(100);    
    Keyboard.press(KEY_LEFT_ALT);
    delay(100);    
    Keyboard.press(KEY_LEFT_SHIFT);
    delay(100);
    Keyboard.press('v');
    delay(100);    
    Keyboard.releaseAll();
 }
 
  if(digitalRead(3)==0){                             //2) Screen Shot
    Keyboard.press(KEY_RIGHT_GUI);
    delay(100);
    Keyboard.press('g');
    delay(200);
    Keyboard.releaseAll();
 }
 
  if(digitalRead(4)==0){                             //3) Smart Plugs
    Keyboard.press(KEY_LEFT_CTRL);
    delay(100);
    Keyboard.press(KEY_LEFT_SHIFT);
    delay(100);
    Keyboard.press('r');
    delay(100);
    Keyboard.releaseAll();
 }
 
  if(digitalRead(5)==0){                             //4) Copy
    Keyboard.press(KEY_LEFT_CTRL);
    delay(100);
    Keyboard.press('C');
    delay(100);
    Keyboard.releaseAll();
 }
 
  if(digitalRead(6)==0){                             //5) Paste
    Keyboard.press(KEY_LEFT_CTRL);
    delay(100);
    Keyboard.press('V');
    delay(100);
    Keyboard.releaseAll();
 }
 
  if(digitalRead(7)==0){                             //6) Desktop
    Keyboard.press(KEY_RIGHT_GUI);
    delay(100);
    Keyboard.press('d');
    delay(100);
    Keyboard.releaseAll();
 }
 
  if(digitalRead(8)==0){                             //7) Lock
    Keyboard.press(KEY_RIGHT_GUI);
    delay(100);
    Keyboard.press('l');
    delay(200);
    Keyboard.releaseAll();
 }
 
  if(digitalRead(9)==0){                             //8) Settings
    Keyboard.press(KEY_RIGHT_GUI);
    delay(100);
    Keyboard.press('i');
    delay(100);
    Keyboard.releaseAll();
 }
 
  if(digitalRead(10)==0){                             //9) New Desktop
    Keyboard.press(KEY_RIGHT_GUI);
    delay(100);
    Keyboard.press(KEY_LEFT_CTRL);
    delay(100);
    Keyboard.press('d');
    delay(100);    
    Keyboard.releaseAll();
 }
 if(digitalRead(15)==0){                             //9) New Desktop
    Keyboard.press(KEY_RIGHT_GUI);
    delay(100);
    Keyboard.press(KEY_LEFT_CTRL);
    delay(100);
    Keyboard.press('d');
    delay(100);    
    Keyboard.releaseAll();
 }
 if(digitalRead(14)==0){                             //9) New Desktop
    Keyboard.press(KEY_RIGHT_GUI);
    delay(100);
    Keyboard.press(KEY_LEFT_CTRL);
    delay(100);
    Keyboard.press('d');
    delay(100);    
    Keyboard.releaseAll();
 }
 if(digitalRead(16)==0){                             //9) New Desktop
    Keyboard.press(KEY_RIGHT_GUI);
    delay(100);
    Keyboard.press(KEY_LEFT_CTRL);
    delay(100);
    Keyboard.press('d');
    delay(100);    
    Keyboard.releaseAll();
 }
 sendSliderValues();
}
