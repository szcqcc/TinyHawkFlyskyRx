/*
    TinyHawkFlyskyRx
    Copyright 2018 Peter Nemcsik

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    https://github.com/nepeee/TinyHawkFlyskyRx
*/

#ifndef _LED_H_
#define _LED_H_

#include <cc2510fx.h>
#include "portmacros.h"
#include "config.h"

#define LED_GREEN_DIR PORT2DIR(LED_GREEN_PORT)
#define LED_RED_DIR   PORT2DIR(LED_RED_PORT)
#define LED_RED_BIT   PORT2BIT(LED_RED_PORT, LED_RED_PIN)
#define LED_GREEN_BIT PORT2BIT(LED_GREEN_PORT, LED_GREEN_PIN)

#define led_green_init() { LED_GREEN_DIR |= (1 << LED_GREEN_PIN); led_green_off(); }
#define led_green_on()  { LED_GREEN_BIT = 1; }
#define led_green_off() { LED_GREEN_BIT = 0; }
#define led_green_toggle()  { LED_GREEN_BIT = !LED_GREEN_BIT; }

#define led_red_init()  { LED_RED_DIR |= (1 << LED_RED_PIN); led_red_off(); }
#define led_red_on()    { LED_RED_BIT = 1; }
#define led_red_off()   { LED_RED_BIT = 0; }
#define led_red_toggle()   { LED_RED_BIT = !LED_RED_BIT; }

#define led_init() { led_red_init(); led_green_init(); }

#endif
