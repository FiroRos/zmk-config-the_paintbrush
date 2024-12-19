#include <zmk/display/status_screen.h>
#include <zmk/event_manager.h>
#include <lvgl.h>

static const char *test_message = "Hello, ZMK!";
static lv_obj_t *test_label;

void test_widget_init(lv_obj_t *parent) {
    test_label = lv_label_create(parent);
    lv_label_set_text(test_label, test_message);
    lv_obj_align(test_label, LV_ALIGN_CENTER, 0, 0);  // Center the text
}

void test_widget_update() {
    lv_label_set_text(test_label, test_message);  // Update the text (if dynamic)
}

ZMK_DISPLAY_WIDGET_LIST_ITEM(test_widget, test_widget_init, test_widget_update);
