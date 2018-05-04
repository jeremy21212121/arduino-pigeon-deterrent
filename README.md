# Code for an arduino-based remote-controlled device for deterring pigeons from roosting nearby

## Ummm...?

Pigeons made a nest on my deck last year and they made quite a mess. This year I resolved to prevent this, without harming them of course.

## How to use it

Press a button and scare the pigeons away. This is acheived with a high-frequency, high-voltage electrical arc of 1-2cm in length. The sound produced by this arcing causes the pigeons to leave the immediate area of the device very quickly. This allows me to scare the pigeons off my deck from the comfort of my apartment.

NB. The pigeons are not being electricuted, let me make that very clear. The sound the arc makes scares the pigeons, as they are very sensitive to low-frequency sound. This is how they are able to fly off before an earthquake occurs.

## Required hardware

I used the following to make this device:

-Arduino Nano clone

-High voltage inverter module (from ebay, etc)

-433mHz Transmitter/Receiver (key fob/garage door opener style, IC2262 based)

-USB power bank (~4000mAh gives me almost a week of battery life)

-Lithium battery capable of supplying 4v @ 2A. I recommend a good 18650 cell. I used a samsung INR18650-20Q, but any decent 18650 should do.

-5v relay module


## Method of operation


The arduino is connected with the 433mhz receiver and relay module. When it receives a signal from the 433mHz transmitter, it activates the relay which powers the high-voltage inverter, creating an arc across the 1-2cm spark gap.


It should be noted that this could be super dangerous and I'm not responsible for your actions. Don't touch the high-voltage leads when powered, or you'll have a bad time.

## Opportunities for optimization


The whole arduino can be removed from this setup, which would make it about 1000x more energy efficient. The problem is the relay module: They "turn on" at 0v (LOW) instead of 5v (high). This doesn't make sense to me, but this seems to be the way these common 5v relay modules are setup.


If the relay module "turned on" at 5V, the receiver module could be powered and connected directly to the relay, as it's pins go "HIGH" (5v) when it receives a signal.
