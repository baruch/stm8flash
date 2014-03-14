#ifndef __STLINKV2_H
#define __STLINKV2_H

bool stlink2_open(programmer_t *pgm);
void stlink2_srst(programmer_t *pgm);
int stlink2_swim_read_range(programmer_t *pgm, stm8_device_t *device, char *buffer, unsigned int start, unsigned int length);
int stlink2_swim_write_range(programmer_t *pgm, stm8_device_t *device, char *buffer, unsigned int start, unsigned int length);

#endif