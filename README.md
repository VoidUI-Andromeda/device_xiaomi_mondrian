# Device tree for Poco F5 Pro | Redmi K60

## Known issues
- SELinux allows NEVERALLOWS, because using sysbta.
- UDFPS not work
- No option to change screen resolution from QHD+ to FHD+
- Need manually update CUSTOM_VERSION flag for different roms
- No support of Dolby Vision (No fix found), No Dolby Atmos either (Can be picked from Alioth DT)

## Required system patches

### Bluetooth:
- https://github.com/VoidUI-Andromeda/packages_modules_Bluetooth/commit/927b470e61520b3e00f51f192389732aa16e9a92
- https://github.com/VoidUI-Andromeda/frameworks_av/commit/06731187cb2b51414e3535f42faa2f79d5521be0
- https://github.com/VoidUI-Andromeda/frameworks_av/commit/c43164432796896b8adbb8baf652cc2b8bdacbaa

### Parts if building PE:
- https://github.com/VoidUI-Andromeda/packages_resources_devicesettings/commit/7f96b46766f2b40c12ce99ebcc59e700f488f5ab
- https://github.com/VoidUI-Andromeda/frameworks_base/commit/3e21d5bfd4ccf942faa832b104b74655a77f0c7f

### Vibrator (VibratorFeature support):
- https://github.com/VoidUI-Andromeda/VoidUI-Andromeda/frameworks_native/commit/eec8dfbad3fe59b75845c9f137bf712bde6512f9

## How-To:
### Update kernel / kernel headers:
- https://github.com/VoidUI-Andromeda/device_xiaomi_mondrian/commit/9ad812236440062115def46fbcdb3960b6dbdc6a

## Vendor repository:
- https://gitlab.com/VoidUI/vendor_xiaomi_mondrian
