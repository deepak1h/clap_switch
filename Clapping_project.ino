

const int micPin = 3;     
const int ledPin =  4;      


int micState = 0;
int var = 1;

void setup() {
 
  pinMode(ledPin, OUTPUT);

  pinMode(micPin, INPUT);
}

void loop() {
  
  micState = digitalRead(micPin);
  
  if (micState == HIGH) {
    var=var+1;
    delay(500);De
  } 
  else {
    var=var;
  }
  if (var%2==1){
    
    digitalWrite(ledPin, HIGH);
    
  }
  else {
    
    digitalWrite(ledPin, LOW);
    
    }
  }
