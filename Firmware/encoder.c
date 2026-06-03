#include QMK_KEYBOARD_H
bool encoder_update_user(uint8_t index, bool clockwise){
    uint8_t layer = get_highest_layer(layer_state);
    layer = clockwise ? ((layer + 1) % 4) : ((layer + 3) % 4);
    layer_move(layer);
    return false;
}
