/*
   Fundacion Kinal
   Centro Educativo Tecnico Laboral Kinal
   Quinto Perito
   Quinto Electronica
   Codigo Tecnico: EB5AM
   Curso:Taller Electrónica Digital y Reparación de Computadoras I 
   Proyecto: Como leer un pin digital 
   Alumno: Denis Estuardo de Jesús Ramírez Padilla 
   Fecha : 12 de abril del 2024
*/

// Directivas del preprocesador
    #define LedVerde 4          //Pin4 conectado a un led 
    #define tiempo_espera 500    //Tiempo entre estados del led

void setup()
{
  pinMode(LedVerde, OUTPUT);    //Pin4 como salida 
  digitalWrite(LedVerde, LOW);   // LED conectado al pin13 inicia apagado 
}

void loop()
{
  digitalWrite(LedVerde, HIGH);  //Enciendo el led conectado al pin4
  delay(tiempo_espera);    // Espera de 500 milisegundos.
  digitalWrite(LedVerde, LOW);   //Apago el led conectado al pin4
  delay(tiempo_espera);   // espera de 500 miliseugndos
}