
int speaker = 6; 
int freq;

void setup() {
  Serial.begin (9600); //set up the communication 
  pinMode (LED, OUTPUT);

}

void loop() {
  freq = analogRead (A0);
  int output = map (freq, 0, 1023, 50, 2000);
  tone (speaker, output);
  Serial.print ("pot:  ");
  Serial.print (freq);
  Serial.print ("output:  ");
  Serial.print (output);
  
}
