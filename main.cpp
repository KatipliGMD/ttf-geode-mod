#include <Geode/Geode.hpp>
#include <Geode/modify/CCLabelBMFont.hpp>

using namespace geode::prelude;

// This "hooks" into every label in the game
class $modify(CCLabelBMFont) {
    bool initWithString(const char* str, const char* font) {
        // Here, we tell the game: "Ignore the default font, use my TTF instead"
        // You can link this to a setting later!
        return CCLabelBMFont::initWithString(str, "goldFont.fnt"); 
    }
};
