//
// Created by 钱欣 on 17/3/22.
//

#include <jni.h>
#include <stdio.h>
#include <string.h>
#include "bsdiff.h"
#include "bspatch.h"



JNIEXPORT void JNICALL
Java_com_example_qianxin_bspatchapplication_BsUtil_patch(JNIEnv *env, jclass type, jstring oldfile_, jstring newfile_,
                                    jstring patchfile_) {
    const char *oldfile = (*env)->GetStringUTFChars(env, oldfile_, 0);
    const char *newfile = (*env)->GetStringUTFChars(env, newfile_, 0);
    const char *patchfile = (*env)->GetStringUTFChars(env, patchfile_, 0);
    int argc = 4;
    // TODO
    char *argv[4];
    argv[0] = "bsdiff";
    argv[1] = oldfile;
    argv[2] = newfile;
    argv[3] = patchfile;

    bspatch_main(argc,argv);


    (*env)->ReleaseStringUTFChars(env, oldfile_, oldfile);
    (*env)->ReleaseStringUTFChars(env, newfile_, newfile);
    (*env)->ReleaseStringUTFChars(env, patchfile_, patchfile);
}

JNIEXPORT void JNICALL
Java_com_example_qianxin_bspatchapplication_BsUtil_diff(JNIEnv *env, jclass type, jstring oldfile_, jstring newfile_,
                                   jstring patchfile_) {
    int argc = 4;
    const char *oldfile = (*env)->GetStringUTFChars(env, oldfile_, 0);
    const char *newfile = (*env)->GetStringUTFChars(env, newfile_, 0);
    const char *patchfile = (*env)->GetStringUTFChars(env, patchfile_, 0);

    // TODO
//参数（第一个参数无效）
    char *argv[4];
    argv[0] = "bsdiff";
    argv[1] = oldfile;
    argv[2] = newfile;
    argv[3] = patchfile;

    bsdiff_main(argc,argv);
    (*env)->ReleaseStringUTFChars(env, oldfile_, oldfile);
    (*env)->ReleaseStringUTFChars(env, newfile_, newfile);
    (*env)->ReleaseStringUTFChars(env, patchfile_, patchfile);
}