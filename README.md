# Make Blink - Week 3
## STM32F411E-DISCO Evaluation Board
On your final project board, make blinky for yourself. Then add a button to turn the LED on and
off. Bonus points for making the button cause an interrupt. Triple bonus points for debouncing
the button signal.

## What are the hardware registers that cause the LED to turn on and off? 
I'm controlling the orange LED (LD3) which is connected to the processor on I/O PD13.

This pin is controlled from the GPIO port output data register:  GPIOD_ODR

## What are the registers that you read in order to find out the state of the button?
I'm monitoring the USER button (B1) which is connected to the processor on I/O PA0.

This pin can be monitored from the GPIO port input data register:  GPIOD_IDR

## Can you read the register directly and see the button change in a debugger?

Button Not Pressed:  ![button_not_pressed](https://user-images.githubusercontent.com/82601580/190712454-a88d70f7-3708-4e06-9bc5-31b16318f780.png)

Button Pressed:  ![button_pressed](https://user-images.githubusercontent.com/82601580/190712461-eb12781f-7f67-4ef2-bd9d-b318d549ee65.png)
