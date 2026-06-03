#include QMK_KEYBOARD_H
#ifdef OLED_ENABLE
bool oled_task_user(void){
    oled_clear();
    oled_write_ln_P(PSTR("Layer"), false);
    switch(get_highest_layer(layer_state)){
        case 0: oled_write_ln_P(PSTR("BASE"), false); break;
        case 1: oled_write_ln_P(PSTR("L1"), false); break;
        case 2: oled_write_ln_P(PSTR("L2"), false); break;
        case 3: oled_write_ln_P(PSTR("L3"), false); break;
    }
    return false;
}
#endif
