/*
 * This file is part of the chronometer project.
 * Copyright 2019 Edward V. Emelianov <edward.emelianoff@gmail.com>.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#ifndef STR_H__
#define STR_H__

// usb commands
// lower and upper limits to capture
#define CMD_DISTMIN     "distmin"
#define CMD_DISTMAX     "distmax"
#define CMD_ADC1MIN     "adc1min"
#define CMD_ADC2MIN     "adc2min"
#define CMD_ADC1MAX     "adc1max"
#define CMD_ADC2MAX     "adc2max"
#define CMD_PRINTTIME   "time"
#define CMD_STORECONF   "store"

int cmpstr(const char *s1, const char *s2, int n);
char *getchr(const char *str, char symbol);
int parse_USBCMD(char *cmd);
#endif // STR_H__