#ifndef __SWD_PHYSICALLAYER_H
#define __SWD_PHYSICALLAYER_H

//SMALL LA with the improperly wired 245
// PB0 N/A 
// PB1 Y (CH0)
// PB2 Y (CH1)
// PB3 Y (CH2)

// PB4 Y (CH5)
// PB5 Y (CH6)
// PB6 Y (CH7)
// PB7 Y (CH3)

// was PD0
#define SWDIO_PRT       IOB
#define SWDIO_PIN       IOB_0
#define SWDIO_PRT_CTL   OEB
#define SWDIO_PIN_NO    0

// was PD1
#define SWDCK_PRT       IOB
#define SWDCK_PIN       IOB_1
#define SWDCK_PRT_CTL   OEB
#define SWDCK_PIN_NO    1

// was PB2
#define XRES_PRT        IOB
#define XRES_PIN        IOB_2
#define XRES_PRT_CTL    OEB
#define XRES_PIN_NO     2

#define SWDIO_OUTPUT_HIGH      (SWDIO_PIN = 1)
#define SWDIO_OUTPUT_LOW       (SWDIO_PIN = 0)

#define SWDCK_OUTPUT_HIGH      (SWDCK_PIN = 1)
#define SWDCK_OUTPUT_LOW       (SWDCK_PIN = 0)

#define XRES_OUTPUT_HIGH       (XRES_PIN = 1)
#define XRES_OUTPUT_LOW        (XRES_PIN = 0)

#define SWDIO_OUTPUT_ENABLE	   (SWDIO_PRT_CTL |= (1 << SWDIO_PIN_NO))
#define SWDIO_OUTPUT_DISABLE   (SWDIO_PRT_CTL &= ~(1 << SWDIO_PIN_NO))

#define SWDCK_OUTPUT_ENABLE	   (SWDCK_PRT_CTL |= (1 << SWDCK_PIN_NO))
#define SWDCK_OUTPUT_DISABLE   (SWDCK_PRT_CTL &= ~(1 << SWDCK_PIN_NO))

#define XRES_OUTPUT_ENABLE	   (XRES_PRT_CTL |= (1 << XRES_PIN_NO))
#define XRES_OUTPUT_DISABLE	   (XRES_PRT_CTL &= ~(1 << XRES_PIN_NO))

#endif /* __SWD_PHYSICALLAYER_H */

/*[] END OF FILE */
