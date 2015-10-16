LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES := MemoryEater.cpp
LOCAL_STATIC_LIBRARIES += \
	libcutils \
	libutils \
	liblog

LOCAL_MODULE := memoryeater
LOCAL_MODULE_TAGS := optional

include $(BUILD_EXECUTABLE)
