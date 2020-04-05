void setup() {
  // put your setup code here, to run once:

  // put your setup code here, to run once:
  pinMode(2, OUTPUT); // top right
  pinMode(4, OUTPUT); // top left
  pinMode(5, OUTPUT); // top centre
  pinMode(6, OUTPUT); // middle
  pinMode(7, OUTPUT); // Decimal point
  pinMode(8, OUTPUT); // bottom Right
  pinMode(10, OUTPUT); // bottom left
  pinMode(11, OUTPUT);  // bottom
  pinMode(13, OUTPUT); // Buzzer

// Serial.begin(9600); 
// // delay(2000);  
//  Serial.println("Type something!");

}

void loop() {
  // put your main code here, to run repeatedly:
//
    WriteLetter('i', false);
    delay(500);
    clear8seg();
    delay(500); 

  
//    WriteLetter('o', false);
//    delay(500);
//    clear8seg();
//    delay(500); 
//
//     WriteLetter('s', false);
//    delay(500);
//    clear8seg();
//    delay(500);

//    WriteLetter('t', false);
//    delay(500);
//    clear8seg();
//    delay(500); 
delay(1500);

 
}



void WriteLetter(char letter, bool DecimalPoint)
{

  if (DecimalPoint == true)
  {
     digitalWrite(7, HIGH); 
  }

  switch (letter)
  {

    case 'a':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);   
      digitalWrite(8, HIGH);   
      //digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);   
      dot();
      dash();
    break;


    case 'b':
      //digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      //digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);   
      digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);   
      dash();
      dot();
      dot();
      dot();
    break;

    case 'c':
      //digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      //digitalWrite(6, HIGH);   
      //digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);   

      dash();
      dot();
      dash();
      dot();
    break;


    case 'd':
      //digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      //digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);     
      digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);  
      dash();
      dot();
      dot();
    break;


    case 'e':
      //digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);     
      //digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);  
      dot();
    break;

    case 'f':
      //digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);     
      //digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      //digitalWrite(11, HIGH);  
      dot();
       dot();
      dash();
       dot();
    break;
    

    case 'g':
      //digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      //digitalWrite(6, HIGH);   
      digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);   
      dash();
      dash();
      dot();
      
    break;


    case 'h':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      //digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);   
      digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      //digitalWrite(11, HIGH);   
      dot();
      dot();
      dot();
      dot();
    break;


    case 'i':
      //digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      //digitalWrite(5, HIGH);   
      //digitalWrite(6, HIGH);    
      //digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      //digitalWrite(11, HIGH); 
      dot();
      dot();
    break;

    case 'j':
      //digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      //digitalWrite(5, HIGH);   
      //digitalWrite(6, HIGH);    
      digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);  
      dot();
      dash();
      dash();
      dash();
    break;

    case 'k':
      //digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);    
      digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      //digitalWrite(11, HIGH);  
      dash();
      dot();
      dash();
    break;
    
    case 'l':
      //digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      //digitalWrite(5, HIGH);   
      //digitalWrite(6, HIGH);    
      //digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);  
      dot();
      dash();
    break;

    case 'm':
      //digitalWrite(2, HIGH);   
      //digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      //digitalWrite(6, HIGH);    
      digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      //digitalWrite(11, HIGH); 
      dash();
      dash(); 
    break;

    case 'n':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      //digitalWrite(6, HIGH);   
      digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      //digitalWrite(11, HIGH);  
      dash();
      dot(); 
    break;

    case 'o':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      //digitalWrite(6, HIGH);     
      digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);  
      dash();
      dash();
      dash();

     
    break;


    case 'p':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);   
      //digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      //digitalWrite(11, HIGH);   
      dot();
      dash();
      dash();
      dot();
    break;


    case 'q':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);   
      digitalWrite(8, HIGH);   
      //digitalWrite(10, HIGH);  
      //digitalWrite(11, HIGH);
      dash();
      dash();
      dot();
      dash();   
    break;

    case 'r':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      //digitalWrite(6, HIGH);   
      //digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      //digitalWrite(11, HIGH);   
      dot();
      dash();
      dot();
    break;


    
    case 's':
      //digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);    
      digitalWrite(8, HIGH);   
      //digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH); 
      dot();
      dot();
      dot(); 
    break;

    case 't':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);   
      digitalWrite(8, HIGH);   
      //digitalWrite(10, HIGH);  
      //digitalWrite(11, HIGH); 
      dash();  
    break;




    case 'u':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      //digitalWrite(5, HIGH);   
      //digitalWrite(6, HIGH);    
      digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH); 
      dot();
      dot();
      dash(); 
    break;

    case 'v':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      //digitalWrite(5, HIGH);   
      //digitalWrite(6, HIGH);    
      //digitalWrite(8, HIGH);   
      //digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH); 
      dot();
      dot();
      dot();
      dash();
    break;

    case 'w':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      //digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);      
      //digitalWrite(8, HIGH);   
      //digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);  
      dot();
      dash();
      dash();
    break;

    case 'x':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      //digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);      
      digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      //digitalWrite(11, HIGH); 
      dash();
      dot();
      dot();
      dash(); 
    break;

    case 'y':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      //digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);      
      digitalWrite(8, HIGH);   
      //digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);  
      dash();
      dot();
      dash();
      dash();
    break;

    case 'z':
      digitalWrite(2, HIGH);   
      //digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);      
      //digitalWrite(8, HIGH);   
      //digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);  
      dash();
      dash();
      dot();
      dot();
    break;
    

    // Numbers


    case '1':
      digitalWrite(2, HIGH);   
      //digitalWrite(4, HIGH);   
      //digitalWrite(5, HIGH);   
      //digitalWrite(6, HIGH);     
      digitalWrite(8, HIGH);   
      //digitalWrite(10, HIGH);  
      //digitalWrite(11, HIGH);  
    break;

    case '2':
      digitalWrite(2, HIGH);   
      //digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);     
      //digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);  
    break;

    case '3':
      digitalWrite(2, HIGH);   
      //digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);     
      digitalWrite(8, HIGH);   
      //digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);  
    break;

    case '4':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      //digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);     
      digitalWrite(8, HIGH);   
      //digitalWrite(10, HIGH);  
      //digitalWrite(11, HIGH);  
    break;

    case '5':
      //digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);     
      digitalWrite(8, HIGH);   
      //digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);  
    break;

    case '6':
      //digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);    
      digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);  
    break;


    case '7':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      //digitalWrite(6, HIGH);     
      digitalWrite(8, HIGH);   
      //digitalWrite(10, HIGH);  
      //digitalWrite(11, HIGH);   
    break;

    case '8':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);    
      digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);    
    break;


    case '9':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);   
      digitalWrite(8, HIGH);   
      //digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);   
    break;

    case '0':
      digitalWrite(2, HIGH);   
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      //digitalWrite(6, HIGH);     
      digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);   
    break;

    


  }
  
}

void clear8seg()
  {
    digitalWrite(2, LOW);   
    digitalWrite(4, LOW);   
    digitalWrite(5, LOW);   
    digitalWrite(6, LOW);   
    digitalWrite(7, LOW);   
    digitalWrite(8, LOW);   
    digitalWrite(10, LOW);  
    digitalWrite(11, LOW);  
    
  }

  void dot()
{

  digitalWrite(LED_BUILTIN, HIGH);   
  delay(250);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(250);  
  
}

void dash()
{

  digitalWrite(LED_BUILTIN, HIGH);   
  delay(500);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(250);  
  
}
