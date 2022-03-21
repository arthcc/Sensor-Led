#define LRD A1
#define LED 3
#define POT A0

int VALORlrd =0;
int VALORpoten =0;
int pwm =0;

void setup ()
{
  pinMode(LRD, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
  Serial.begin(9600);
}

void loop ()
{
  VALORlrd = analogRead(A1);
  Serial.println(VALORlrd);
  if(VALORlrd < 145){
    VALORpoten = analogRead(POT);
    pwm = map(VALORpoten, 0, 1023, 0, 255);
    analogWrite(LED,pwm);
  }else{
    digitalWrite(LED,LOW);
  }
}     

  