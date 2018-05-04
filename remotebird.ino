//this code is for the pigeon terrifier. When a button is pressed on the wireless remote, a relay powers a high-voltage transformer/inverter that creates a 1-2cm arc. It causes any pigeons nearby to promptly take flight. Initial testing suggests they do not develop a tolerance to the noise of the arc.
int relayPin = 2;
int receiverPin = 12;

int receiverVal = 0;
//changes to 1 when receiving a signal
int duration = 500;
//how long the relay stays on for when it receives a signal, in milliseconds

void setup()
{
  pinMode(relayPin, OUTPUT);
  pinMode(receiverPin, INPUT);
  digitalWrite(relayPin, HIGH);
  //for some stupid reason, these cheap 5v relay boards use HIGH for off and LOW for on. So we must set the relayPin to high to prevent unwanted arcs. If these relay boards were setup for LOW=off, we wouldnt even need an arduino as the receiver module goes HIGH when it gets a signal, which would trigger the relay.
}
void loop()
{
  receiverVal = digitalRead(receiverPin);
  //read value from receiver module
  if(receiverVal==HIGH){
    //if we receive a signal, turn on the relay for int duration. Lastly, we set receiverVal to LOW. This is probably not necessary, because the first line of the loop will be called next and it should do the same thing. But I really don't want any surprise arcs and 
   digitalWrite(relayPin, LOW);
   delay(duration);
   digitalWrite(relayPin, HIGH);
   receiverVal = LOW;
  }

 

}
