#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           LGUI(LCTL(KC_LEFT)),                                LGUI(LCTL(KC_RIGHT)),KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TG(1),          
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           LT(3,KC_BSLS),  
    KC_ESCAPE,      MT(MOD_LSFT, KC_A),KC_S,           KC_D,           KC_F,           KC_G,           KC_MINUS,                                                                       KC_EQUAL,       KC_H,           KC_J,           KC_K,           KC_L,           MT(MOD_RSFT, KC_SCLN),KC_QUOTE,       
    KC_TRANSPARENT, MT(MOD_LCTL, KC_Z),KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RCTL, KC_SLASH),KC_TRANSPARENT, 
    LALT(LCTL(LSFT(KC_M))),KC_LEFT_ALT,    KC_TRANSPARENT, KC_LEFT,        KC_RIGHT,       TD(DANCE_0),                                                                                                    MEH_T(KC_APPLICATION),KC_DOWN,        KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_SPACE), 
    LT(2,KC_SPACE), KC_DELETE,      KC_LEFT_GUI,                    MT(MOD_LALT, KC_TAB),KC_BSPC,        LT(2,KC_ENTER)
  ),
  [1] = LAYOUT_moonlander(
    KC_GRAVE,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS,                                       KC_EQUAL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_ESCAPE,      KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_HOME,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_9,           KC_0,           KC_B,           KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       
    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_NO,          
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_NO,                                          KC_NO,          KC_NO,          KC_7,           KC_8,           KC_9,           KC_KP_SLASH,    KC_KP_ASTERISK, 
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_AMPR,        KC_BSLS,                                                                        KC_GRAVE,       KC_ASTR,        KC_4,           KC_5,           KC_6,           KC_KP_MINUS,    KC_KP_PLUS,     
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,                                        KC_NO,          KC_1,           KC_2,           KC_3,           KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_DOT,         KC_COMMA,       KC_DOWN,        KC_UP,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          RGB_VAD,        RGB_VAI,        KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, 
    AU_TOGG,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_TRANSPARENT, 
    MU_TOGG,        KC_NO,          KC_NO,          RGB_MODE_FORWARD,TOGGLE_LAYER_COLOR,KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    MU_NEXT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(2,KC_SPACE):
            return TAPPING_TERM + 30;
        case LT(3,KC_BSLS):
            return TAPPING_TERM + 30;
        case LT(2,KC_ENTER):
            return TAPPING_TERM + 30;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {188,255,255}, {188,255,255}, {0,0,0}, {188,255,255}, {0,0,233}, {0,0,233}, {0,0,233}, {0,0,233}, {188,255,255}, {0,0,233}, {0,0,233}, {0,0,233}, {0,0,233}, {0,0,0}, {0,0,233}, {0,0,233}, {0,0,233}, {0,0,233}, {188,255,255}, {0,0,233}, {0,0,233}, {0,0,233}, {0,0,233}, {188,255,255}, {0,0,233}, {0,0,233}, {0,0,233}, {0,0,233}, {188,255,255}, {0,0,0}, {0,0,233}, {188,255,255}, {188,255,255}, {188,255,255}, {252,255,232}, {234,255,255}, {152,255,255}, {0,0,233}, {0,0,0}, {188,255,255}, {0,0,233}, {0,0,233}, {0,0,233}, {0,0,233}, {0,0,0}, {0,0,233}, {0,0,233}, {0,0,233}, {0,0,233}, {0,0,0}, {0,0,233}, {0,0,233}, {0,0,233}, {0,0,233}, {188,255,255}, {0,0,233}, {0,0,233}, {0,0,233}, {0,0,233}, {188,255,255}, {0,0,233}, {0,0,233}, {0,0,233}, {0,0,233}, {188,255,255}, {0,0,0}, {0,0,233}, {188,255,255}, {188,255,255}, {188,255,255}, {252,255,232} },

    [1] = { {249,171,246}, {252,255,232}, {252,255,232}, {0,0,0}, {188,255,255}, {249,171,246}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {249,171,246}, {249,171,246}, {234,255,255}, {249,171,246}, {249,171,246}, {249,171,246}, {234,255,255}, {234,255,255}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {234,255,255}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {249,171,246}, {249,171,246}, {0,0,0}, {234,255,255}, {249,171,246}, {249,171,246}, {249,171,246}, {234,255,255}, {234,255,255}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {234,255,255}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {249,171,246}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232} },

    [2] = { {0,0,0}, {0,0,192}, {0,0,192}, {0,0,0}, {0,0,0}, {252,255,232}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {252,255,232}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {252,255,232}, {152,255,255}, {152,255,255}, {152,255,255}, {234,255,255}, {252,255,232}, {152,255,255}, {152,255,255}, {152,255,255}, {234,255,255}, {252,255,232}, {152,255,255}, {152,255,255}, {152,255,255}, {252,255,232}, {0,0,0}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {0,0,0}, {234,255,255}, {252,255,232}, {41,255,255}, {41,255,255}, {74,255,255}, {234,255,255}, {252,255,232}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {252,255,232}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {252,255,232}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {252,255,232}, {0,0,0}, {152,255,255}, {0,0,0}, {252,255,232}, {0,0,0}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {234,255,255}, {234,255,255}, {234,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {234,255,255}, {0,0,0}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_DOT));
        tap_code16(LGUI(KC_DOT));
        tap_code16(LGUI(KC_DOT));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_DOT));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_DOT)); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_DOT)); register_code16(LGUI(KC_DOT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_DOT)); register_code16(LGUI(KC_DOT));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_DOT)); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_DOT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_DOT)); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};
