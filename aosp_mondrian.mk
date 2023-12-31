#
# Copyright (C) 2023 The Android Open Source Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit some common AOSP stuff.
$(call inherit-product, vendor/aosp/config/common_full_phone.mk)

# Inherit available feature flags
TARGET_FACE_UNLOCK_SUPPORTED := true
TARGET_GAPPS_ARCH := arm64
TARGET_INCLUDE_LIVE_WALLPAPERS := true
TARGET_INCLUDE_STOCK_ARCORE := true
TARGET_SUPPORTS_QUICK_TAP := true
TARGET_SUPPORTS_CALL_RECORDING := true
TARGET_USES_AOSP_RECOVERY := true

# Disable Google Recorder
# Records via external microphone by default
TARGET_SUPPORTS_GOOGLE_RECORDER := false

# VoidUI Maintainer Flags
VOID_MAINTAINER := johnmart19
CUSTOM_BUILD_TYPE := OFFICIAL

# Inherit from mondrian device.
$(call inherit-product, device/xiaomi/mondrian/device.mk)

## Device identifier
PRODUCT_DEVICE := mondrian
PRODUCT_NAME := aosp_mondrian
PRODUCT_MANUFACTURER := Xiaomi

# GMS
PRODUCT_GMS_CLIENTID_BASE := android-xiaomi
