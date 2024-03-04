

#include "chip8.h"

int main(int argc, char **argv[])
{

    //Implementero con opengl
    setupGraphics();
    setupInput();

    //Emulazione
    chip8.initialize();
    chip8.loadGame();

    for(;;){
        chip8.emulateCycle();


        if(chip8.drawFlag)
            drawGraphics();


        chip8.setKeys();
    }


    return 0;
}
