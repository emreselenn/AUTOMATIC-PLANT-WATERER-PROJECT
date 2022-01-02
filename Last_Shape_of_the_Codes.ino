/*
 * Author Name: Yunus Emre Selen
 * Project Name: Automatic Plant Waterer
 * Univerity: Eskişherir Osmangazi Univerity
 * Department: E.E.E
 */



int sensor = A0;
int motor = 4 ;

int data;


void setup() {
  pinMode(sensor,INPUT);
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  data=analogRead(sensor);
  Serial.println(data);

if(veri>600)
{
  digitalWrite(motor,HIGH);
  delay(3000);
  digitalWrite(motor,LOW);
  delay(3000);
  data=analogRead(sensor);
  if(data>600){
    digitalWrite(motor,HIGH);
    delay(2000);
    digitalWrite(motor,LOW);
    delay(5000);
    }else {
      digitalWrite(motor,LOW);
      }
  }else{
    digitalWrite(motor,LOW);
    }
}
