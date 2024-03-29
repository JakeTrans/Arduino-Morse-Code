String phrase;

void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT); // top right 
  pinMode(8, OUTPUT); // top left 
  pinMode(10, OUTPUT); // top centre 
  pinMode(7, OUTPUT); // middle  
  pinMode(2, OUTPUT); // Decimal point 
  pinMode(4, OUTPUT); // bottom Right 
  pinMode(5, OUTPUT); // bottom left 
  pinMode(6, OUTPUT);  // bottom  
  pinMode(13, OUTPUT); // Buzzer 


  
  Serial.begin(9600); 
  Serial.println("Type something!");
}

void loop() {
  // put your main code here, to run repeatedly:
    while (!Serial.available())
    {
    }

    phrase = Serial.readStringUntil('\n');
    Serial.print("You typed: " );
    Serial.println(phrase);

    if (phrase == "")
    {
      return;
    }

    for (int i = 0; i < phrase.length(); i++)
    {
        char c = tolower(phrase.charAt(i));      
        WriteLetter(c, false);
  
        clear8seg();
        
    }
    phrase = "";
    delay(5000);  
    Serial.println("Type something!");
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
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(7, HIGH);   
      digitalWrite(8, HIGH);     
      digitalWrite(10, HIGH);   
      digitalWrite(11, HIGH);   
      dot();
      dash();
    break;


    case 'b':
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);   
      digitalWrite(7, HIGH);     
      digitalWrite(8, HIGH);   
      dash();
      dot();
      dot();
      dot();
    break;

    case 'c':
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);   
      digitalWrite(8, HIGH);   
      digitalWrite(10, HIGH);    
      dash();
      dot();
      dash();
      dot();
    break;


    case 'd':
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);   
      digitalWrite(7, HIGH);    
      digitalWrite(11, HIGH);
      dash();
      dot();
      dot();
    break;


    case 'e':
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);   
      digitalWrite(7, HIGH);   
      digitalWrite(8, HIGH);    
      digitalWrite(10, HIGH);
      dot();
    break;

    case 'f':  
      digitalWrite(5, HIGH);      
      digitalWrite(7, HIGH);   
      digitalWrite(8, HIGH);    
      digitalWrite(10, HIGH);
      dot();
      dot();
      dash();
      dot();
    break;
    

    case 'g': 
      digitalWrite(4, HIGH);  
      digitalWrite(5, HIGH);      
      digitalWrite(6, HIGH);  
      digitalWrite(8, HIGH);    
      digitalWrite(10, HIGH);
      dash();
      dash();
      dot();
      
    break;


    case 'h':
      digitalWrite(4, HIGH);  
      digitalWrite(5, HIGH);      
      digitalWrite(7, HIGH);  
      digitalWrite(8, HIGH);    
      digitalWrite(11, HIGH); 
      dot();
      dot();
      dot();
      dot();
    break;


    case 'i': 
     digitalWrite(5, HIGH);  
      digitalWrite(8, HIGH);   
      dot();
      dot();
    break;

    case 'j': 
      digitalWrite(5, HIGH);  
      digitalWrite(6, HIGH);      
      digitalWrite(4, HIGH); 
      digitalWrite(11, HIGH); 
      dot();
      dash();
      dash();
      dash();
    break;

    case 'k':  
     digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);     
      digitalWrite(7, HIGH);   
      digitalWrite(8, HIGH);    
      digitalWrite(10, HIGH);  
      dash();
      dot();
      dash();
    break;
    
    case 'l':
      digitalWrite(5, HIGH);     
      digitalWrite(6, HIGH);   
      digitalWrite(8, HIGH);   
      dot();
      dash();
    break;

    case 'm': 
      digitalWrite(4, HIGH);     
      digitalWrite(5, HIGH);   
      digitalWrite(10, HIGH);  
      dash();
      dash(); 
    break;

    case 'n':
      digitalWrite(4, HIGH);     
      digitalWrite(5, HIGH);   
      digitalWrite(10, HIGH);  
      digitalWrite(11, HIGH);    
      digitalWrite(8, HIGH);    
      dash();
      dot(); 
    break;

    case 'o':
      digitalWrite(4, HIGH);     
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);  
      digitalWrite(8, HIGH);    
      digitalWrite(10, HIGH);     
      digitalWrite(11, HIGH);   
      dash();
      dash();
      dash();

     
    break;


    case 'p':
      digitalWrite(5, HIGH);   
      digitalWrite(7, HIGH);     
      digitalWrite(8, HIGH);    
      digitalWrite(10, HIGH);     
      digitalWrite(11, HIGH);    
      dot();
      dash();
      dash();
      dot();
    break;


    case 'q':
      digitalWrite(4, HIGH);        
      digitalWrite(7, HIGH);     
      digitalWrite(8, HIGH);    
      digitalWrite(10, HIGH);     
      digitalWrite(11, HIGH);    
      dash();
      dash();
      dot();
      dash();   
    break;

    case 'r':
      digitalWrite(5, HIGH);         
      digitalWrite(8, HIGH);    
      digitalWrite(10, HIGH);     
      digitalWrite(11, HIGH);  
      dot();
      dash();
      dot();
    break;


    
    case 's':
      digitalWrite(4, HIGH);         
      digitalWrite(6, HIGH);    
      digitalWrite(7, HIGH);   
      digitalWrite(10, HIGH);     
      digitalWrite(8, HIGH);   
      dot();
      dot();
      dot(); 
    break;

    case 't': 
      digitalWrite(5, HIGH);         
      digitalWrite(6, HIGH);    
      digitalWrite(7, HIGH);   
      digitalWrite(8, HIGH);      
      dash();  
    break;




    case 'u':
      digitalWrite(4, HIGH);         
      digitalWrite(5, HIGH);    
      digitalWrite(6, HIGH);   
      digitalWrite(8, HIGH);
      digitalWrite(11, HIGH);   
      dot();
      dot();
      dash(); 
    break;

    case 'v':
      digitalWrite(4, HIGH);             
      digitalWrite(6, HIGH);   
      digitalWrite(8, HIGH);
      digitalWrite(11, HIGH);     
      dot();
      dot();
      dot();
      dash();
    break;

    case 'w':
      digitalWrite(6, HIGH);   
      digitalWrite(8, HIGH);
      digitalWrite(11, HIGH); 
      dot();
      dash();
      dash();
    break;

    case 'x':
      digitalWrite(4, HIGH);   
      digitalWrite(5, HIGH);
      digitalWrite(7, HIGH);    
      digitalWrite(8, HIGH);    
      digitalWrite(11, HIGH);
      dash();
      dot();
      dot();
      dash(); 
    break;

    case 'y':
      digitalWrite(4, HIGH);   
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);    
      digitalWrite(8, HIGH);    
      digitalWrite(11, HIGH);
      dash();
      dot();
      dash();
      dash();
    break;

    case 'z':
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);    
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);   
      dash();
      dash();
      dot();
      dot();
    break;
    

    // Numbers


    case '1':
      digitalWrite(5, HIGH);    
      digitalWrite(8, HIGH);    
      dot();
      dash();
      dash();
      dash();
      dash();
    break;

    case '2':
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);  
        digitalWrite(7, HIGH);    
        digitalWrite(10, HIGH);
        digitalWrite(11, HIGH);  
      dot();
      dot();
      dash();
      dash();
      dash();
    break;

    case '3':
        digitalWrite(4, HIGH);
        digitalWrite(6, HIGH);  
        digitalWrite(7, HIGH);    
        digitalWrite(10, HIGH);
        digitalWrite(11, HIGH);
      dot();
      dot();
      dot();
      dash();
      dash();
    break;

    case '4':
        digitalWrite(4, HIGH);
        digitalWrite(7, HIGH);  
        digitalWrite(8, HIGH);    
        digitalWrite(11, HIGH);   
      dot();
      dot();
      dot();
      dot();
      dash();
    break;

    case '5':
        digitalWrite(4, HIGH);
        digitalWrite(6, HIGH);         
        digitalWrite(7, HIGH);  
        digitalWrite(8, HIGH);    
        digitalWrite(10, HIGH);    
      dot();
      dot();
      dot();
      dot();
      dot();
    break;

    case '6': 
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);  
        digitalWrite(6, HIGH);         
        digitalWrite(7, HIGH);  
        digitalWrite(8, HIGH);
        digitalWrite(10, HIGH); 
      dash();
      dot();
      dot();
      dot();
      dot();
    break;


    case '7':
      digitalWrite(4, HIGH);    
      digitalWrite(10, HIGH);    
      digitalWrite(11, HIGH);  
      dash();
      dash();
      dot();
      dot();
      dot();
    break;

    case '8':
        digitalWrite(4, HIGH);    
        digitalWrite(5, HIGH);    
        digitalWrite(6, HIGH);   
        digitalWrite(7, HIGH); 
        digitalWrite(8, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, HIGH);

      dash();
      dash();
      dash();
      dot();
      dot();
    break;


    case '9':
        digitalWrite(4, HIGH);        
        digitalWrite(6, HIGH);   
        digitalWrite(7, HIGH); 
        digitalWrite(8, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, HIGH);
      dash();
      dash();
      dash();
      dash();
      dot();
    break;

    case '0':
        digitalWrite(4, HIGH);  
        digitalWrite(5, HIGH);      
        digitalWrite(6, HIGH);   
        digitalWrite(8, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, HIGH); 
      dash();
      dash();
      dash();
      dash();
      dash();
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
  // sound
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
