#include "datatypes.h"

mapfile_data_t map = {
    .size = {
        .y = 13,
        .x = 46,
    },
    .cursor = {
        .y = 2,
        .x = 10,
    },
    .exit = {
        .y = 2,
        .x = 10,
    },
    .gems = {
        .count = 0,
    },
    .data = {
        "+++++++++++++++++++++++++++++++++++++++++++++",
        "+                                           +",
        "+ You-are---.                               +",
        "+                                           +",
        "+ The-objective-is-to-reach-a-yellow-'door' +",
        "+ after-collecting-all-the-gems.            +",
        "+                                           +",
        "+ Unlock-'keys'-(by-going-over-them)-to-use +",
        "+ them-for-moving-around.                   +",
        "+                                           +",
        "+ Complete-each-task-in-least-number-of-key +",
        "+ strokes-to-score-higher.                  +",
        "+                                           +",
        "+++++++++++++++++++++++++++++++++++++++++++++",
    }
};