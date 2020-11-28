#include "lib/io.h"
#include "lib/logo.h"

/*
    Moon OS
        - A simple OS for x86_64 hardware -
        - Made by Athanasius Sokol -
    Importent note: if binary goes past 0x20000 then you will need to update bootloader
    Importent note: type double and float will cause a crash, to fix look into enabling SSE
*/

extern "C" void kmain(){
    logo();
    for(;;);
}
