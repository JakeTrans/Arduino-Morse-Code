 String phrase;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
 Serial.begin(9600); 
 // delay(2000);  
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
        MorseCodeBlink(c);
    }
    phrase = "";
    delay(5000);  
      Serial.println("Type something!");

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


void MorseCodeBlink(char Letter)
{

  switch (Letter)
  {

    
    case 'a':
      dot();
      dash();
    break;

    case 'b':
      dash();
      dot();
      dot();
      dot();
    break;

    case 'c':
      dash();
      dot();
      dash();
      dot();
    break;

    case 'd':
      dash();
      dot();
      dot();
    break;

    case 'e':
      dot();
    break;

    case 'f':
      dot();
       dot();
      dash();
       dot();
    break;

    case 'g':
      
      dash();
      dash();
      dot();
      
    break;

     case 'h':
      dot();
      dot();
      dot();
      dot();
    break;

    case 'i':
      dot();
      dot();
    break;

    case 'j':
      dot();
      dash();
      dash();
      dash();
    break;

    case 'k':      
      dash();
      dot();
      dash();
    break;

    case 'l':
      dot();
      dash();
    break;

    case 'm':
      dash();
      dash();
    break;

    case 'n':
      dash();
      dot();
    break;


    case 'o':
      dash();
      dash();
      dash();
    break;

    
    case 'p':
      dot();
      dash();
      dash();
      dot();
    break;

    case 'q':
      dash();
      dash();
      dot();
      dash();
    break;

  case 'r':
      dot();
      dash();
      dot();
    break;


    case 's':
      dot();
      dot();
      dot();
    break;

    case 't':
      dash();
    break;

    case 'u':
      dot();
      dot();
      dash();
    break;

    case 'v':
      dot();
      dot();
      dot();
      dash();
    break;

    case 'w':
      dot();
      dash();
      dash();
    break;

    case 'x':
      dash();
      dot();
      dot();
      dash();
    break;

    case 'y':
      dash();
      dot();
      dash();
      dash();
    break;

    case 'z':
      dash();
      dash();
      dot();
      dot();
    break;

    case ' ':
      delay(1250);
    break;
    
  }


    delay(750);  
  
}
