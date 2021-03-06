#include <stdio.h>
#include "esp_log.h"
#include "sdkconfig.h"

#include "led.h"

static const char *TAG = "boobs";

void startup_sequence(void) {
    /* display rainbow on startup to test led */
    configure_led();
}

void app_main(void)
{
    /* Configure the peripheral according to the LED type */
    startup_sequence();
}
