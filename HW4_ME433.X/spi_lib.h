/* 
 * File:   spi_lib.h
 * Author: Harish
 *
 * Created on April 13, 2017, 7:27 PM
 */

#ifndef SPI_LIB_H
#define	SPI_LIB_H

unsigned char spi_io(unsigned char o);
void init();
void setVoltage(unsigned char channel, unsigned char voltage);
unsigned char tWave(int a, int b, int c);
unsigned char sWave(int a, int b, int c);

#endif