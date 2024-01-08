#include "settings.h"

class comp_mouse {
public:

    string color;
    string maker;
    string model;
    bool RGB;
    bool additional_buttons;

    void scroll() {
        cout << "Mouse wheel is scrolling\n";
    }
    void RGB_on() {
        cout << "Backlight on\n";
    }
    void RGB_off() {
        cout << "Backlight off\n";
    }
    void slide() {
        cout << "Mouse is sliding\n";
    }
    void not_slide() {
        cout << "Mouse isn't sliding\n";
    }
    void pc_connected() {
        cout << "The mouse is connected to the computer\n";
    }
    void pc_unconnected() {
        cout << "The mouse isn't connected to the computer\n";
    }
};

class machete {
public:

    string handle_color;
    string blade_color;
    bool machete_teeth;
    bool is_sharpened;
    bool is_clean;

    void chop() {
        cout << "Machete chops\n";
    }
    void cut() {
        cout << "Machete cuts\n";
    }
    void blunt() {
        cout << "The blade is blunt\n";
    }
    void sharpened() {
        cout << "The blade is sharpened\n";
    }
    void stuck() {
        cout << "The machete is stuck\n";
    }
};

class mousepad {
public:

    string color;
    bool pattern;
    bool is_whole;
    bool is_wet;
    bool is_ontable;

    void on_table() {
        cout << "The mouse pad is on the table\n";
    }
    void in_wash() {
        cout << "The mouse pad in the wash\n";
    }
    void whole() {
        cout << "The mouse pad is whole\n";
    }
    void torn() {
        cout << "The mouse pad is torn\n";
    }
    void end_usefullife() {
        cout << "The mouse pad has reached the end of its useful life, it's time to buy a new one\n";
    }
};

int main()
{
    
}
