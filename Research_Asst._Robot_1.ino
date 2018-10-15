#include<Servo.h>

int ledPin = 13;
String readString;

  Servo LM1;
  Servo LM2;
  Servo LM3;
  Servo LM4;
  Servo LM5;

  Servo RM1;
  Servo RM2;
  Servo RM3;
  Servo RM4;
  Servo RM5;

  Servo MM1;
  Servo MM2;
  int pos ;
  
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); 

  LM1.attach(22);
  LM2.attach(23);
  LM3.attach(24);
  LM4.attach(25);
  LM5.attach(26);

  RM1.attach(27);
  RM2.attach(28);
  RM3.attach(29);
  RM4.attach(30);
  RM5.attach(31);

  MM1.attach(32);
  MM2.attach(33);
  
    { 
    LM1.write(165);
    LM2.write(90);
    LM3.write(90);
    LM4.write(90);
    LM5.write(100);

    RM1.write(10); 
    RM2.write(90); //90-180 up 
    RM3.write(90); // 90-180n up
    RM4.write(90);
    RM5.write(100);

    MM1.write(90);
    MM2.write(80);
    
    }
}
void Speechpoint05() 
      {
      MM2.write(65);
      delay(250);
      MM2.write(80); //Speech Points
      delay(250);
      }
  void Speechpoint1() 
      {
      MM2.write(65);
      delay(250);
      MM2.write(80); //Speech Points
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80);
      delay(250);
      }
  void Speechpoint105() 
      {
      MM2.write(65);
      delay(250);
      MM2.write(80); //Speech Points
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80);
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80);
      delay(250);
      }
  void Speechpoint2() 
      { 
      MM2.write(65);
      delay(250);
      MM2.write(80); //Speech Points
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80);
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80); //Speech Points
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80);
      delay(250);
      }
      void Speechpoint205() 
      {
      MM2.write(65);
      delay(250);
      MM2.write(80); //Speech Points
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80);
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80);
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80); //Speech Points
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80);
      delay(250);
      }
  void Speechpoint3() 
      {MM2.write(65);
      delay(250);
      MM2.write(80); //Speech Points
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80);
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80); //Speech Points
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80);
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80); //Speech Points
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80);
      delay(250);
      }
    void Speechpoint4() 
      {MM2.write(65);
      delay(250);
      MM2.write(80); //Speech Points
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80);
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80); //Speech Points
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80);
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80); //Speech Points
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80);
      delay(250);
       MM2.write(65);
      delay(250);
      MM2.write(80); //Speech Points
      delay(250);
      MM2.write(65);
      delay(250);
      MM2.write(80);
      delay(250);
      }
   void resend()
   {
    Serial.write("1");
      readString="";
    }

void loop() {


  
  while (Serial.available()) {
    delay(3);  
    char c = Serial.read();
    readString += c; 
  }
  if (readString.length() >0) {
    Serial.println(readString);
    if (readString == "hi")     
    {
      digitalWrite(ledPin, HIGH);
      Speechpoint1(); 
      delay(1000);
      resend();
    }
    else if (readString == "hello")
    {
      digitalWrite(ledPin, LOW);
       Speechpoint1();
       delay(1000);
       resend();
    }      
      else if (readString == "how are you")
    {
       Speechpoint2();
       resend();
    } 

    else if (readString == "what is your name")

    {
       Speechpoint2();
       resend();
    } 
    else if (readString == "tell us about you")
    {
       Speechpoint4();
       Speechpoint4();
       Speechpoint2();
       resend();
    } 
    else if ((readString == "WhatsApp")||(readString == "What's up"))
    {
        Speechpoint1();
       resend();
    } 
    else if (readString == "who are you")
    {
       Speechpoint2();
       resend();
    } 
    else if (readString == "where are you from") 

    {
       Speechpoint2();
       resend();
    } 
    else if (readString == "thank you")
    {
       Speechpoint1();
       resend();
    } 
    else if (readString == "what kind of robot are you")
    {
       Speechpoint2();
       resend();
    } 
    else if (readString == "do you like to talk with me")
    {
       Speechpoint205();
       resend();
    } 
    else if (readString == "are you male or female")
    {
       Speechpoint3();
       resend();
    } 
    else if (readString == "what is the capital of Bangladesh")
    {
       Speechpoint205();
       resend();
    } 
     else if (readString == "who is your developer")
    {
       Speechpoint205();
       resend();
    } 
    else if (readString == "what is your gender")
    {
       Speechpoint4();
       Speechpoint1();
       resend();
    } 
    else if (readString == "do you know j b r a t r c")
    {
       Speechpoint1();
       resend();
    } 
    else if (readString == "tell us about j b r a t r c")
    {
       Speechpoint4();
       Speechpoint4();
       Speechpoint4();
       Speechpoint4();
       Speechpoint2();
       resend();
    } 
    else if (readString == "what is our mission and vision")
    {
       Speechpoint1();
       Speechpoint4();
       Speechpoint4();
       Speechpoint4();
       Speechpoint4();
       Speechpoint4();
       Speechpoint4();
       Speechpoint4();
       Speechpoint4();
       Speechpoint4();
       
       resend();
    } 
    else if (readString == "tell us about digital Bangladesh ")
    {
       Speechpoint2();
       resend();
    } 
    else if (readString == "who is our Prime Minister")
    {
       Speechpoint205();
       resend();
    } 
    else if (readString == "nice to meet you")
    {
       Speechpoint105();
        { 
              for (pos = 10; pos <= 90; pos += 1) 
               { 
                RM1.write(pos); 
               delay(15); 
               }
              { for (pos = 90; pos >= 60; pos -= 1) 
               { 
                RM3.write(pos);  
               delay(15); 
               }
              { for (pos = 90; pos >= 0; pos -= 1) 
               { 
                  RM4.write(pos);              
                  delay(15); 
                  }
                  
              { for (pos = 90; pos >= 35; pos -= 1) 
               { 
                RM5.write(pos); 
                delay(15); 
                }
              
              { for (pos = 35; pos <= 90; pos += 1) 
               { 
                RM5.write(pos); 
                delay(15);
                }
                 
              { for (pos = 0; pos <= 90; pos += 1) 
               { 
                RM4.write(pos); 
                delay(15);
                }}
                
               { for (pos = 60; pos <= 90; pos += 1) 
               { 
                RM3.write(pos); 
                delay(15);
                }}
                
               { for (pos = 90; pos >= 10; pos -= 1) 
               { 
                RM1.write(pos); 
                delay(15);
               
                }}}}}}}
                
       delay(1000);
       resend();
    } 
    else if ((readString == "do handshake")||(readString == "do hand sheikh"))
    {
       Speechpoint105();
       { 
        for (pos = 10; pos <= 90; pos += 1) 
               { 
                RM1.write(pos); 
               delay(15); 
               }
        { for (pos = 90; pos >= 60; pos -= 1) 
               { 
                RM3.write(pos);  
               delay(15); 
               }
       { for (pos = 90; pos >= 0; pos -= 1) 
               { 
                  RM4.write(pos);              
                  delay(15); 
                  }
       { for (pos = 90; pos >= 35; pos -= 1) 
               { 
                RM5.write(pos); 
                delay(15); 
                }
                
              { for (pos = 35; pos <= 90; pos += 1) 
               { 
                RM5.write(pos); 
                delay(15);
                } 
              { for (pos = 0; pos <= 90; pos += 1) 
               { 
                RM4.write(pos); 
                delay(15);
                }
               }
               { for (pos = 60; pos <= 90; pos += 1) 
               { 
                RM3.write(pos); 
                delay(15);
                }
               }
               { for (pos = 90; pos >= 10; pos -= 1) 
               { 
                RM1.write(pos); 
                delay(15);
               
                }}}}}}}
      delay(1000);
       resend();
    } 
    else if (readString == "right hand up")
    {
       Speechpoint05();
       for (pos = 10; pos <= 180; pos += 1) 
    { 
    RM1.write(pos);             
    delay(15);
    }
       delay(1000);
       resend();
    } 
    else if (readString == "left hand up")
    {
       Speechpoint05();
       for (pos = 165; pos >= 10; pos -= 1) 
    { 
    LM1.write(pos);             
    delay(15);                       
  }
      delay(1000);
       resend();
    } 
    else if (readString == "right hand down")
    {
       Speechpoint05();
       for (pos = 180; pos >= 10; pos -= 1) 
    { 
    RM1.write(pos);             
    delay(15);                       
  }

       delay(1000);
       resend();
    } 
    else if (readString == "left hand down")
    {
       Speechpoint05();
       for (pos = 10; pos <= 165; pos += 1) 
    { 
    LM1.write(pos);             
    delay(15);                       
  }
       delay(1000);
       resend();
    } 
    else if (readString == "hands up")
    {
       Speechpoint05();
       for (pos = 10; pos <= 180; pos += 1) 
    { 
    RM1.write(pos);             
    delay(15);
    }
    for (pos = 165; pos >= 10; pos -= 1) 
    { 
    LM1.write(pos);             
    delay(15);                       
  }
       delay(1000);
       resend();
    } 
    else if (readString == "hands down")
    {
       Speechpoint05();
       for (pos = 180; pos >= 10; pos -= 1) 
    { 
    RM1.write(pos);             
    delay(15);                       
  }
   for (pos = 10; pos <= 165; pos += 1) 
    { 
    LM1.write(pos);             
    delay(15);                       
  }
       delay(1000);
       resend();
    } 
    else if ((readString == "look right ")||(readString == "Luke Wright"))
    {
       Speechpoint05();
       for (pos = 90; pos <= 180; pos += 1) { 
    MM1.write(pos);
    delay(15);
  }

       delay(1000);
       resend();
    } 
    else if (readString == "look left")
    {
       Speechpoint05();
       for (pos = 90; pos <= 165; pos += 1) { 
      MM1.write(pos);
      delay(15);
  }
       delay(1000);
       resend();
    } 
    else if (readString == "catch it")
    {
       Speechpoint05();
       delay(1000);
       resend();
    } 
    else if ((readString == "throw away")||(readString == "threw away"))
    {
       Speechpoint05();
       delay(1000);
       resend();
    } 
    else if (readString == "are you ok")
    {
       delay(2000);
      Serial.write("1");
      readString="";
    } 
    else if ((readString == "eric's")||(readString == "ahrix")||(readString == "RX"))
    {
       Speechpoint1();
       delay(1000);
       resend();
    } 
    else if (readString == "look forward")
    {
       Speechpoint05();
       MM1.write(90);
       delay(1000);
       resend();
    } 
   
     else if (readString == "Tomar Naam Ki")
    {
       Speechpoint105();
       delay(1000);
       resend();
    }
    else if (readString == " ");
    {
       delay(2000);
      Serial.write("0");
      readString="";
    }    
  } 
}

 
