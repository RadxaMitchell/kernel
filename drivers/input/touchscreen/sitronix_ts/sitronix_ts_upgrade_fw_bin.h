#include <linux/firmware.h>

//#define ST_UPGRADE_BY_ISPID

#define ST_IC_A8008
//#define ST_IC_A8010
//#define ST_IC_A8015

#ifdef ST_IC_A8008
#define ST_DUMP_MAX_LEN 0x4000
#define ST_FLASH_SIZE 0x4000
#define CT_CFG_OFF 0x3F00
#endif

#ifdef ST_IC_A8010
#define ST_DUMP_MAX_LEN 0xC000
#define ST_FLASH_SIZE 0xC000
#define CT_CFG_OFF 0xBC00
#endif

#ifdef ST_IC_A8015
#define ST_DUMP_MAX_LEN 0x7FF0
#define ST_FLASH_SIZE 0x7FF0
#define CT_CFG_OFF 0x7E80
#endif

#define ISP_CMD_ERASE 0x80
#define ISP_CMD_SEND_DATA 0x81
#define ISP_CMD_WRITE_FLASH 0x82
#define ISP_CMD_READ_FLASH 0x83
#define ISP_CMD_RESET 0x84
#define ISP_CMD_UNLOCK 0x87
#define ISP_CMD_READY 0x8F

#define ISP_PACKET_SIZE 8

#define ST_FLASH_PAGE_SIZE 1024
#define ST_ISP_RETRY_MAX 2




//store upgrade dump array
#define SITRONIX_DUMP {\
0x00,0x01,0x02 \
}//example

#ifdef ST_UPGRADE_BY_ISPID

#define ISP_ID_OFFSET  0x43E7
#define SITRONIX_ISP_ID {\
0x13,0x41,\
0x13,0x32\
}

#define SITRONIX_DUMP1 {\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00\
}

#define SITRONIX_DUMP2 {\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00\
}

#endif	//ST_UPGRADE_BY_ISPID

