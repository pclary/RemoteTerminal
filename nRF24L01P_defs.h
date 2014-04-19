// SPI frequency
#define SPI_FREQUENCY 2000000

// SPI commands
#define R_REGISTER          0x00
#define W_REGISTER          0x20
#define R_RX_PAYLOAD        0x61
#define W_TX_PAYLOAD        0xa0
#define FLUSH_TX            0xe1
#define FLUSH_RX            0xe2
#define REUSE_TX_PL         0xe3
#define R_RX_PL_WID         0x60
#define W_ACK_PAYLOAD       0xa8
#define W_TX_PAYLOAD_NOACK  0xb0
#define NOP                 0xff

// Address masks
#define REGISTER_ADDRESS_MASK   0x1f
#define PIPE_MASK               0x07

// Register addresses
#define CONFIG      0x00
#define EN_AA       0x01
#define EN_RXADDR   0x02
#define SETUP_AW    0x03
#define SETUP_RETR  0x04
#define RF_CH       0x05
#define RF_SETUP    0x06
#define STATUS      0x07
#define OBSERVE_TX  0x08
#define RPD         0x09
#define RX_ADDR_P0  0x0a
#define RX_ADDR_P1  0x0b
#define RX_ADDR_P2  0x0c
#define RX_ADDR_P3  0x0d
#define RX_ADDR_P4  0x0e
#define RX_ADDR_P5  0x0f
#define TX_ADDR     0x10
#define RX_PW_P0    0x11
#define RX_PW_P1    0x12
#define RX_PW_P2    0x13
#define RX_PW_P3    0x14
#define RX_PW_P4    0x15
#define RX_PW_P5    0x16
#define FIFO_STATUS 0x17
#define DYNPD       0x1c
#define FEATURE     0x1d

// CONFIG bits
#define CONFIG_MASK_RX_DR  (1<<6)
#define CONFIG_MASK_TX_DS  (1<<5)
#define CONFIG_MASK_MAX_RT (1<<4)
#define CONFIG_EN_CRC      (1<<3)
#define CONFIG_CRC0        (1<<2)
#define CONFIG_PWR_UP      (1<<1)
#define CONFIG_PRIM_RX     (1<<0)

// EN_AA bits
#define ENAA_P5 (1<<5)
#define ENAA_P4 (1<<4)
#define ENAA_P3 (1<<3)
#define ENAA_P2 (1<<2)
#define ENAA_P1 (1<<1)
#define ENAA_P0 (1<<0)

// EN_RXADDR bits
#define ERX_P5 (1<<5)
#define ERX_P4 (1<<4)
#define ERX_P3 (1<<3)
#define ERX_P2 (1<<2)
#define ERX_P1 (1<<1)
#define ERX_P0 (1<<0)

// SETUP_AW values
#define SETUP_AW_3BYTES 0x01
#define SETUP_AW_4BYTES 0x02
#define SETUP_AW_5BYTES 0x03

// RF_SETUP bits
#define RF_SETUP_CONT_WAVE   (1<<7)
#define RF_SETUP_RF_DR_LOW   (1<<5)
#define RF_SETUP_PLL_LOCK    (1<<4)
#define RF_SETUP_RF_DR_HIGH  (1<<3)
#define RF_SETUP_RF_PWR_18   (0x0<<1)
#define RF_SETUP_RF_PWR_12   (0x1<<1)
#define RF_SETUP_RF_PWR_6    (0x2<<1)
#define RF_SETUP_RF_PWR_0    (0x3<<1)

// STATUS bits
#define STATUS_RX_DR            (1<<6)
#define STATUS_TX_DS            (1<<5)
#define STATUS_MAX_RT           (1<<4)
#define STATUS_RN_P_MASK        (0x7<<1)
#define STATUS_RN_P_NO_P0       (0x0<<1)
#define STATUS_RN_P_NO_P1       (0x1<<1)
#define STATUS_RN_P_NO_P2       (0x2<<1)
#define STATUS_RN_P_NO_P3       (0x3<<1)
#define STATUS_RN_P_NO_P4       (0x4<<1)
#define STATUS_RN_P_NO_P5       (0x5<<1)
#define STATUS_RN_P_NO_EMPTY    (0x7<<1)
#define STATUS_TX_FULL          (1<<0)

// FIFO_STATUS bits
#define FIFO_STATUS_TX_REUSE    (1<<6)
#define FIFO_STATUS_TX_FULL     (1<<5)
#define FIFO_STATUS_TX_EMPTY    (1<<4)
#define FIFO_STATUS_RX_FULL     (1<<1)
#define FIFO_STATUS_RX_EMPTY    (1<<0)

// DYNPD bits
#define DPL_P5  (1<<5)
#define DPL_P4  (1<<4)
#define DPL_P3  (1<<3)
#define DPL_P2  (1<<2)
#define DPL_P1  (1<<1)
#define DPL_P0  (1<<0)

// FEATURE bits
#define FEATURE_EN_DPL      (1<<2)
#define FEATURE_EN_ACK_PAY  (1<<1)
#define FEATURE_EN_DYN_ACK  (1<<0)

// Timing
#define TIMING_Tpd2stby     4500
#define TIMING_Tstby2a      130
#define TIMING_Thce         10
#define TIMING_Tpece2csn    4
#define TIMING_Tpor         100000
#define TIMING_Toa          41
#define TIMING_Tirq         6
