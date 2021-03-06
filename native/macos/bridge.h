//
// Created by Fengda Huang  on 2020/7/8.
//

#ifndef TYPING_BRIDGE_H
#define TYPING_BRIDGE_H

#include <stdint.h>

extern "C" {
extern void * context_instance;

int32_t initialize(void * context);

typedef void (*KeypressCallback)(void * self, const char *buffer, int32_t len, int32_t event_type, int32_t key_code);

extern KeypressCallback keypress_callback;
void register_keypress_callback(KeypressCallback callback);

int32_t eventloop();

int32_t check_accessibility();
int32_t prompt_accessibility();

int32_t get_secure_input_process(int64_t *pid);
};

#endif //TYPING_BRIDGE_H
