#define pinSensorD0 7
#define pinSensorA0 10
#define pinBuzzer 5

void setup() {
  pinMode(pinSensorD0, INPUT);
  pinMode(pinSensorA0, INPUT);
  pinMode(pinBuzzer, OUTPUT);
}

void loop() {
  //Leitura para o Módulo Reed Switch Vermelho (de 4 pinos)
  //bool estadoSensor = digitalRead(pinSensorD0);
  bool estadoSensor = !digitalRead(pinSensorA0);

  //Leitura para o Módulo Reed Switch Azul (de 3 pinos)
  //bool estadoSensor = !digitalRead(pinSensorD0);

  if (estadoSensor) {
    tone(pinBuzzer, 400); 
  } else {
    noTone(pinBuzzer);
  }

}
