#include <3ds.h>
#include <stdio.h>

int main() {
    gfxInitDefault();
    consoleInit(GFX_TOP, NULL);

    printf("Hack ROM Builder 3DS\n");
    printf("Baixe patches e envie para build!\n");

    while (aptMainLoop()) {
        hidScanInput();
        if (hidKeysDown() & KEY_START) break;
        gfxFlushBuffers();
        gfxSwapBuffers();
        gspWaitForVBlank();
    }

    gfxExit();
    return 0;
}
