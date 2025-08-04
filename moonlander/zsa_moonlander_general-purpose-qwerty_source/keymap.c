#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};



#define DUAL_FUNC_0 LT(7, KC_C)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TG(1),          
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           LGUI(LCTL(KC_LEFT)),                                LGUI(LCTL(KC_RIGHT)),KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           LT(3, KC_BSLS), 
    MT(MOD_LCTL, KC_ESCAPE),MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LSFT, KC_D),MT(MOD_LCTL, KC_F),KC_G,           KC_MINUS,                                                                       KC_EQUAL,       KC_H,           MT(MOD_RCTL, KC_J),MT(MOD_RSFT, KC_K),MT(MOD_LALT, KC_L),MT(MOD_RGUI, KC_SCLN),KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    DUAL_FUNC_0,    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_RIGHT,       MT(MOD_LALT, KC_APPLICATION),                                                                                                MT(MOD_LCTL, KC_ESCAPE),KC_DOWN,        KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_SPACE), 
    LT(2, KC_SPACE),KC_DELETE,      KC_LEFT_GUI,                    MT(MOD_RALT, KC_TAB),KC_BSPC,        LT(2, KC_ENTER)
  ),
  [1] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_MINUS,                                       KC_EQUAL,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TAB,         KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_ESCAPE,      KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_HOME,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_9,           KC_0,           KC_B,           KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       
    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_NO,          
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_NO,                                          KC_NO,          KC_NO,          KC_7,           KC_8,           KC_9,           KC_KP_SLASH,    KC_KP_ASTERISK, 
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_AMPR,        KC_BSLS,                                                                        CW_TOGG,        KC_ASTR,        KC_4,           KC_5,           KC_6,           KC_KP_MINUS,    KC_KP_PLUS,     
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_GRAVE,                                       KC_TILD,        KC_1,           KC_2,           KC_3,           KC_EQUAL,       KC_ENTER,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_DOT,         KC_COMMA,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, RGB_HUD,        RGB_HUI,        RGB_VAD,        RGB_VAI,        KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_SAD,        RGB_SAI,        RGB_MODE_FORWARD,TOGGLE_LAYER_COLOR,KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, 
    AU_TOGG,        RGB_SPD,        RGB_SPI,        KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, 
    MU_TOGG,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          MAGIC_TOGGLE_NKRO,KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    MU_NEXT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', '*', '*', 'R', 'R', 'R', 'R', 'R',
                 '*', '*', '*', '*', '*', '*'
);



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {254,211,255}, {254,211,255}, {254,211,255}, {254,211,255}, {0,0,0}, {205,255,224}, {205,255,224}, {205,255,224}, {0,0,0}, {0,0,0}, {205,255,224}, {205,255,224}, {205,255,224}, {0,0,0}, {0,0,0}, {205,255,224}, {205,255,224}, {205,255,224}, {254,211,255}, {0,0,0}, {205,255,224}, {205,255,224}, {205,255,224}, {254,211,255}, {0,0,0}, {205,255,224}, {205,255,224}, {205,255,224}, {0,0,0}, {254,211,255}, {205,255,224}, {254,211,255}, {254,211,255}, {254,211,255}, {254,211,255}, {254,211,255}, {254,211,255}, {205,255,224}, {254,211,255}, {254,211,255}, {0,0,0}, {205,255,224}, {205,255,224}, {205,255,224}, {0,0,0}, {0,0,0}, {205,255,224}, {205,255,224}, {205,255,224}, {0,0,0}, {0,0,0}, {205,255,224}, {205,255,224}, {205,255,224}, {254,211,255}, {0,0,0}, {205,255,224}, {205,255,224}, {205,255,224}, {254,211,255}, {0,0,0}, {205,255,224}, {205,255,224}, {205,255,224}, {0,0,0}, {254,211,255}, {205,255,224}, {254,211,255}, {254,211,255}, {254,211,255}, {254,211,255} },

    [1] = { {9,255,255}, {254,211,255}, {254,211,255}, {254,211,255}, {254,211,255}, {9,255,255}, {254,211,255}, {254,211,255}, {254,211,255}, {0,0,0}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {254,211,255}, {254,211,255}, {254,211,255}, {254,211,255}, {254,211,255}, {254,211,255}, {9,255,255}, {254,211,255}, {254,211,255}, {9,255,255}, {9,255,255}, {9,255,255}, {254,211,255}, {254,211,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {254,211,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {9,255,255}, {254,211,255}, {254,211,255}, {254,211,255}, {254,211,255} },

    [2] = { {0,0,0}, {0,0,192}, {0,0,192}, {0,0,0}, {0,0,0}, {251,221,188}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {251,221,188}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {251,221,188}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {251,221,188}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {251,221,188}, {152,255,255}, {152,255,255}, {152,255,255}, {251,221,188}, {0,0,0}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {74,255,255}, {0,0,0}, {251,221,188}, {41,255,255}, {41,255,255}, {74,255,255}, {0,0,0}, {251,221,188}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {251,221,188}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {251,221,188}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {251,221,188}, {0,0,0}, {152,255,255}, {152,255,255}, {251,221,188}, {0,0,0}, {251,221,188}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {251,221,188}, {251,221,188}, {251,221,188}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {208,245,247}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {208,245,247}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {251,221,188}, {0,0,0}, {208,245,247}, {208,245,247}, {0,0,0}, {0,0,0}, {0,0,0}, {208,245,247}, {208,245,247}, {0,0,0}, {0,0,0}, {0,0,0}, {208,245,247}, {208,245,247}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {251,221,188}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(KC_K)));
        } else {
          unregister_code16(LALT(LGUI(KC_K)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}



