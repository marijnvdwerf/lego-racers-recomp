#include "ovl_patches.hpp"
//#include "../../RecompiledPatches/patches_bin.h"
//#include "../../RecompiledPatches/recomp_overlays.inl"

#include "librecomp/overlays.hpp"
#include "librecomp/game.hpp"

void zelda64::register_patches() {
    //recomp::overlays::register_patches(mm_patches_bin, sizeof(mm_patches_bin), section_table, ARRLEN(section_table));
}

extern "C" void osPfsIsPlug_recomp(uint8_t* rdram, recomp_context * ctx) {
}

extern "C" void __osEnqueueAndYield_recomp(uint8_t* rdram, recomp_context * ctx) {
}
