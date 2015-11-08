LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libpng

ifeq ($(TARGET_ARCH_ABI),armeabi-v7a)
LOCAL_ARM_NEON := true
endif

LOCAL_SRC_FILES :=   pngrtran.c png.c pngwrite.c pngmem.c pngget.c pngrio.c pngset.c pngrutil.c pngtrans.c pngwio.c pngread.c pngtest.c pngerror.c pngwutil.c pngpread.c pngwtran.c

LOCAL_CFLAGS := 

LOCAL_C_INCLUDES :=  $(LOCAL_PATH)

include $(BUILD_STATIC_LIBRARY)
