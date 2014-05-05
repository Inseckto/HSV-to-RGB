Usage:

// Include the file "HSV2RGB.c"
#include "HSV2RGB.c"

// Declare a variable of type RGBColor
RGBColor color;

// The function hsv2rgb(h, s, v) returns a struct with the properties r, g and b.
// You can set the Hue from 0 to 360. Saturation and Value from 0 to 100.
color = hsv2rgb(i, 100, 100);

// Use the RGBColor's r, g and b properties.
analogWrite(redLED, color.r);
analogWrite(greenLED, color.g);
analogWrite(blueLED, color.b);