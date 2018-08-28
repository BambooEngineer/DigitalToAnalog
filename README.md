# DigitalToAnalog
Failed Hardware while Software worked

The Idea was to take an N64 Third-Party SuperPad Controller and manipulate it's Analog Joystick with the very unused & underrated D-Pad. In N64 Video Games the D-Pad on each controller is barely put to good use while the crappy 'quick to break' joysticks are.
So I wanted to solve this problem by incorporating an Arduino Nano and wiring it to the unused D-PAD OUTPUTS and the ANALOG JOYSTICK INPUTS. I picked the Superpad Controller because its the only N64 controller with an Analog Joystick while the rest are used with incredibly complicated Encoders. 

So the Code worked ( I tested it on my breadboard of course ) but once the nano was wired to the controller nothing according to plan happened, the D-PAD outputs got extremely sticky ( Im guessing it was a ground short or something I have no idea, it couldnt have been a bridge to voltage NO WAY. I checked a million times with my multimeter if my soldering was precise enough ) and the Joystick started to move on its own ( In game, not the actual joystick ). The Nano was powered with the same Voltage the controller was and I checked what the joystick was running on before I wired up anything and it was running on the same Voltage so theres no explanation to why it freaked out even with it's original Voltage.

Not my first rodeo with Video Game Controllers, I can't even relocate a button without them freaking out, I have no luck with them. My multimeter proves they just hate me. 

The Software I thought was worth sharing with a description open for anyone to test on breadboard and maybe the project could be expanded upon.
