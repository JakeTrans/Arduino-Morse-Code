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

// Serial.begin(9600); 
// // delay(2000);  
//  Serial.println("Type something!");

}

void loop() {
  // put your main code here, to run repeatedly:
//
    WriteLetter('s', false);
    delay(500);
    clear8seg();
    delay(500); 

  
    WriteLetter('o', false);
    delay(500);
    clear8seg();
    delay(500); 

     WriteLetter('s', false);
    delay(500);
    clear8seg();
    delay(500);

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

    case 't':
    digitalWrite(2, HIGH);   
    digitalWrite(4, HIGH);   
    digitalWrite(5, HIGH);   
    digitalWrite(6, HIGH);   
    digitalWrite(8, HIGH);   
    //digitalWrite(10, HIGH);  
    //digitalWrite(11, HIGH);   
    break;


    case 'h':
    digitalWrite(2, HIGH);   
    digitalWrite(4, HIGH);   
    //digitalWrite(5, HIGH);   
    digitalWrite(6, HIGH);   
    digitalWrite(8, HIGH);   
    digitalWrite(10, HIGH);  
    //digitalWrite(11, HIGH);   
    break;
    
    case 'b':
    //digitalWrite(2, HIGH);   
    digitalWrite(4, HIGH);   
    //digitalWrite(5, HIGH);   
    digitalWrite(6, HIGH);   
    digitalWrite(8, HIGH);   
    digitalWrite(10, HIGH);  
    digitalWrite(11, HIGH);   
    break;


    case 'g':
    //digitalWrite(2, HIGH);   
    digitalWrite(4, HIGH);   
    digitalWrite(5, HIGH);   
    //digitalWrite(6, HIGH);   
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


    case 'a':
    digitalWrite(2, HIGH);   
    digitalWrite(4, HIGH);   
    digitalWrite(5, HIGH);   
    digitalWrite(6, HIGH);   
    digitalWrite(8, HIGH);   
//    digitalWrite(10, HIGH);  
    digitalWrite(11, HIGH);   
    break;


    case 'n':
    digitalWrite(2, HIGH);   
    digitalWrite(4, HIGH);   
    digitalWrite(5, HIGH);   
//    digitalWrite(6, HIGH);   
    digitalWrite(8, HIGH);   
    digitalWrite(10, HIGH);  
//    digitalWrite(11, HIGH);   
    break;


    case 'p':
    digitalWrite(2, HIGH);   
    digitalWrite(4, HIGH);   
    digitalWrite(5, HIGH);   
    digitalWrite(6, HIGH);   
//    digitalWrite(8, HIGH);   
    digitalWrite(10, HIGH);  
//    digitalWrite(11, HIGH);   
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

    case '0':
    digitalWrite(2, HIGH);   
    digitalWrite(4, HIGH);   
    digitalWrite(5, HIGH);   
    //digitalWrite(6, HIGH);     
    digitalWrite(8, HIGH);   
    digitalWrite(10, HIGH);  
    digitalWrite(11, HIGH);   
    break;
    

    case 'o':
    digitalWrite(2, HIGH);   
    digitalWrite(4, HIGH);   
    digitalWrite(5, HIGH);   
    //digitalWrite(6, HIGH);     
    digitalWrite(8, HIGH);   
    digitalWrite(10, HIGH);  
    digitalWrite(11, HIGH);  
 
    break;





    case 'u':
    digitalWrite(2, HIGH);   
    digitalWrite(4, HIGH);   
    //digitalWrite(5, HIGH);   
    //digitalWrite(6, HIGH);    
    digitalWrite(8, HIGH);   
    digitalWrite(10, HIGH);  
    digitalWrite(11, HIGH);  
 
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


    case 's':
    //digitalWrite(2, HIGH);   
    digitalWrite(4, HIGH);   
    digitalWrite(5, HIGH);   
    digitalWrite(6, HIGH);    
    digitalWrite(8, HIGH);   
    //digitalWrite(10, HIGH);  
    digitalWrite(11, HIGH);  
  
    break;



    case 'e':
    //digitalWrite(2, HIGH);   
    digitalWrite(4, HIGH);   
    digitalWrite(5, HIGH);   
    digitalWrite(6, HIGH);     
    //digitalWrite(8, HIGH);   
    digitalWrite(10, HIGH);  
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



    case 'y':
    digitalWrite(2, HIGH);   
    digitalWrite(4, HIGH);   
    //digitalWrite(5, HIGH);   
    digitalWrite(6, HIGH);      
    digitalWrite(8, HIGH);   
    //digitalWrite(10, HIGH);  
    digitalWrite(11, HIGH);  
  
    break;


    
    case '8':
    digitalWrite(2, HIGH);   
    digitalWrite(4, HIGH);   
    digitalWrite(5, HIGH);   
    digitalWrite(6, HIGH);    
    digitalWrite(8, HIGH);   
    digitalWrite(10, HIGH);  
    digitalWrite(11, HIGH);  
    delay(500);                      
    clear8seg();
    delay(500);  
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
