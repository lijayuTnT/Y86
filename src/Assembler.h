/*
 *   Copyright (C) 2012 by Xiangyan Sun <wishstudio@gmail.com>
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as
 *   published by the Free Software Foundation; either version 3, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details
 *
 *   You should have received a copy of the GNU General Public
 *   License along with this program; if not, write to the
 *   Free Software Foundation, Inc.,
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef AS_H
#define AS_H

#define OP_NOP     0x00
#define OP_HALT    0x01
#define OP_RRMOVL  0x02
#define OP_IRMOVL  0x03
#define OP_RMMOVL  0x04
#define OP_MRMOVL  0x05
#define OP_OP      0x06
#define OP_JMP     0x07
#define OP_CALL    0x08
#define OP_RET     0x09
#define OP_PUSHL   0x0A
#define OP_POPL    0x0B

#define REG_EAX    0x00
#define REG_ECX    0x01
#define REG_EDX    0x02
#define REG_EBX    0x03
#define REG_ESI    0x04
#define REG_EDI    0x05
#define REG_ESP    0x06
#define REG_EBP    0x07
#define REG_NONE   0x08

#include <Qt>

#include "Memory.h"

class Assembler
{
public:
    static void compileFile(const QString &fileName, Memory *memory);
    static int startEIP();
    static int startESP();
};

#endif
