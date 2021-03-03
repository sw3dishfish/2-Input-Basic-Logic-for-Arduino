//2 INPUT Basic Logic
//By Aldrick Victor Tadeo Arellano
//FEB 2021


//2 entradas 4 y 5.
//Entrada 4 prende 7 y 8.
//Entrada 5 prende 12, 3 y 8.
//Cualquier otra accion apaga todo.

int INPUT0;
int INPUT1;

void setup() {
  pinMode(4, INPUT);
  pinMode(5, INPUT);

  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  INPUT0 = digitalRead(4);
  if (INPUT0==1){
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
  if (INPUT0==0){
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);  
  }

  INPUT1 = digitalRead(5);
  if (INPUT1==1){
    digitalWrite(3, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(12, HIGH);
  }
  if (INPUT1==0){
    digitalWrite(3, LOW);
    digitalWrite(8, LOW);
    digitalWrite(12, LOW);  
  } 
  else {
    digitalWrite(3, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(12, LOW);
  }
}

