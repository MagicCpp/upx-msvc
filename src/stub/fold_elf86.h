/* fold_elf86.h -- created from fold_elf86.bin, 1670 (0x686) bytes

   This file is part of the UPX executable compressor.

   Copyright (C) 1996-2005 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 1996-2005 Laszlo Molnar
   All Rights Reserved.

   UPX and the UCL library are free software; you can redistribute them
   and/or modify them under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2 of
   the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING.
   If not, write to the Free Software Foundation, Inc.,
   59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

   Markus F.X.J. Oberhumer              Laszlo Molnar
   <mfx@users.sourceforge.net>          <ml1050@users.sourceforge.net>
 */


#define LINUX_I386ELF_FOLD_ADLER32 0x2e7cd8c9
#define LINUX_I386ELF_FOLD_CRC32   0x2993f845

unsigned char linux_i386elf_fold[1670] = {
127, 69, 76, 70,  1,  1,  1,  0, 76,105,110,117,120,  0,  0,  0,   /* 0x   0 */
  2,  0,  3,  0,  1,  0,  0,  0,128,  0,192,  0, 52,  0,  0,  0,   /* 0x  10 */
  0,  0,  0,  0,  0,  0,  0,  0, 52,  0, 32,  0,  2,  0,  0,  0,   /* 0x  20 */
  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,192,  0,   /* 0x  30 */
  0,  0,192,  0,134,  6,  0,  0,136,  6,  0,  0,  5,  0,  0,  0,   /* 0x  40 */
  0, 16,  0,  0,  1,  0,  0,  0,134,  6,  0,  0,136,  6,192,  0,   /* 0x  50 */
136,  6,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  0,  0,  0,   /* 0x  60 */
  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   /* 0x  70 */
 41,201,186,120,  2,  0,  0,137,230,137,231,232,112,  0,  0,  0,   /* 0x  80 */
137,230,209,234, 25,192, 41,193,141, 36,196,133,210,117,243,137,   /* 0x  90 */
231,232, 90,  0,  0,  0,129,236,  0, 10,  0,  0,137,226, 83, 49,   /* 0x  a0 */
201, 81,141,131,140,  0,  0,  0,139,115, 24,102,131,123, 16,  3,   /* 0x  b0 */
117, 11, 89,  1,222,181, 16,  3, 91, 72,  1,203, 83, 41,198,139,   /* 0x  c0 */
 24,139, 72,  4,131,193, 12, 96, 71,232,163,  4,  0,  0,131,196,   /* 0x  d0 */
 32, 89, 91,129,196,  0, 10,  0,  0, 80, 79, 41,192, 60,175,175,   /* 0x  e0 */
117,252, 80, 80, 80, 80, 80, 80, 80, 80, 41,217,176, 91,255, 39,   /* 0x  f0 */
173,171,133,192,117,250,173,171,133,192,117,250, 87,173,171,131,   /* 0x 100 */
248, 32,115,  3, 15,179,194,133,192,173,171,117,240,131,239,  8,   /* 0x 110 */
  1,201, 64,243,171, 72,171,171, 95,195,  0,  0, 85, 87,137,207,   /* 0x 120 */
 86,137,198, 83, 57,  8,139,104,  4,115,  8,106,127, 91,106,  1,   /* 0x 130 */
 88,205,128,133,255,116, 11,137,249,138, 69,  0, 69,136,  2, 66,   /* 0x 140 */
226,247, 91,  1,126,  4, 41, 62, 94, 95, 93,195, 83,141, 92, 36,   /* 0x 150 */
  8,106, 90, 88,205,128, 91,195, 85,137,229, 87, 86,137,199, 83,   /* 0x 160 */
137,214,131,236, 24,139, 69,  8,131, 58,  0,137, 69,220, 15,132,   /* 0x 170 */
189,  0,  0,  0,141, 85,228,137,248,185, 12,  0,  0,  0,232,153,   /* 0x 180 */
255,255,255,131,125,228,  0,139, 69,232,117, 18, 61, 85, 80, 88,   /* 0x 190 */
 33,117, 15,131, 63,  0, 15,132,149,  0,  0,  0,235,  4,133,192,   /* 0x 1a0 */
117,  8,106,127, 91,106,  1, 88,205,128,139, 77,232,139, 69,228,   /* 0x 1b0 */
 57,193,119,238, 59,  6,119,234, 57,193,115, 88, 15,182, 69,236,   /* 0x 1c0 */
 80,141, 69,224, 80,255,118,  4, 81,255,119,  4,255, 85,220,131,   /* 0x 1d0 */
196, 20,133,192,117,204,139, 85,224, 59, 85,228,117,196,138, 69,   /* 0x 1e0 */
237,132,192,116, 37,131,125, 12,  0,116, 31,129,250,  0,  2,  0,   /* 0x 1f0 */
  0,119,  4, 57, 22,117, 19, 15,182,192, 80, 15,182, 69,238, 80,   /* 0x 200 */
 82,255,118,  4,255, 85, 12,131,196, 16,139, 69,232,  1, 71,  4,   /* 0x 210 */
 41,  7,235, 10,139, 86,  4,137,248,232,254,254,255,255,139, 85,   /* 0x 220 */
228,139,  6,  1, 86,  4, 41,208,133,192,137,  6,233, 61,255,255,   /* 0x 230 */
255,141,101,244, 91, 94, 95,201,195,133,210,137,209,116,  6,198,   /* 0x 240 */
  0,  0, 64,226,250,195,133,192, 83,137,211,116, 29,168,  1,117,   /* 0x 250 */
 25,139, 16, 57,218,116,  7, 74,117, 11,133,219,116,  7,137, 24,   /* 0x 260 */
137, 72,  4,235,  5,131,192,  8,235,231, 91,195, 85,137,229, 87,   /* 0x 270 */
 86, 83,131,236, 72,137, 85,224,139, 77,224,137, 69,228,139, 93,   /* 0x 280 */
224,199, 69,208,  0,  0,  0,  0,  3, 73, 28,139, 69,  8,139, 85,   /* 0x 290 */
 12,137, 69,220, 49,192,102,131,123, 16,  2,137, 85,216,137, 77,   /* 0x 2a0 */
212,137,202, 15,183, 75, 44, 15,148,192,131,206,255,193,224,  4,   /* 0x 2b0 */
137,207,131,192, 34, 49,219, 79,137, 69,180,120, 34,131, 58,  1,   /* 0x 2c0 */
117, 24,139, 66,  8, 57,240,115,  8,139,122, 16,137,198,137,125,   /* 0x 2d0 */
208,  3, 66, 20, 57,195,115,  2,137,195,131,194, 32,226,222,137,   /* 0x 2e0 */
247,106,  0,129,231,  0,240,255,255,106,  0, 41,251,255,117,180,   /* 0x 2f0 */
129,195,255, 15,  0,  0,106,  7,129,227,  0,240,255,255,139, 85,   /* 0x 300 */
208, 83,137,240, 37,255, 15,  0,  0, 87,137, 93,172,141,180,  2,   /* 0x 310 */
255, 15,  0,  0,232, 51,254,255,255,137,194,131,196, 24,  1,218,   /* 0x 320 */
129,230,  0,240,255,255,137, 85,240,137,194, 41,243,  1,242,137,   /* 0x 330 */
217,137, 69,176,137,211,106, 91, 88,205,128,139,117,176,139, 69,   /* 0x 340 */
224, 41,254, 49,255,102,131,120, 44,  0, 15,132,221,  1,  0,  0,   /* 0x 350 */
139, 85,212,139,  2,131,248,  6,117, 23,139, 74,  8,186,  3,  0,   /* 0x 360 */
  0,  0,139, 69,216,  1,241,232,218,254,255,255,233,168,  1,  0,   /* 0x 370 */
  0, 72, 15,133,161,  1,  0,  0,139, 93,212,199, 69,200, 64, 98,   /* 0x 380 */
 81,115,139, 75, 24,139, 67,  8,131,225,  7,139, 83, 16,  1,240,   /* 0x 390 */
193,225,  2,211,109,200,139, 75, 20,137,195,129,227,255, 15,  0,   /* 0x 3a0 */
  0,137, 85,232,  1,218,  1,193,137, 85,196,139, 85,212,137, 69,   /* 0x 3b0 */
236, 41,216,137, 69,192,139, 66,  4,131,101,200,  7, 41,216,131,   /* 0x 3c0 */
125,220,  1, 80,255,117,228, 25,192,137, 77,188,131,224,224,137,   /* 0x 3d0 */
 93,184,131,192, 50,131,125,220,  0, 80,139, 69,196,106,  3,116,   /* 0x 3e0 */
  3,131,192,  3, 80,255,117,192,232, 95,253,255,255,131,196, 24,   /* 0x 3f0 */
 57, 69,192, 15,133,198,  0,  0,  0,131,125,220,  0,116, 34,139,   /* 0x 400 */
 77,212, 49,192,246, 65, 24,  1,116,  6,139, 69,228,131,192,  2,   /* 0x 410 */
 80,139, 69,220,255,117,228,141, 85,232,232, 57,253,255,255, 88,   /* 0x 420 */
 90,139, 85,184,139, 69,192,232, 13,254,255,255,139, 93,196,139,   /* 0x 430 */
 69,192,247,219,  3, 69,196,129,227,255, 15,  0,  0,137,218,137,   /* 0x 440 */
 93,184,232,242,253,255,255,131,125,220,  0,116, 96,139, 69,212,   /* 0x 450 */
131, 56,  1,117, 88,246, 64, 24,  1,116, 82,139, 80, 20,139, 88,   /* 0x 460 */
  8,141,  4, 26,141, 12, 48,139, 69,212, 59, 80, 16,117, 14,137,   /* 0x 470 */
200,247,216, 37,255, 15,  0,  0,131,248,  3,119, 16,139, 85,212,   /* 0x 480 */
107,198, 52,131,122,  4,  0,141, 76,  3, 12,117, 15,139,  1, 61,   /* 0x 490 */
205,128, 97,195,116,  6,199,  1,205,128, 97,195,133,201,116, 13,   /* 0x 4a0 */
139, 69,216, 49,210,131,224,254,232,153,253,255,255,139, 93,192,   /* 0x 4b0 */
139, 77,196,139, 85,200,106,125, 88,205,128,133,192,116,  8,106,   /* 0x 4c0 */
127, 91,106,  1, 88,205,128,139, 69,196,  3, 69,184,  1, 69,192,   /* 0x 4d0 */
139, 69,188, 57, 69,192,115, 31,106,  0, 43, 69,192,106,  0,106,   /* 0x 4e0 */
 50,255,117,200, 80,255,117,192,232, 95,252,255,255,131,196, 24,   /* 0x 4f0 */
 57, 69,192,116, 36,235,200,131,125,220,  0,116, 28,131, 69,196,   /* 0x 500 */
  3,129,101,196,255, 15,  0,  0,131,125,196,  3,119, 11,139, 93,   /* 0x 510 */
192,139, 77,196,106, 91, 88,205,128,139, 85,224, 71,131, 69,212,   /* 0x 520 */
 32, 15,183, 66, 44, 57,199, 15,140, 35,254,255,255,131,125,220,   /* 0x 530 */
  0,117, 17,139, 93,228,106,  6, 88,205,128,133,192,116, 23,233,   /* 0x 540 */
123,255,255,255,139,125,224,102,131,127, 16,  3,116,  8,139, 93,   /* 0x 550 */
240,106, 45, 88,205,128,131,125, 16,  0,116,  5,139, 69, 16,137,   /* 0x 560 */
 48,139, 85,224,  3,114, 24,141,101,244, 91,137,240, 94, 95,201,   /* 0x 570 */
195, 85,137,229, 87, 86, 83,131,236, 12,139,125, 28,106,  0,139,   /* 0x 580 */
 69, 16,141, 87, 52,139,117,  8, 80,139, 93, 32,137, 69,236,137,   /* 0x 590 */
 85,232,141, 69, 32,141, 85, 24,232,187,251,255,255,139, 69, 12,   /* 0x 5a0 */
 15,183, 79, 44,186,  5,  0,  0,  0,137, 69, 32,137,240, 41, 93,   /* 0x 5b0 */
 36,232,144,252,255,255, 15,183, 79, 42,186,  4,  0,  0,  0,137,   /* 0x 5c0 */
240,232,128,252,255,255,139, 93,232,139, 77, 40,186,  3,  0,  0,   /* 0x 5d0 */
  0,  3, 75,  8,137,240,131,193, 52,232,104,252,255,255,141, 69,   /* 0x 5e0 */
240,137,250, 80,141, 69, 32, 86, 80,139, 69,236,232,123,252,255,   /* 0x 5f0 */
255,186,  9,  0,  0,  0,137,193,137,195,137,240,232, 69,252,255,   /* 0x 600 */
255,102,139, 79, 44,131,196, 20, 49,210,102,133,201,116, 93,139,   /* 0x 610 */
 69,232,131, 56,  3,117, 73,139, 93,240, 49,201,  3, 88,  8,137,   /* 0x 620 */
202,106,  5, 88,205,128,133,192,137,198,120, 20,102,186,  0,  2,   /* 0x 630 */
137,195,137,249,106,  3, 88,205,128, 61,  0,  2,  0,  0,116, 10,   /* 0x 640 */
106,127, 91,106,  1, 88,205,128,235,246,106,  0,137,250,106,  0,   /* 0x 650 */
137,240,106,  0,232, 19,252,255,255,131,196, 12,137,195,235, 12,   /* 0x 660 */
 66, 15,183,193,131, 69,232, 32, 57,194,124,163,141,101,244,137,   /* 0x 670 */
216, 91, 94, 95,201,195                                            /* 0x 680 */
};