#include QMK_KEYBOARD_H
#ifdef RGB_MATRIX_ENABLE
bool rgb_matrix_indicators_user(void){
    for(uint8_t r=0;r<3;r++){
        for(uint8_t c=0;c<3;c++){
            if(matrix_is_on(r,c)){
                rgb_matrix_set_color(r*3+c,255,255,255);
            }
        }
    }
    return true;
}
#endif
