#define RED 15
#define GREEN 21
#define BUTTON_1 22
#define BUTTON_2 23
// PARAMETERS
const int a = 1200;
const int b = 600;
int c = 9;
const int d = 6500;
const int moDe = 1;
int blockWidth = 50;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BUTTON_1, INPUT);
  pinMode(BUTTON_2, INPUT);
 
}

// the loop function runs over and over again forever
void loop() {
 
  if(digitalRead(BUTTON_1) == HIGH){
    while(1){

      
      if(digitalRead(BUTTON_1) == LOW)
        break;
      }
    
  }
  
   
  run_instructions();
   
}

void run_instructions() {
  
  
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  delayMicroseconds(blockWidth); // Block pulse up 
  
    for(int i=0;i<c;i++){
      digitalWrite(GREEN, LOW); // Block pulse down 
      digitalWrite(RED, HIGH); //pulses signal A 
      delayMicroseconds(a+blockWidth*i);
      digitalWrite(RED, LOW);
      delayMicroseconds(b); //space between pulses
      if(digitalRead(BUTTON_2) == HIGH && i== c-4)
        break;
        
     
     }
  
  delayMicroseconds(d); //space between pulses blocks
}
  
  
