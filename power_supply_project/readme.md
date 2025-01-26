# Intro
This project is part of my learning for the learning the Art of Electronics. It is a simple power supply that I made based on what I've learned.

# Regulator calculations
## Output Voltage
Vref = 1.25V

R2 = 2k

R4 = 2.2k

R5 = 0 - 10k

Next part is going to ignore the I<sub>ref</sub> error term that comes out of the reference terminal for simplicity.

Vout ~ Vref[1 + (R4+R5)/R2]

The minimum Vout would then be:
Vout = 1.25V + 1.25V(2.2k/2k)
     = 2.6V

The maximum Vout would then be:
Vout = 1.25V + 1.25V(12.2k/2k)
     = 8.9V


