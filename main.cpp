#include "mbed.h"

int main()
{
    AnalogIn potenciometar(PA_0);
    PwmOut dioda(PB_15);
    //AnalogOut dioda(LED1); Dioda na plocici podrzava AnalogOut

    while (true) {
        dioda = potenciometar; // Potenciometar vraca vrednost od 0 do 1, a dioda takodje prihvata vrednost u istom opsegu
        ThisThread::sleep_for(10ms);
    }
}

