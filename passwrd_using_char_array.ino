//to change password

int f=0,k=0;
void setup()
{
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.println("PRESS 1: To enter your password");
  Serial.println("PRESS 2: To change your password");
}
char b[7]="abcd";
void loop() 
{
  char a[5],u[100];
  int i,j,p;
  while(!Serial.available());
  p=Serial.parseInt();
  if(p==1)
  {
  Serial.read();
  Serial.println("Enter your password: ");
  
  for(i=0;a[i]!='.';i++)
  {
   while(!Serial.available()); 
   a[i] =Serial.read();
   
   if(a[i]=='.')
   break;
  }
   a[i]='\0';
   Serial.println(a);
   
   f=strcmp(a,b);
  
   if(f==0)
 { digitalWrite(10,HIGH);
   delay(2000);
   digitalWrite(10,LOW);
 } 
   else{
   digitalWrite(11,HIGH);
   delay(2000);
   digitalWrite(11,LOW);
   }
}

if(p==2)
 {       
         Serial.read();
         Serial.println("Enter the password: ");
         for(i=0;a[i]!='.';i++)
         {
               while(!Serial.available()); 
               a[i] =Serial.read();
               if(a[i]=='.')
               break;
          }
         a[i]='\0';
         Serial.println(a);
         k=strcmp(a,b);;
         if(k==0)
         {
          Serial.println("enter the new password");
          for(i=0;b[i]!='.';i++)
         {
               while(!Serial.available()); 
               b[i] =Serial.read();
               if(b[i]=='.')
               break;
          }
         b[i]='\0';
         Serial.println(b);
          }
              
 } 
}
