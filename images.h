#define prdel_width 128
#define prdel_height 64
static unsigned char prdel_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff,
   0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x7f, 0x00,
   0xc0, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xc0, 0xff, 0x00, 0x00, 0x00, 0xc0, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x01,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xc0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x70, 0x00, 0x00, 0x1c, 0x00, 0x00, 0xc0, 0x01, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x78, 0xc0, 0x03, 0x3f, 0x00, 0x00, 0xc0, 0x03,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0xc0, 0xc7, 0x3f,
   0x00, 0x00, 0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x3f, 0xc0, 0xcf, 0x0f, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xc0, 0x1f, 0x80, 0xff, 0x03, 0x00, 0x00, 0x80, 0x07,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0xff, 0x00,
   0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x03, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x07,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x3e, 0x00,
   0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e,
   0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x0f,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x0f, 0x00,
   0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1f,
   0x00, 0x80, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x80, 0x1f, 0x00, 0x80, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x1e,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x80, 0x07, 0x00,
   0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07,
   0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x80, 0x03, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x1c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 0x80, 0x03, 0x00,
   0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03,
   0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xc0, 0x03, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x1c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x80, 0x07, 0x00,
   0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03,
   0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x80, 0x03, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x3c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 0x80, 0x07, 0x00,
   0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07,
   0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x3c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x1f, 0x00,
   0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f,
   0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x1c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x7e, 0x00,
   0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e,
   0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xe0, 0x03,
   0x00, 0x06, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8,
   0x03, 0x00, 0xc0, 0x0f, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0xc0, 0xff, 0x3f, 0x0f, 0x00, 0x1e,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x1f, 0x00, 0x80, 0xff,
   0x7f, 0x06, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
   0x7f, 0x00, 0x00, 0xfc, 0x7f, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x01, 0xfc, 0x3f, 0x00, 0x00, 0x0f,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 0x3c,
   0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0xff, 0x03, 0x3c, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x01, 0x3c, 0x00, 0x00, 0x80, 0x07,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x3c,
   0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x70, 0x00, 0x00, 0x3c, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x3e, 0x00, 0x00, 0xc0, 0x03,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff,
   0x00, 0x00, 0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0xff, 0xff, 0xff, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x03, 0x00, 0xe0, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xf1,
   0x1f, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xfe, 0x3f, 0xe0, 0xff, 0xe3, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0x7f, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xfc, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00 };

#define iotlogo_width 128
#define iotlogo_height 28
static unsigned char iotlogo_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0xf0, 0x01,
   0xf0, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x1e, 0xc0, 0xf1, 0x71, 0xf8, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x1e, 0xe0, 0xf3, 0xf9, 0xf8, 0xff, 0x1f, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0xe0, 0xf3, 0xf9,
   0xf1, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x1e, 0xf0, 0xf3, 0xf9, 0x01, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x1e, 0xf8, 0xf1, 0xf1, 0x03, 0x3c, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0xf8, 0xf1, 0xf1,
   0x03, 0x3c, 0x80, 0x03, 0x00, 0x00, 0x06, 0x00, 0x30, 0x00, 0x00, 0x00,
   0x1e, 0xf8, 0xf0, 0xe1, 0x03, 0x3c, 0x80, 0x03, 0x00, 0x00, 0x06, 0x00,
   0x30, 0x00, 0x00, 0x00, 0x1e, 0xf8, 0xf0, 0xe1, 0x03, 0x3c, 0x00, 0x02,
   0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x7c, 0xf0, 0xc1,
   0x07, 0x3c, 0x00, 0x02, 0x00, 0x00, 0xc4, 0x00, 0x38, 0x00, 0x00, 0x00,
   0x1e, 0x7c, 0xe0, 0xc0, 0x07, 0x3c, 0x00, 0x02, 0x7e, 0xf0, 0xc7, 0x1f,
   0x38, 0xf0, 0xc1, 0x0f, 0x1e, 0x7c, 0x00, 0xc0, 0x07, 0x3c, 0x00, 0x02,
   0x83, 0x18, 0x84, 0x20, 0x20, 0x08, 0x62, 0x10, 0x1e, 0x7c, 0x00, 0xc0,
   0x07, 0x3c, 0x00, 0x02, 0xff, 0x08, 0x84, 0x20, 0x20, 0x08, 0xe0, 0x1f,
   0x1e, 0xf8, 0x00, 0xe0, 0x03, 0x3c, 0x00, 0x02, 0xff, 0x08, 0x84, 0x20,
   0x20, 0x08, 0xe0, 0x1f, 0x1e, 0xf8, 0x00, 0xe0, 0x03, 0x3c, 0x00, 0x02,
   0x01, 0x18, 0x84, 0x20, 0x20, 0x08, 0x22, 0x00, 0x1e, 0xf8, 0x01, 0xf0,
   0x03, 0x3c, 0xc0, 0x1f, 0xfe, 0xf0, 0xcf, 0x71, 0xfc, 0xf1, 0xc1, 0x1f,
   0x1e, 0xf0, 0x03, 0xf8, 0x01, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x1e, 0xf0, 0x0f, 0xfe, 0x01, 0x3c, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0xe0, 0xff, 0xff,
   0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x1e, 0xc0, 0xff, 0x7f, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0xff, 0x1f, 0x00, 0x3c, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0xfc, 0x07,
   0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00 };

#define hacek_width 3
#define hacek_height 2
static unsigned char hacek_bits[] = {
   0x05, 0x02 };

#define snakelogo_width 93
#define snakelogo_height 64
static unsigned char snakelogo_bits[] = {
   0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x01, 0x00,
   0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x30, 0xe0, 0x00, 0xc0, 0x03, 0x00,
   0x00, 0x00, 0xfe, 0x00, 0x00, 0x0f, 0x3c, 0xf0, 0x80, 0xf9, 0x03, 0x00,
   0x00, 0x00, 0xff, 0xc0, 0x83, 0x0f, 0x7f, 0xfc, 0xc0, 0xfb, 0x07, 0x00,
   0x00, 0x80, 0xff, 0xf9, 0x83, 0x0f, 0x7f, 0xfe, 0xe0, 0xff, 0x0f, 0x00,
   0x00, 0xc0, 0xff, 0xf9, 0xc3, 0x8f, 0x7f, 0xfe, 0xf0, 0xff, 0x0f, 0x00,
   0x00, 0xe0, 0xff, 0xf9, 0xc3, 0xcf, 0x7f, 0xfc, 0xf8, 0x7f, 0x00, 0x00,
   0x00, 0xe0, 0x7f, 0xf8, 0xc7, 0xe7, 0x7f, 0xf8, 0xfc, 0x3f, 0x00, 0x00,
   0x00, 0xf0, 0x0f, 0xfc, 0xc7, 0xe7, 0xff, 0xf8, 0xfe, 0x0f, 0x00, 0x00,
   0x00, 0xf0, 0x07, 0xfc, 0xc7, 0xe7, 0xff, 0xfe, 0x7f, 0x0f, 0x00, 0x00,
   0x00, 0xf8, 0x01, 0xfc, 0xcf, 0xe7, 0xfb, 0xff, 0x3f, 0xcf, 0x00, 0x00,
   0x00, 0xf8, 0x00, 0xf8, 0xdf, 0xf7, 0xf3, 0xff, 0x1f, 0xff, 0x01, 0x00,
   0x00, 0x7c, 0xf0, 0x77, 0xdf, 0xf7, 0xf1, 0xff, 0x0f, 0xfe, 0x01, 0x00,
   0x00, 0xfc, 0xff, 0x77, 0xfe, 0xf7, 0xfd, 0xef, 0x1f, 0x7e, 0x00, 0x00,
   0x00, 0xfc, 0xff, 0x77, 0xfe, 0xf7, 0xff, 0xf3, 0x3f, 0x3e, 0x03, 0x00,
   0x00, 0xfc, 0xff, 0x77, 0xfc, 0xff, 0xff, 0xf3, 0x7f, 0xbc, 0x07, 0x00,
   0x00, 0xf8, 0xe0, 0x77, 0xf8, 0xff, 0xff, 0xf7, 0xff, 0xfc, 0x07, 0x00,
   0x00, 0x00, 0xf8, 0x7f, 0xf8, 0xff, 0xe3, 0xf7, 0xfd, 0xfc, 0x03, 0x00,
   0x00, 0x00, 0xfc, 0x7f, 0xf0, 0xff, 0xc0, 0xe3, 0xf9, 0xf8, 0x01, 0x00,
   0x00, 0x00, 0xff, 0x7f, 0x00, 0x1e, 0x00, 0xe0, 0x21, 0x78, 0x00, 0x00,
   0x00, 0xc0, 0xff, 0x1f, 0x00, 0x0e, 0x00, 0x00, 0x21, 0x18, 0x00, 0x00,
   0x00, 0xf0, 0xff, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xf0, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xf0, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xf0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x60, 0x00, 0x00, 0x00, 0xf0, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xf8, 0xdf, 0xf3, 0x07, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xf8, 0xe3, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xf8, 0xf6, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x80, 0xff, 0xdf, 0xe0, 0x73, 0x0c, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xe0, 0xff, 0xff, 0x80, 0x7c, 0x18, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0x3f, 0x00, 0x6c, 0x18, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xc0, 0xff, 0xff, 0x0f, 0x00, 0xe0, 0x18, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xf8, 0xff, 0xff, 0xff, 0x03, 0xf0, 0x7f, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xfc, 0xff, 0x7f, 0x00, 0xe6, 0x3f, 0xff, 0x03, 0x00, 0x00, 0x00,
   0x00, 0xfe, 0xff, 0xc3, 0x00, 0xf8, 0x83, 0xff, 0x07, 0x00, 0x00, 0x00,
   0x00, 0xff, 0x7f, 0x80, 0xff, 0xff, 0xc3, 0xff, 0xff, 0x01, 0x00, 0x00,
   0x00, 0xff, 0x7f, 0x00, 0xff, 0xff, 0xe1, 0xff, 0xbd, 0x07, 0x00, 0x00,
   0x00, 0xff, 0x7f, 0x00, 0x7f, 0x7c, 0xe0, 0xff, 0x00, 0x1e, 0x0e, 0x00,
   0x80, 0xff, 0x7f, 0x00, 0x7e, 0x38, 0x38, 0x1f, 0x00, 0xb8, 0x1f, 0x00,
   0xe0, 0x9f, 0x7f, 0x00, 0x7c, 0x1c, 0xbc, 0x07, 0xfe, 0xe1, 0x31, 0x00,
   0xf0, 0xff, 0xff, 0x01, 0x78, 0x0e, 0xde, 0xc0, 0xff, 0xe3, 0x03, 0x00,
   0xf8, 0xff, 0xff, 0xff, 0x45, 0x07, 0xef, 0xf0, 0xff, 0xc3, 0x07, 0x00,
   0xfc, 0xff, 0xff, 0xff, 0xa1, 0x83, 0x77, 0xf8, 0xff, 0xc7, 0x1f, 0x00,
   0xfc, 0xff, 0xff, 0xff, 0xc1, 0xc1, 0x19, 0x7c, 0xfe, 0xc7, 0x3e, 0x00,
   0xfc, 0xff, 0xff, 0xff, 0xe1, 0xe0, 0x18, 0x7f, 0xff, 0x8f, 0x37, 0x0e,
   0xfc, 0xff, 0xff, 0xff, 0x70, 0x70, 0x0c, 0xfb, 0xff, 0xff, 0x37, 0x0e,
   0xfc, 0xff, 0xff, 0xdf, 0x38, 0x38, 0x8c, 0x59, 0xff, 0xff, 0x39, 0x0e,
   0xfc, 0xff, 0xdf, 0xd1, 0x1c, 0xec, 0x8f, 0xf9, 0xf8, 0x5f, 0x7d, 0x04,
   0xf8, 0xff, 0xff, 0x77, 0x0c, 0xf7, 0x8f, 0xf3, 0x01, 0x80, 0x7f, 0x0c,
   0xf0, 0xff, 0xbf, 0xb7, 0x06, 0xf3, 0x0f, 0xf7, 0x1f, 0xf0, 0x7f, 0x0c,
   0x80, 0xff, 0x9f, 0x7d, 0x83, 0xfd, 0x1b, 0xcc, 0xf9, 0xbf, 0xff, 0x08,
   0x60, 0xff, 0xdf, 0x7d, 0x83, 0xfe, 0x73, 0xd8, 0x01, 0x80, 0xff, 0x08,
   0xf8, 0xfd, 0x3f, 0x7b, 0xc1, 0xfe, 0x6f, 0x30, 0x01, 0xa0, 0xff, 0x08,
   0xfe, 0xfb, 0xff, 0x7b, 0xc1, 0xfc, 0xdf, 0x65, 0x1f, 0xf0, 0xff, 0x08,
   0xff, 0xf7, 0xff, 0x7b, 0xc1, 0xe3, 0xdf, 0xc7, 0x3e, 0xf8, 0xef, 0x08,
   0xff, 0xff, 0xff, 0x7b, 0x43, 0xff, 0xdf, 0xc3, 0x66, 0xdf, 0xdf, 0x0c,
   0xff, 0x9f, 0xff, 0x7d, 0x07, 0xfc, 0xff, 0x81, 0x02, 0xb0, 0xf7, 0x17,
   0xff, 0x7f, 0xfb, 0xfe, 0x0e, 0x00, 0x7f, 0xc0, 0x3e, 0xf8, 0xe3, 0x1f,
   0xfe, 0xff, 0x77, 0xfe, 0x7d, 0x00, 0x00, 0xe0, 0xfe, 0xff, 0xfe, 0x1f,
   0xe0, 0xff, 0xff, 0xfd, 0xff, 0x07, 0x00, 0xbc, 0xef, 0xff, 0xff, 0x01,
   0x00, 0xfe, 0x7f, 0xfd, 0x1f, 0xfe, 0xff, 0x87, 0xff, 0xff, 0x3f, 0x00 };
