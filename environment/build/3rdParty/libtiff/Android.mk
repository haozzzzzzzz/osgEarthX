LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libtiff

ifeq ($(TARGET_ARCH_ABI),armeabi-v7a)
LOCAL_ARM_NEON := true
endif
LOCAL_SRC_FILES :=  tif_color.c tif_dirread.c   tif_extension.c  tif_getimage.c  tif_lzw.c tif_packbits.c  tif_read.c tif_tile.c tif_aux.c tif_compress.c  tif_dirwrite.c  tif_fax3.c tif_jbig.c tif_next.c   tif_pixarlog.c  tif_strip.c tif_unix.c tif_write.c tif_close.c  tif_dir.c tif_dumpmode.c  tif_fax3sm.c tif_jpeg.c tif_ojpeg.c  tif_predict.c tif_swab.c tif_version.c  tif_zip.c tif_codec.c  tif_dirinfo.c   tif_error.c tif_flush.c tif_luv.c tif_open.c tif_print.c tif_thunder.c  tif_warning.c

LOCAL_CFLAGS := 

LOCAL_C_INCLUDES :=  $(LOCAL_PATH)

include $(BUILD_STATIC_LIBRARY)
