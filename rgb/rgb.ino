int pot = 0 ;
int val = 0 ;

int redPin = 3 ;
int greenPin = 6 ;
int bluePin = 5 ;

void setup()
{
  Serial.begin(9600) ;
  pinMode( redPin, OUTPUT ) ;
  pinMode( greenPin, OUTPUT ) ;
  pinMode( bluePin, OUTPUT ) ;
}

void loop()
{
  val = analogRead( pot ) ;
  Serial.println(val) ;
  if ( val < 300 )
  {
    setColor( 1023, 0, 0 ) ;
  }
  else if ( val < 600 )
  {
    setColor( 1023, 1023, 0 ) ;
  }
  else
  {
    setColor( 0, 1023, 1023 ) ;
  }
}

void setColor(int red, int green, int blue)
{
  analogWrite( redPin, 1023 - red ) ;
  analogWrite( greenPin, 1023 - green ) ;
  analogWrite( bluePin, 1023 - blue ) ;  
}


