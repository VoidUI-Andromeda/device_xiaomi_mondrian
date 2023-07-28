/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>
#include <libinit_utils.h>

#include "vendor_init.h"

#define FINGERPRINT_GL "POCO/mondrian_global/mondrian:13/SKQ1.220303.001/V14.0.4.0.TMNMIXM:user/release-keys"
#define FINGERPRINT_CN "Redmi/mondrian/mondrian:13/SKQ1.220303.001/V14.0.26.0.TMNCNXM:user/release-keys"

static const variant_info_t mondrian_global_info = {
    .hwc_value = "GL",
    .sku_value = "",

    .brand = "POCO",
    .device = "mondrian",
    .marketname = "POCO F5 Pro",
    .model = "23013PC75G",
    .mod_device = "mondrian_global",
    .build_fingerprint = FINGERPRINT_GL,
};

static const variant_info_t mondrian_info = {
    .hwc_value = "CN",
    .sku_value = "",

    .brand = "Redmi",
    .device = "mondrian",
    .marketname = "Redmi K60",
    .model = "23013RK75C",
    .mod_device = "mondrian",
    .build_fingerprint = FINGERPRINT_CN,
};

static const std::vector<variant_info_t> variants = {
    mondrian_global_info,
    mondrian_info,
};

void vendor_load_properties() {
    set_dalvik_heap();
    search_variant(variants);

    // SafetyNet workaround
    property_override("ro.boot.verifiedbootstate", "green");
}
