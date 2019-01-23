void pinsetup(){
  pinMode(ENABLE,OUTPUT);
  digitalWrite(ENABLE,LOW);
  
  pinMode(XLIMIT,INPUT_PULLUP);
  pinMode(YLIMIT,INPUT_PULLUP);
  pinMode(ZLIMIT,INPUT_PULLUP);
  
  
}

