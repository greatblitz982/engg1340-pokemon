#ifndef SCREEN_RENDERER
#define SCREEN_RENDERER

#include <string>

class Map;

class ScreenRenderer {
	public:
		void clearScreen();
		void printToScreen(std::string s = "");
		char inputCharNoEnter(std::string s = "");
		std::string inputString(std::string s = "");
		int inputInt(std::string s = "");
		void printRenderableMap(Map);
};
#endif
