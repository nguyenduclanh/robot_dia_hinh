

#define DIR1 2
#define PWM1 3
#define DIR2 4
#define PWM2 5
#define DIR3 6
#define PWM3 7
#define DIR4 8
#define PWM4 9

uint8_t temp=0;
uint8_t temp_old=0;

void setup() {
  Serial.begin(9600);
  pinMode(DIR1,OUTPUT);
  pinMode(PWM1,OUTPUT);
  pinMode(DIR2,OUTPUT);
  pinMode(PWM2,OUTPUT);
    pinMode(DIR3,OUTPUT);
  pinMode(PWM3,OUTPUT);
    pinMode(DIR4,OUTPUT);
  pinMode(PWM4,OUTPUT);
  
   digitalWrite(DIR1,HIGH);
   digitalWrite(PWM1,HIGH);
   digitalWrite(DIR2,HIGH);
   digitalWrite(PWM2,HIGH);
   digitalWrite(DIR3,HIGH);
   digitalWrite(PWM3,HIGH);
   digitalWrite(DIR4,HIGH);
   digitalWrite(PWM4,HIGH);
  
  // put your setup code here, to run once:

}

void loop() {

  if(Serial.available()>0)
   {
     temp= Serial.read();
     Serial.write(temp);
    }
   if(temp==' ')
   {
     banhtrai(0,0);
     banhphai(0,0);
    }

   if(temp=='w')
   {
      banhtrai(200,0);
     banhphai(200,0);
    }
       if(temp=='s')
   {
      banhtrai(200,1);
     banhphai(200,1);
    }
       if(temp=='a')
   {
      banhtrai(200,1);
     banhphai(200,0);
    }
       if(temp=='d')
   {
      banhtrai(200,0);
     banhphai(200,1);
    }
  // put your main code here, to run repeatedly:

}
//========================
void banhtrai(int v1,int dir)
{
    analogWrite(PWM1,255-v1);
    if(dir==1)
     { 
         digitalWrite(DIR1,HIGH);
      }
    else if(dir==0)
      {digitalWrite(DIR1,LOW);}
  }

 //==========================
void banhphai(int v2,int dir)
{
    analogWrite(PWM2,255-v2);
    if(dir==1)
     { 
         digitalWrite(DIR2,HIGH);
      }
    else if(dir==0)
      {digitalWrite(DIR2,LOW);}
  }
