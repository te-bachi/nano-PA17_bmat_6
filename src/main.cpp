/*******************************************************************************
 * nano-PA17_bmat_6 (c) 2017
 * Andreas Bachmann
 * 11.11.2017
 *
 * https://github.com/te-bachi/nano-PA17_bmat_6
 */

 #include "Leishman.h"


void setup() {
    Leishman::begin();
    Serial.println("Done!");
}

void loop() {
    cli.check();
}
