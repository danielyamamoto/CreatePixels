#include "Pixels.h"

void Pixels::putPixel(int x, int y, int r, int g, int b) {
	pix.setColor(x, y, (r, g, b)); // Inicialización del putpixel
}

void Pixels::getPixel() {
	tex.loadData(pix); // Carga los pixeles que serán del bitmap
}

void Pixels::init() {
	pix.allocate(1024, 768, OF_PIXELS_RGB); // Crea espacio en la memoria
	tex.allocate(1024, 768, GL_RGB); // Canvas
	//putPixel(50, 50, 255, 0, 0);
}

void Pixels::draw() {
	tex.draw(0, 0); // Permite dibujar el bitmap desde la cordena 0,0. Si se llega a mover, el canvas del bitmap se mueve con él.
}
