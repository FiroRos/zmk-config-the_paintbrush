#include <zmk/display.h>
#include <zmk/widgets/layer_status.h>
#include <zmk/widgets/battery_status.h>
#include <zmk/widgets/output_status.h>
#include <zmk/widgets/logo.h>

static struct zmk_widget_layer_status layer_status_widget;
static struct zmk_widget_battery_status battery_status_widget;
static struct zmk_widget_output_status output_status_widget;
static struct zmk_widget_logo logo_widget;

void zmk_display_status_screen() {
    zmk_widget_layer_status_init(&layer_status_widget, lv_scr_act());
    zmk_widget_battery_status_init(&battery_status_widget, lv_scr_act());
    zmk_widget_output_status_init(&output_status_widget, lv_scr_act());
    zmk_widget_logo_init(&logo_widget, lv_scr_act());

    zmk_widget_layer_status_set_pos(&layer_status_widget, 0, 0);
    zmk_widget_battery_status_set_pos(&battery_status_widget, 64, 0);
    zmk_widget_output_status_set_pos(&output_status_widget, 0, 16);
    zmk_widget_logo_set_pos(&logo_widget, 64, 16);
}
