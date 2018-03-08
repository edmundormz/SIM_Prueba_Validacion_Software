#include "mbed.h"

AnalogIn analog_value_0(A0);
AnalogIn analog_value_1(A1);

PwmOut mypwm(PWM_OUT);
DigitalOut led(LED1);

int main()
{
    float read_A0;
    float volts_A0;
    
    float read_A1;
    float volts_A1;

    while(1) {

        read_A0 = analog_value_0.read();
        volts_A0 = read_A0 * 3300;
        
        read_A1 = analog_value_1.read();
        volts_A1 = read_A1 * 3300;
        
        // Display values
        printf("read_A0 = %f = %.0f mV = %.0f\r\n", read_A0*100, volts_A0);
        printf("read_A1 = %f = %.0f mV = %.0f)\r\n", read_A1*100, volts_A1);
        wait(1.0); // 1 second
    }
}
