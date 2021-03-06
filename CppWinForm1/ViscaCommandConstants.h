#pragma once

#define VISCA_COMMAND_HEADER	0x01
#define VISCA_DATA_HEADER		0x04
#define VISCA_INQUIERY_HEADER	0x09
#define VISCA_SEND_HEADER		0x80

#define VISCA_ZOOM_DIRECT		0x47
#define VISCA_PAN_TILT			0x06
#define VISCA_ABS_POS			0x02
#define VISCA_RESET_CAMERA		0x05
#define VISCA_PAN_TILT_POS		0x12

#define VISCA_SPEED_TILT_MAX	0x14 
#define VISCA_SPEED_PAN_MAX		0x18 
#define VISCA_AUTO_FOCUS		0x18

#define VISCA_BROADCAST			0x88
#define VISCA_TERMINATOR		0xff

#define VISCA_PAN_MAX_POS       816
#define VISCA_PAN_MIN_POS		0
#define VISCA_TILT_MAX_POS		212
#define VISCA_TILT_MIN_POS		0
#define VISCA_ZOOM_MAX_VAL		2857
#define VISCA_ZOOM_MIN_VAL		0

#define CAMERA_NEUTRAL_PAN		408
#define CAMERA_NEUTRAL_TILT		126

