//motor a
const int MOTOR_A = 5;
const int GREEN = 8;
const int YELLOW = 9;



//motor b
const int MOTOR_B = 6;
const int GREEN_B = 10;
const int YELLOW_B = 11;




void setup() {
Serial.begin(9600);
  //motor a
  pinMode(MOTOR_A, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);

  //motor b
  pinMode(MOTOR_B, OUTPUT);
  pinMode(GREEN_B, OUTPUT);
  pinMode(YELLOW_B, OUTPUT);
}

void loop() {
  // make the robot move forward then stop and move back and stop.
  // make it move forward and turn left
  // make it move backward and turn left
  // make it move forward and turn right
  // make it move backward and turn right
  //FORWARD MOVEMENT
    //motor a
    digitalWrite(GREEN, LOW);
    digitalWrite(YELLOW, HIGH);
    digitalWrite(MOTOR_A, 180);

   //motor b
    digitalWrite(GREEN_B, HIGH);
    digitalWrite(YELLOW_B, LOW);
    digitalWrite(MOTOR_B, 180);

    //END FORWARD MOVEMNT

  delay(1000);
  analogWrite(MOTOR_A, 0);
  analogWrite(MOTOR_B, 0);
  delay(500);

   //BACKWARD MOVEMENT
    //motor a
    digitalWrite(GREEN, HIGH);
    digitalWrite(YELLOW, LOW);
    digitalWrite(MOTOR_A, 180);
    

       //motor b
    digitalWrite(GREEN_B, LOW); 
    digitalWrite(YELLOW_B, HIGH);
    digitalWrite(MOTOR_B, 180);
    
  //END BACKWARD MOVEMENT

  delay(1000);
  analogWrite(MOTOR_A, 0);
  analogWrite(MOTOR_B, 0);
  delay(500);
  

  //FORWARD MOVEMENT
    //motor a
    digitalWrite(GREEN, LOW);
    digitalWrite(YELLOW, HIGH);
    digitalWrite(MOTOR_A, 180);
  
    
    //motor b
    digitalWrite(GREEN_B, HIGH);
    digitalWrite(YELLOW_B, LOW);
    digitalWrite(MOTOR_B, 180);
    

    //END FORWARD MOVEMNT
  delay(1000);
  analogWrite(MOTOR_A, 0);
  analogWrite(MOTOR_B, 0);
  delay(500);
  

  //TURN LEFT
    digitalWrite(GREEN, HIGH);
    digitalWrite(YELLOW, LOW);
    digitalWrite(MOTOR_A, 180);

  //END TURN LEFT
  delay(1000);
  analogWrite(MOTOR_A, 0);
  analogWrite(MOTOR_B, 0);
  delay(500);

   //BACKWARD MOVEMENT
    //motor a
    digitalWrite(GREEN, HIGH);
    digitalWrite(YELLOW, LOW);
    digitalWrite(MOTOR_A, 180);
  
    
      //motor b
      digitalWrite(GREEN_B, LOW);
      digitalWrite(YELLOW_B, HIGH);
      digitalWrite(MOTOR_B, 180);
  //END BACKWARD MOVEMENT

  delay(1000);
  analogWrite(MOTOR_A, 0);
  analogWrite(MOTOR_B, 0);
  delay(500);

  //TURN LEFT
    digitalWrite(GREEN, HIGH);
    digitalWrite(YELLOW, LOW);
    digitalWrite(MOTOR_A, 180);

  //END TURN LEFT
  delay(1000);
  analogWrite(MOTOR_A, 0);
  analogWrite(MOTOR_B, 0);
  delay(500);

  //TURN RIGHT
  digitalWrite(GREEN_B, LOW);
  digitalWrite(YELLOW_B, HIGH);
  digitalWrite(MOTOR_A, 180);
  }
  
  
      
      
