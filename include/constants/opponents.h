#ifndef GUARD_CONSTANTS_OPPONENTS_H
#define GUARD_CONSTANTS_OPPONENTS_H

#define TRAINER_NONE                          0
#define TRAINER_ANGELO                      1
#define TRAINER_DARIUS                      2
#define TRAINER_STEVEN                      3
#define TRAINER_ANABEL                      4
#define TRAINER_TUCKER                      5
#define TRAINER_SPENSER                     6
#define TRAINER_GRETA                       7
#define TRAINER_NOLAND                      8
#define TRAINER_LUCY                        9
#define TRAINER_BRANDON                     10
#define TRAINER_PHILLIP						11
#define TRAINER_EVO_TEST					12

// NOTE: Because each Trainer uses a flag to determine when they are defeated, there is only space for 9 additional trainers before trainer flag space overflows
//       More space can be made by shifting flags around in constants/flags.h or changing how trainer flags are handled
//       MAX_TRAINERS_COUNT can be increased but will take up additional saveblock space

#define TRAINERS_COUNT                      12
#define MAX_TRAINERS_COUNT                  864

#endif  // GUARD_CONSTANTS_OPPONENTS_H
