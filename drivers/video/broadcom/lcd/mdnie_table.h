#ifndef __MDNIE_TABLE_H__                                                          
#define __MDNIE_TABLE_H__                                                          
                                                                                   
#include "mdnie.h"  

/* + CABC on Sequence */
static u8 en_ext_cmd[] = { /*0xB9 */
4,
0xB9,
0xFF,
0x83,
0x69,
0x00 /* The Last 0x00 : Sequence End Mark */
};

static u8 set_cabc[] = { /*0xC9 */
3,
0xC9,
0x0F, /*PWM CLK DIV*/
0xFF, /*PWM period*/
0x00 /* The Last 0x00 : Sequence End Mark */
};

static u8 set_brightness_value[] = { /* 0x51 */
2,
0x51,
0xFF, /*backlight pwm duty cycle*/
0x00 /* The Last 0x00 : Sequence End Mark */
};

static u8 control_brightness[] = { /* 0x53 */
2,
0x53,
0x24,
0x00 /* The Last 0x00 : Sequence End Mark */
};
/* - CABC on Sequence */

/* + CABC Mode Sequence */
static u8 cabc_ui[] = { /* 0x55 */
2,
0x55,
0x01,
0x00 /* The Last 0x00 : Sequence End Mark */
};

static u8 cabc_still[] = { /* 0x55 */
2,
0x55,	
0x02,
0x00 /* The Last 0x00 : Sequence End Mark */
};

static u8 cabc_moving[] = { /* 0x55 */
2,
0x55, 
0x03,
0x00 /* The Last 0x00 : Sequence End Mark */
};


/* - CABC Mode Sequence */

/* + CABC off Sequence */
static u8 cabc_off[] = { /* 0x55 */
2,
0x55,	
0x00,
0x00 /* The Last 0x00 : Sequence End Mark */
};
/* - CABC off Sequence */

static u8 negative_tuning[] = {  
113,
0xE6,	
0x5A, //password 5A
0x00, //mask 000
0x00, //data_width
0x30, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x00, //roi_ctrl
0x00, //roi1 y end
0x00, 
0x00, //roi1 y start
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 x start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 x start
0x00,
0xff, //scr Kb
0x00, //scr Wb
0xff, //scr Kg
0x00, //scr Wg
0xff, //scr Kr
0x00, //scr Wr
0x00, //scr Bb
0xff, //scr Yb
0xff, //scr Bg
0x00, //scr Yg
0xff, //scr Br
0x00, //scr Yr
0xff, //scr Gb
0x00, //scr Mb
0x00, //scr Gg
0xff, //scr Mg
0xff, //scr Gr
0x00, //scr Mr
0xff, //scr Rb
0x00, //scr Cb
0xff, //scr Rg
0x00, //scr Cg
0x00, //scr Rr
0xff, //scr Cr
0x00, //sharpen_set cc_en gamma_en 00 0 0
0x20, //curve24 a
0x00, //curve24 b
0x20, //curve23 a
0x00, //curve23 b
0x20, //curve22 a
0x00, //curve22 b
0x20, //curve21 a
0x00, //curve21 b
0x20, //curve20 a
0x00, //curve20 b
0x20, //curve19 a
0x00, //curve19 b
0x20, //curve18 a
0x00, //curve18 b
0x20, //curve17 a
0x00, //curve17 b
0x20, //curve16 a
0x00, //curve16 b
0x20, //curve15 a
0x00, //curve15 b
0x20, //curve14 a
0x00, //curve14 b
0x20, //curve13 a
0x00, //curve13 b
0x20, //curve12 a
0x00, //curve12 b
0x20, //curve11 a
0x00, //curve11 b
0x20, //curve10 a
0x00, //curve10 b
0x20, //curve 9 a
0x00, //curve 9 b
0x20, //curve 8 a
0x00, //curve 8 b
0x20, //curve 7 a
0x00, //curve 7 b
0x20, //curve 6 a
0x00, //curve 6 b
0x20, //curve 5 a
0x00, //curve 5 b
0x20, //curve 4 a
0x00, //curve 4 b
0x20, //curve 3 a
0x00, //curve 3 b
0x20, //curve 2 a
0x00, //curve 2 b
0x20, //curve 1 a
0x00, //curve 1 b
0x04, //cc b3
0x00,
0x00, //cc b2
0x00,
0x00, //cc b1
0x00,
0x00, //cc g3
0x00,
0x04, //cc g2
0x00,
0x00, //cc g1
0x00,
0x00, //cc r3
0x00,
0x00, //cc r2
0x00,
0x04, //cc r1
0x00,
0x00 /* The Last 0x00 : Sequence End Mark */
};

static u8 video_tuning[] = {   
113,
0xE6,	                                                               
0x5A, //password 5A
0x00, //mask 000
0x00, //data_width
0x03, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x00, //roi_ctrl
0x00, //roi1 y end
0x00, 
0x00, //roi1 y start
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 x start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 x start
0x00,
0x00, //scr Kb
0xFF, //scr Wb
0x00, //scr Kg
0xFF, //scr Wg
0x00, //scr Kr
0xFF, //scr Wr
0xFF, //scr Bb
0x00, //scr Yb
0x00, //scr Bg
0xFF, //scr Yg
0x00, //scr Br
0xFF, //scr Yr
0x00, //scr Gb
0xFF, //scr Mb
0xFF, //scr Gg
0x00, //scr Mg
0x00, //scr Gr
0xFF, //scr Mr
0x00, //scr Rb
0xFF, //scr Cb
0x00, //scr Rg
0xFF, //scr Cg
0xFF, //scr Rr
0x00, //scr Cr
0x06, //sharpen_set cc_en gamma_en 00 0 0
0x20, //curve24 a
0x00, //curve24 b
0x20, //curve23 a
0x00, //curve23 b
0x20, //curve22 a
0x00, //curve22 b
0x20, //curve21 a
0x00, //curve21 b
0x20, //curve20 a
0x00, //curve20 b
0x20, //curve19 a
0x00, //curve19 b
0x20, //curve18 a
0x00, //curve18 b
0x20, //curve17 a
0x00, //curve17 b
0x20, //curve16 a
0x00, //curve16 b
0x20, //curve15 a
0x00, //curve15 b
0x20, //curve14 a
0x00, //curve14 b
0x20, //curve13 a
0x00, //curve13 b
0x20, //curve12 a
0x00, //curve12 b
0x20, //curve11 a
0x00, //curve11 b
0x20, //curve10 a
0x00, //curve10 b
0x20, //curve 9 a
0x00, //curve 9 b
0x20, //curve 8 a
0x00, //curve 8 b
0x20, //curve 7 a
0x00, //curve 7 b
0x20, //curve 6 a
0x00, //curve 6 b
0x20, //curve 5 a
0x00, //curve 5 b
0x20, //curve 4 a
0x00, //curve 4 b
0x20, //curve 3 a
0x00, //curve 3 b
0x20, //curve 2 a
0x00, //curve 2 b
0x20, //curve 1 a
0x00, //curve 1 b
0x05, //cc b3 0.3
0x10,
0x1f, //cc b2
0x4c,
0x1f, //cc b1
0xa4,
0x1f, //cc g3
0xdd,
0x04, //cc g2
0x7f,
0x1f, //cc g1
0xa4,
0x1f, //cc r3
0xdd,
0x1f, //cc r2
0x4c,
0x04, //cc r1
0xd7,
0x00 /* The Last 0x00 : Sequence End Mark */                             
 };

static u8 video_outdoor_tuning[] = {  
113,
0xE6,	                                                                
0x5A, //password 5A
0x00, //mask 000
0x00, //data_width
0x03, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x00, //roi_ctrl
0x00, //roi1 y end
0x00, 
0x00, //roi1 y start
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 x start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 x start
0x00,
0x00, //scr Kb
0xFF, //scr Wb
0x00, //scr Kg
0xFF, //scr Wg
0x00, //scr Kr
0xFF, //scr Wr
0xFF, //scr Bb
0x00, //scr Yb
0x00, //scr Bg
0xFF, //scr Yg
0x00, //scr Br
0xFF, //scr Yr
0x00, //scr Gb
0xFF, //scr Mb
0xFF, //scr Gg
0x00, //scr Mg
0x00, //scr Gr
0xFF, //scr Mr
0x00, //scr Rb
0xFF, //scr Cb
0x00, //scr Rg
0xFF, //scr Cg
0xFF, //scr Rr
0x00, //scr Cr
0x07, //sharpen_set cc_en gamma_en 00 0 0
0xff, //curve24 a
0x00, //curve24 b
0x0a, //curve23 a
0xaf, //curve23 b
0x0d, //curve22 a
0x99, //curve22 b
0x14, //curve21 a
0x6d, //curve21 b
0x1b, //curve20 a
0x48, //curve20 b
0x2c, //curve19 a
0x05, //curve19 b
0xb4, //curve18 a
0x0f, //curve18 b
0xbe, //curve17 a
0x26, //curve17 b
0xbe, //curve16 a
0x26, //curve16 b
0xbe, //curve15 a
0x26, //curve15 b
0xbe, //curve14 a
0x26, //curve14 b
0xae, //curve13 a
0x0c, //curve13 b
0xae, //curve12 a
0x0c, //curve12 b
0xae, //curve11 a
0x0c, //curve11 b
0xae, //curve10 a
0x0c, //curve10 b
0xae, //curve 9 a
0x0c, //curve 9 b
0xae, //curve 8 a
0x0c, //curve 8 b
0x20, //curve 7 a
0x00, //curve 7 b
0x20, //curve 6 a
0x00, //curve 6 b
0x20, //curve 5 a
0x00, //curve 5 b
0x20, //curve 4 a
0x00, //curve 4 b
0x20, //curve 3 a
0x00, //curve 3 b
0x20, //curve 2 a
0x00, //curve 2 b
0x20, //curve 1 a
0x00, //curve 1 b
0x06, //cc b3
0x7b,
0x1e, //cc b2
0x5b,
0x1f, //cc b1
0x2a,
0x1f, //cc g3
0xae,
0x05, //cc g2
0x28,
0x1f, //cc g1
0x2a,
0x1f, //cc r3
0xae,
0x1e, //cc r2
0x5b,
0x05, //cc r1
0xf7,      
0x00 /* The Last 0x00 : Sequence End Mark */                                  
 };

static u8 video_warm_outdoor_tuning[] = {
113,
0xE6,	  
0x5A, //password 5A
0x00, //mask 000
0x00, //data_width
0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x00, //roi_ctrl
0x00, //roi1 y end
0x00, 
0x00, //roi1 y start
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 x start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 x start
0x00,
0x00, //scr Kb
0xdc, //scr Wb
0x00, //scr Kg
0xf8, //scr Wg
0x00, //scr Kr
0xff, //scr Wr
0xFF, //scr Bb
0x00, //scr Yb
0x00, //scr Bg
0xFF, //scr Yg
0x00, //scr Br
0xFF, //scr Yr
0x00, //scr Gb
0xFF, //scr Mb
0xFF, //scr Gg
0x00, //scr Mg
0x00, //scr Gr
0xFF, //scr Mr
0x00, //scr Rb
0xFF, //scr Cb
0x00, //scr Rg
0xFF, //scr Cg
0xFF, //scr Rr
0x00, //scr Cr
0x07, //sharpen_set cc_en gamma_en 00 0 0
0xff, //curve24 a
0x00, //curve24 b
0x0a, //curve23 a
0xaf, //curve23 b
0x0d, //curve22 a
0x99, //curve22 b
0x14, //curve21 a
0x6d, //curve21 b
0x1b, //curve20 a
0x48, //curve20 b
0x2c, //curve19 a
0x05, //curve19 b
0xb4, //curve18 a
0x0f, //curve18 b
0xbe, //curve17 a
0x26, //curve17 b
0xbe, //curve16 a
0x26, //curve16 b
0xbe, //curve15 a
0x26, //curve15 b
0xbe, //curve14 a
0x26, //curve14 b
0xae, //curve13 a
0x0c, //curve13 b
0xae, //curve12 a
0x0c, //curve12 b
0xae, //curve11 a
0x0c, //curve11 b
0xae, //curve10 a
0x0c, //curve10 b
0xae, //curve 9 a
0x0c, //curve 9 b
0xae, //curve 8 a
0x0c, //curve 8 b
0x20, //curve 7 a
0x00, //curve 7 b
0x20, //curve 6 a
0x00, //curve 6 b
0x20, //curve 5 a
0x00, //curve 5 b
0x20, //curve 4 a
0x00, //curve 4 b
0x20, //curve 3 a
0x00, //curve 3 b
0x20, //curve 2 a
0x00, //curve 2 b
0x20, //curve 1 a
0x00, //curve 1 b
0x06, //cc b3
0x7b,
0x1e, //cc b2
0x5b,
0x1f, //cc b1
0x2a,
0x1f, //cc g3
0xae,
0x05, //cc g2
0x28,
0x1f, //cc g1
0x2a,
0x1f, //cc r3
0xae,
0x1e, //cc r2
0x5b,
0x05, //cc r1
0xf7,
0x00 /* The Last 0x00 : Sequence End Mark */
};

static u8 video_warm_tuning[] = {
113,
0xE6,	  
0x5A, //password 5A
0x00, //mask 000
0x00, //data_width
0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x00, //roi_ctrl
0x00, //roi1 y end
0x00, 
0x00, //roi1 y start
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 x start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 x start
0x00,
0x00, //scr Kb
0xdc, //scr Wb
0x00, //scr Kg
0xf8, //scr Wg
0x00, //scr Kr
0xff, //scr Wr
0xFF, //scr Bb
0x00, //scr Yb
0x00, //scr Bg
0xFF, //scr Yg
0x00, //scr Br
0xFF, //scr Yr
0x00, //scr Gb
0xFF, //scr Mb
0xFF, //scr Gg
0x00, //scr Mg
0x00, //scr Gr
0xFF, //scr Mr
0x00, //scr Rb
0xFF, //scr Cb
0x00, //scr Rg
0xFF, //scr Cg
0xFF, //scr Rr
0x00, //scr Cr
0x06, //sharpen_set cc_en gamma_en 00 0 0
0xff, //curve24 a
0x00, //curve24 b
0x20, //curve23 a
0x00, //curve23 b
0x20, //curve22 a
0x00, //curve22 b
0x20, //curve21 a
0x00, //curve21 b
0xa1, //curve20 a
0x05, //curve20 b
0xa2, //curve19 a
0x09, //curve19 b
0xa0, //curve18 a
0x04, //curve18 b
0xa0, //curve17 a
0x04, //curve17 b
0xac, //curve16 a
0x1c, //curve16 b
0xac, //curve15 a
0x1c, //curve15 b
0xa8, //curve14 a
0x15, //curve14 b
0xa8, //curve13 a
0x15, //curve13 b
0xa8, //curve12 a
0x15, //curve12 b
0xa0, //curve11 a
0x0a, //curve11 b
0xa0, //curve10 a
0x0a, //curve10 b
0x98, //curve 9 a
0x01, //curve 9 b
0x98, //curve 8 a
0x01, //curve 8 b
0x98, //curve 7 a
0x01, //curve 7 b
0x98, //curve 6 a
0x01, //curve 6 b
0x98, //curve 5 a
0x01, //curve 5 b
0x98, //curve 4 a
0x01, //curve 4 b
0x98, //curve 3 a
0x01, //curve 3 b
0x98, //curve 2 a
0x01, //curve 2 b
0x08, //curve 1 a
0x00, //curve 1 b
0x05, //cc b3 0.3
0x10,
0x1f, //cc b2
0x4c,
0x1f, //cc b1
0xa4,
0x1f, //cc g3
0xdd,
0x04, //cc g2
0x7f,
0x1f, //cc g1
0xa4,
0x1f, //cc r3
0xdd,
0x1f, //cc r2
0x4c,
0x04, //cc r1
0xd7,
0x00 /* The Last 0x00 : Sequence End Mark */
};

static u8 video_cold_outdoor_tuning[] = {
113,
0xE6,	  
0x5A, //password 5A
0x00, //mask 000
0x00, //data_width
0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x00, //roi_ctrl
0x00, //roi1 y end
0x00, 
0x00, //roi1 y start
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 x start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 x start
0x00,
0x00, //scr Kb
0xff, //scr Wb
0x00, //scr Kg
0xef, //scr Wg
0x00, //scr Kr
0xef, //scr Wr
0xFF, //scr Bb
0x00, //scr Yb
0x00, //scr Bg
0xFF, //scr Yg
0x00, //scr Br
0xFF, //scr Yr
0x00, //scr Gb
0xFF, //scr Mb
0xFF, //scr Gg
0x00, //scr Mg
0x00, //scr Gr
0xFF, //scr Mr
0x00, //scr Rb
0xFF, //scr Cb
0x00, //scr Rg
0xFF, //scr Cg
0xFF, //scr Rr
0x00, //scr Cr
0x07, //sharpen_set cc_en gamma_en 00 0 0
0xff, //curve24 a
0x00, //curve24 b
0x0a, //curve23 a
0xaf, //curve23 b
0x0d, //curve22 a
0x99, //curve22 b
0x14, //curve21 a
0x6d, //curve21 b
0x1b, //curve20 a
0x48, //curve20 b
0x2c, //curve19 a
0x05, //curve19 b
0xb4, //curve18 a
0x0f, //curve18 b
0xbe, //curve17 a
0x26, //curve17 b
0xbe, //curve16 a
0x26, //curve16 b
0xbe, //curve15 a
0x26, //curve15 b
0xbe, //curve14 a
0x26, //curve14 b
0xae, //curve13 a
0x0c, //curve13 b
0xae, //curve12 a
0x0c, //curve12 b
0xae, //curve11 a
0x0c, //curve11 b
0xae, //curve10 a
0x0c, //curve10 b
0xae, //curve 9 a
0x0c, //curve 9 b
0xae, //curve 8 a
0x0c, //curve 8 b
0x20, //curve 7 a
0x00, //curve 7 b
0x20, //curve 6 a
0x00, //curve 6 b
0x20, //curve 5 a
0x00, //curve 5 b
0x20, //curve 4 a
0x00, //curve 4 b
0x20, //curve 3 a
0x00, //curve 3 b
0x20, //curve 2 a
0x00, //curve 2 b
0x20, //curve 1 a
0x00, //curve 1 b
0x06, //cc b3
0x7b,
0x1e, //cc b2
0x5b,
0x1f, //cc b1
0x2a,
0x1f, //cc g3
0xae,
0x05, //cc g2
0x28,
0x1f, //cc g1
0x2a,
0x1f, //cc r3
0xae,
0x1e, //cc r2
0x5b,
0x05, //cc r1
0xf7,
0x00 /* The Last 0x00 : Sequence End Mark */
};

static u8 video_cold_tuning[] = {
113,
0xE6,	  
0x5A, //password 5A
0x00, //mask 000
0x00, //data_width
0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x00, //roi_ctrl
0x00, //roi1 y end
0x00, 
0x00, //roi1 y start
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 x start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 x start
0x00,
0x00, //scr Kb
0xff, //scr Wb
0x00, //scr Kg
0xef, //scr Wg
0x00, //scr Kr
0xef, //scr Wr
0xFF, //scr Bb
0x00, //scr Yb
0x00, //scr Bg
0xFF, //scr Yg
0x00, //scr Br
0xFF, //scr Yr
0x00, //scr Gb
0xFF, //scr Mb
0xFF, //scr Gg
0x00, //scr Mg
0x00, //scr Gr
0xFF, //scr Mr
0x00, //scr Rb
0xFF, //scr Cb
0x00, //scr Rg
0xFF, //scr Cg
0xFF, //scr Rr
0x00, //scr Cr
0x06, //sharpen_set cc_en gamma_en 00 0 0
0xff, //curve24 a
0x00, //curve24 b
0x20, //curve23 a
0x00, //curve23 b
0x20, //curve22 a
0x00, //curve22 b
0x20, //curve21 a
0x00, //curve21 b
0xa1, //curve20 a
0x05, //curve20 b
0xa2, //curve19 a
0x09, //curve19 b
0xa0, //curve18 a
0x04, //curve18 b
0xa0, //curve17 a
0x04, //curve17 b
0xac, //curve16 a
0x1c, //curve16 b
0xac, //curve15 a
0x1c, //curve15 b
0xa8, //curve14 a
0x15, //curve14 b
0xa8, //curve13 a
0x15, //curve13 b
0xa8, //curve12 a
0x15, //curve12 b
0xa0, //curve11 a
0x0a, //curve11 b
0xa0, //curve10 a
0x0a, //curve10 b
0x98, //curve 9 a
0x01, //curve 9 b
0x98, //curve 8 a
0x01, //curve 8 b
0x98, //curve 7 a
0x01, //curve 7 b
0x98, //curve 6 a
0x01, //curve 6 b
0x98, //curve 5 a
0x01, //curve 5 b
0x98, //curve 4 a
0x01, //curve 4 b
0x98, //curve 3 a
0x01, //curve 3 b
0x98, //curve 2 a
0x01, //curve 2 b
0x08, //curve 1 a
0x00, //curve 1 b
0x05, //cc b3 0.3
0x10,
0x1f, //cc b2
0x4c,
0x1f, //cc b1
0xa4,
0x1f, //cc g3
0xdd,
0x04, //cc g2
0x7f,
0x1f, //cc g1
0xa4,
0x1f, //cc r3
0xdd,
0x1f, //cc r2
0x4c,
0x04, //cc r1
0xd7,
0x00 /* The Last 0x00 : Sequence End Mark */
};

static u8 ui_tuning[] = {
113,
0xE6,	                                                                  
0x5A, //password 5A
0x00, //mask 000
0x00, //data_width
0x03, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x00, //roi_ctrl
0x00, //roi1 y end
0x00, 
0x00, //roi1 y start
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 x start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 x start
0x00,
0x00, //scr Kb
0xFF, //scr Wb
0x00, //scr Kg
0xFF, //scr Wg
0x00, //scr Kr
0xFF, //scr Wr
0xFF, //scr Bb
0x00, //scr Yb
0x00, //scr Bg
0xFF, //scr Yg
0x00, //scr Br
0xFF, //scr Yr
0x00, //scr Gb
0xFF, //scr Mb
0xFF, //scr Gg
0x00, //scr Mg
0x00, //scr Gr
0xFF, //scr Mr
0x00, //scr Rb
0xFF, //scr Cb
0x00, //scr Rg
0xFF, //scr Cg
0xFF, //scr Rr
0x00, //scr Cr
0x02, //sharpen_set cc_en gamma_en 00 0 0
0x20, //curve24 a
0x00, //curve24 b
0x20, //curve23 a
0x00, //curve23 b
0x20, //curve22 a
0x00, //curve22 b
0x20, //curve21 a
0x00, //curve21 b
0x20, //curve20 a
0x00, //curve20 b
0x20, //curve19 a
0x00, //curve19 b
0x20, //curve18 a
0x00, //curve18 b
0x20, //curve17 a
0x00, //curve17 b
0x20, //curve16 a
0x00, //curve16 b
0x20, //curve15 a
0x00, //curve15 b
0x20, //curve14 a
0x00, //curve14 b
0x20, //curve13 a
0x00, //curve13 b
0x20, //curve12 a
0x00, //curve12 b
0x20, //curve11 a
0x00, //curve11 b
0x20, //curve10 a
0x00, //curve10 b
0x20, //curve 9 a
0x00, //curve 9 b
0x20, //curve 8 a
0x00, //curve 8 b
0x20, //curve 7 a
0x00, //curve 7 b
0x20, //curve 6 a
0x00, //curve 6 b
0x20, //curve 5 a
0x00, //curve 5 b
0x20, //curve 4 a
0x00, //curve 4 b
0x20, //curve 3 a
0x00, //curve 3 b
0x20, //curve 2 a
0x00, //curve 2 b
0x20, //curve 1 a
0x00, //curve 1 b
0x06, //cc b3 0.6
0x21,
0x1e, //cc b2
0x97,
0x1f, //cc b1
0x48,
0x1f, //cc g3
0xba,
0x04, //cc g2
0xfe,
0x1f, //cc g1
0x48, 
0x1f, //cc r3
0xba,
0x1e, //cc r2
0x97,
0x05, //cc r1
0xaf,
0x00 /* The Last 0x00 : Sequence End Mark */                            
 };

static u8 gallery_tuning[] = {
113,
0xE6,	                                                                  
0x5A, //password 5A
0x00, //mask 000
0x00, //data_width
0x03, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x00, //roi_ctrl
0x00, //roi1 y end
0x00, 
0x00, //roi1 y start
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 x start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 x start
0x00,
0x00, //scr Kb
0xFF, //scr Wb
0x00, //scr Kg
0xFF, //scr Wg
0x00, //scr Kr
0xFF, //scr Wr
0xFF, //scr Bb
0x00, //scr Yb
0x00, //scr Bg
0xFF, //scr Yg
0x00, //scr Br
0xFF, //scr Yr
0x00, //scr Gb
0xFF, //scr Mb
0xFF, //scr Gg
0x00, //scr Mg
0x00, //scr Gr
0xFF, //scr Mr
0x00, //scr Rb
0xFF, //scr Cb
0x00, //scr Rg
0xFF, //scr Cg
0xFF, //scr Rr
0x00, //scr Cr
0x02, //sharpen_set cc_en gamma_en 00 0 0
0x20, //curve24 a
0x00, //curve24 b
0x20, //curve23 a
0x00, //curve23 b
0x20, //curve22 a
0x00, //curve22 b
0x20, //curve21 a
0x00, //curve21 b
0x20, //curve20 a
0x00, //curve20 b
0x20, //curve19 a
0x00, //curve19 b
0x20, //curve18 a
0x00, //curve18 b
0x20, //curve17 a
0x00, //curve17 b
0x20, //curve16 a
0x00, //curve16 b
0x20, //curve15 a
0x00, //curve15 b
0x20, //curve14 a
0x00, //curve14 b
0x20, //curve13 a
0x00, //curve13 b
0x20, //curve12 a
0x00, //curve12 b
0x20, //curve11 a
0x00, //curve11 b
0x20, //curve10 a
0x00, //curve10 b
0x20, //curve 9 a
0x00, //curve 9 b
0x20, //curve 8 a
0x00, //curve 8 b
0x20, //curve 7 a
0x00, //curve 7 b
0x20, //curve 6 a
0x00, //curve 6 b
0x20, //curve 5 a
0x00, //curve 5 b
0x20, //curve 4 a
0x00, //curve 4 b
0x20, //curve 3 a
0x00, //curve 3 b
0x20, //curve 2 a
0x00, //curve 2 b
0x20, //curve 1 a
0x00, //curve 1 b
0x05, //cc b3 0.3
0x10,
0x1f, //cc b2
0x4c,
0x1f, //cc b1
0xa4,
0x1f, //cc g3
0xdd,
0x04, //cc g2
0x7f,
0x1f, //cc g1
0xa4,
0x1f, //cc r3
0xdd,
0x1f, //cc r2
0x4c,
0x04, //cc r1
0xd7,
0x00 /* The Last 0x00 : Sequence End Mark */
 };

static u8 camera_tuning[] = {
113,
0xE6,	                                                                  
0x5A, //password 5A
0x00, //mask 000
0x00, //data_width
0x03, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x00, //roi_ctrl
0x00, //roi1 y end
0x00, 
0x00, //roi1 y start
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 x start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 x start
0x00,
0x00, //scr Kb
0xFF, //scr Wb
0x00, //scr Kg
0xFF, //scr Wg
0x00, //scr Kr
0xFF, //scr Wr
0xFF, //scr Bb
0x00, //scr Yb
0x00, //scr Bg
0xFF, //scr Yg
0x00, //scr Br
0xFF, //scr Yr
0x00, //scr Gb
0xFF, //scr Mb
0xFF, //scr Gg
0x00, //scr Mg
0x00, //scr Gr
0xFF, //scr Mr
0x00, //scr Rb
0xFF, //scr Cb
0x00, //scr Rg
0xFF, //scr Cg
0xFF, //scr Rr
0x00, //scr Cr
0x06, //sharpen_set cc_en gamma_en 00 0 0
0x20, //curve24 a
0x00, //curve24 b
0x20, //curve23 a
0x00, //curve23 b
0x20, //curve22 a
0x00, //curve22 b
0x20, //curve21 a
0x00, //curve21 b
0x20, //curve20 a
0x00, //curve20 b
0x20, //curve19 a
0x00, //curve19 b
0x20, //curve18 a
0x00, //curve18 b
0x20, //curve17 a
0x00, //curve17 b
0x20, //curve16 a
0x00, //curve16 b
0x20, //curve15 a
0x00, //curve15 b
0x20, //curve14 a
0x00, //curve14 b
0x20, //curve13 a
0x00, //curve13 b
0x20, //curve12 a
0x00, //curve12 b
0x20, //curve11 a
0x00, //curve11 b
0x20, //curve10 a
0x00, //curve10 b
0x20, //curve 9 a
0x00, //curve 9 b
0x20, //curve 8 a
0x00, //curve 8 b
0x20, //curve 7 a
0x00, //curve 7 b
0x20, //curve 6 a
0x00, //curve 6 b
0x20, //curve 5 a
0x00, //curve 5 b
0x20, //curve 4 a
0x00, //curve 4 b
0x20, //curve 3 a
0x00, //curve 3 b
0x20, //curve 2 a
0x00, //curve 2 b
0x20, //curve 1 a
0x00, //curve 1 b
0x05, //cc b3 0.3
0x10,
0x1f, //cc b2
0x4c,
0x1f, //cc b1
0xa4,
0x1f, //cc g3
0xdd,
0x04, //cc g2
0x7f,
0x1f, //cc g1
0xa4,
0x1f, //cc r3
0xdd,
0x1f, //cc r2
0x4c,
0x04, //cc r1
0xd7,
0x00 /* The Last 0x00 : Sequence End Mark */                                          
 };

static u8 camera_outdoor_tuning[] = {
113,
0xE6,	    
0x5A, //password 5A
0x00, //mask 000
0x00, //data_width
0x03, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x00, //roi_ctrl
0x00, //roi1 y end
0x00, 
0x00, //roi1 y start
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 x start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 x start
0x00,
0x00, //scr Kb
0xFF, //scr Wb
0x00, //scr Kg
0xFF, //scr Wg
0x00, //scr Kr
0xFF, //scr Wr
0xFF, //scr Bb
0x00, //scr Yb
0x00, //scr Bg
0xFF, //scr Yg
0x00, //scr Br
0xFF, //scr Yr
0x00, //scr Gb
0xFF, //scr Mb
0xFF, //scr Gg
0x00, //scr Mg
0x00, //scr Gr
0xFF, //scr Mr
0x00, //scr Rb
0xFF, //scr Cb
0x00, //scr Rg
0xFF, //scr Cg
0xFF, //scr Rr
0x00, //scr Cr
0x07, //sharpen_set cc_en gamma_en 00 0 0
0xff, //curve24 a
0x00, //curve24 b
0x0a, //curve23 a
0xaf, //curve23 b
0x0d, //curve22 a
0x99, //curve22 b
0x14, //curve21 a
0x6d, //curve21 b
0x1b, //curve20 a
0x48, //curve20 b
0x2c, //curve19 a
0x05, //curve19 b
0xb4, //curve18 a
0x0f, //curve18 b
0xbe, //curve17 a
0x26, //curve17 b
0xbe, //curve16 a
0x26, //curve16 b
0xbe, //curve15 a
0x26, //curve15 b
0xbe, //curve14 a
0x26, //curve14 b
0xae, //curve13 a
0x0c, //curve13 b
0xae, //curve12 a
0x0c, //curve12 b
0xae, //curve11 a
0x0c, //curve11 b
0xae, //curve10 a
0x0c, //curve10 b
0xae, //curve 9 a
0x0c, //curve 9 b
0xae, //curve 8 a
0x0c, //curve 8 b
0x20, //curve 7 a
0x00, //curve 7 b
0x20, //curve 6 a
0x00, //curve 6 b
0x20, //curve 5 a
0x00, //curve 5 b
0x20, //curve 4 a
0x00, //curve 4 b
0x20, //curve 3 a
0x00, //curve 3 b
0x20, //curve 2 a
0x00, //curve 2 b
0x20, //curve 1 a
0x00, //curve 1 b
0x06, //cc b3
0x7b,
0x1e, //cc b2
0x5b,
0x1f, //cc b1
0x2a,
0x1f, //cc g3
0xae,
0x05, //cc g2
0x28,
0x1f, //cc g1
0x2a,
0x1f, //cc r3
0xae,
0x1e, //cc r2
0x5b,
0x05, //cc r1
0xf7,
0x00 /* The Last 0x00 : Sequence End Mark */
};                                                                          
                                                                                   
#endif /* __MDNIE_TABLE_H__ */                                                     
    
