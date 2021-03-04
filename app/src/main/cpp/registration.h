//
// Created by Jun GAO on 3/3/21.
//
#include <jni.h>

#ifndef NDK_CALLEE_REGISTRATION_H
#define NDK_CALLEE_REGISTRATION_H

#endif //NDK_CALLEE_REGISTRATION_H

static inline int registerNatives(JNIEnv* env, jclass cls, std::initializer_list<JNINativeMethod> methods) {
    int rc = env->RegisterNatives(cls, methods.begin(), methods.size());
    return rc;
}

