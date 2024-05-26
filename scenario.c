#include "decision.c"


Scenario mall = {
    1,
    "Beverly Hills Mall",
    "This is the Beverly Hills Center Mall, an upscale shopping center in Beverly Hills. The character loves to spend his/her evenings there buying any type of clothes or just looking and trying them.", 
    &dec1,  //Batle decision
    NULL, 
    &dec2   //Scenario decision
    };


Scenario uni = {
    2,
    "Malibu University",
    "Malibu University (more commonly called \"Mali-U\" for short) is the college that Sam, Clover, Alex, Blaine and Mandy attend. Sam, Clover, Alex and Mandy graduated from Beverly Hills High.", 
    &dec3,  //Prison --> University 
    &dec4   //University --> Penthouse
    };


Scenario prison = {
    3,
    "Whoop prison",
    "Here is where they imprison all their enemies. It is a high security prison but sometimes a prisoner escapes and the security needs the help from the spies to put them back in their cells.", 
    &dec5,  //
    &dec6
    };


Scenario house = {
    4,
    "Spies’ Penthouse",
    "This is where the character lives, it is a huge penthouse with 2 pools and over 8 rooms. The character gets the house as a present from her/his parents when he/she moves to university.", 
    &dec7,
    };
