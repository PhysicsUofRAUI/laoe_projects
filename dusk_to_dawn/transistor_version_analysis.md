# Summary
For my dusk to dawn I assembled three different boards for testing. This document will quickly summarize the results and the expectations I had going in. There is also a csv file saved here with the data if one wanted to look at that.

This was a learning experience for me so some of my assumptions may have been wrong and some of the explanations I have to explain the data may also be wrong.

## Expectations
| Test Point | In the Dark | In Light | Description |
|------------|----------|-------------| ----------- |
| J1         | 1.224mA  | 0.147mA     | Total Current |
| J2         | 35uA     | 35uA        | Total Current from transistors to bottom mirror |
| J3         | 35uA     | 0           | Current From Comparison part      |
| J4         | 35uA     | 35uA        | Setting for bottom current mirror |
| J5         | 35uA     | 0           | Current from pnp darlington |
| J6         | 1mA      | 0           | Current through LED |
| J7         | 0        | 35uA        | Current from photoresistor side |

To view my expectation calculations please view the videos on my YouTube in particular the one where I go through it before measuring.

## Measured Values
| Test Point | In the Dark | In Light | Description |
|------------|----------|-------------| ----------- |
| J1         | 1.37mA   | 0.241mA     | Total Current |
| J2         | 36uA     | 37uA        | Total Current from transistors to bottom mirror |
| J3         | 36uA     | 0           | Current From Comparison part      |
| J4         | 33uA     | 34uA        | Setting for bottom current mirror |
| J5         | 35uA     | 0           | Current from pnp darlington |
| J6         | 1.09mA   | 0.16uA      | Current through LED |
| J7         | 0        | 37uA        | Current from photoresistor side |

## Extra Test Points
I added a test point later to measure the current through the photoresistor and it was 91uA in the light and 6uA in the dark. 

One was also added on the collector of Q1 (top current source on the setting side). In the light it had 85nA from it and in the low light it had 2.5uA, in the dark it had 0. 

# YouTube Videos
Please see the following videos for more information

Quick overview: https://www.youtube.com/watch?v=ljG93Xvj3Uw