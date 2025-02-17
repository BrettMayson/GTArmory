#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(ANPEQ_15_Laser_Black),
            QCLASS(ANPEQ_15_Light_Black),
            QCLASS(ANPEQ_15_Low_Light_Black),
            QCLASS(ANPEQ_15_Vis_Laser_Black),
            QCLASS(ANPEQ_15_Laser_OD),
            QCLASS(ANPEQ_15_Light_OD),
            QCLASS(ANPEQ_15_Low_Light_OD),
            QCLASS(ANPEQ_15_Vis_Laser_OD),
            QCLASS(ANPEQ_15_Laser_Tan),
            QCLASS(ANPEQ_15_Light_Tan),
            QCLASS(ANPEQ_15_Low_Light_Tan),
            QCLASS(ANPEQ_15_Vis_Laser_Tan),
            QCLASS(ANPEQ_15_Top_Laser_Black),
            QCLASS(ANPEQ_15_Top_Light_Black),
            QCLASS(ANPEQ_15_Top_Low_Light_Black),
            QCLASS(ANPEQ_15_Top_Vis_Laser_Black),
            QCLASS(ANPEQ_15_Top_Laser_Tan),
            QCLASS(ANPEQ_15_Top_Light_Tan),
            QCLASS(ANPEQ_15_Top_Low_Light_Tan),
            QCLASS(ANPEQ_15_Top_Vis_Laser_Tan),
            QCLASS(ANPEQ_15_Top_Laser_OD),
            QCLASS(ANPEQ_15_Top_Light_OD),
            QCLASS(ANPEQ_15_Top_Low_Light_OD),
            QCLASS(ANPEQ_15_Top_Vis_Laser_OD),
            QCLASS(LLM01_Laser_Black),
            QCLASS(LLM01_Light_Black),
            QCLASS(LLM01_Low_Light_Black),
            QCLASS(LLM01_Vis_Laser_Black),
            QCLASS(LLM_Laser_Black),
            QCLASS(LLM_Light_Black),
            QCLASS(LLM_Low_Light_Black),
            QCLASS(LLM_Vis_Laser_Black),
            QCLASS(Surefire_Flashlight_Black),
            QCLASS(Surefire_Low_Flashlight_Black),
            QCLASS(Surefire_Flashlight_OD),
            QCLASS(Surefire_Low_Flashlight_OD),
            QCLASS(Surefire_Flashlight_Tan),
            QCLASS(Surefire_Low_Flashlight_Tan),
            QCLASS(UTG_Flashlight),
            QCLASS(UTG_Low_Flashlight),
            QCLASS(CZ_M3X_Laser),
            QCLASS(CZ_M3X_Light),
            QCLASS(CZ_M3X_Vis_Laser),
            QCLASS(MLPLS_Laser),
            QCLASS(MLPLS_Vis_Laser)
        };
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "CUP_Weapons_West_Attachments"};
        author = ECSTRING(main,Authors);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo {
    class compatibleItems {
        tacgt_Surefire_Low_Flashlight_Tan = 1;
        tacgt_ANPEQ_15_Light_Black = 1;
        tacgt_ANPEQ_15_Low_Light_Black = 1;
        tacgt_ANPEQ_15_Laser_Black = 1;
        tacgt_ANPEQ_15_Vis_Laser_Black = 1;
        tacgt_ANPEQ_15_Light_OD = 1;
        tacgt_ANPEQ_15_Low_Light_OD = 1;
        tacgt_ANPEQ_15_Laser_OD = 1;
        tacgt_ANPEQ_15_Vis_Laser_OD = 1;
        tacgt_ANPEQ_15_Light_Tan = 1;
        tacgt_ANPEQ_15_Low_Light_Tan = 1;
        tacgt_ANPEQ_15_Laser_Tan = 1;
        tacgt_ANPEQ_15_Vis_Laser_Tan = 1;
        tacgt_ANPEQ_15_Top_Laser_Black = 1;
        tacgt_ANPEQ_15_Top_Light_Black = 1;
        tacgt_ANPEQ_15_Top_Low_Light_Black = 1;
        tacgt_ANPEQ_15_Top_Vis_Laser_Black = 1;
        tacgt_ANPEQ_15_Top_Light_Tan = 1;
        tacgt_ANPEQ_15_Top_Low_Light_Tan = 1;
        tacgt_ANPEQ_15_Top_Laser_Tan = 1;
        tacgt_ANPEQ_15_Top_Vis_Laser_Tan = 1;
        tacgt_ANPEQ_15_Top_Light_OD = 1;
        tacgt_ANPEQ_15_Top_Low_Light_OD = 1;
        tacgt_ANPEQ_15_Top_Laser_OD = 1;
        tacgt_ANPEQ_15_Top_Vis_Laser_OD = 1;
        tacgt_LLM01_Laser_Black = 1;
        tacgt_LLM01_Light_Black = 1;
        tacgt_LLM01_Low_Light_Black = 1;
        tacgt_LLM01_Vis_Laser_Black = 1;
        tacgt_LLM_Laser_Black = 1;
        tacgt_LLM_Light_Black = 1;
        tacgt_LLM_Low_Light_Black = 1;
        tacgt_LLM_Vis_Laser_Black = 1;
        tacgt_Surefire_Flashlight_Black = 1;
        tacgt_Surefire_Low_Flashlight_Black = 1;
        tacgt_Surefire_Flashlight_OD = 1;
        tacgt_Surefire_Low_Flashlight_OD = 1;
        tacgt_Surefire_Flashlight_Tan = 1;
        tacgt_UTG_Flashlight = 1;
        tacgt_UTG_Low_Flashlight = 1;
    };
};

class asdg_PistolUnderRail: asdg_SlotInfo {
    class compatibleItems {
        tacgt_CZ_M3X_Laser = 1;
        tacgt_CZ_M3X_Light = 1;
        tacgt_CZ_M3X_Vis_Laser = 1;
        tacgt_MLPLS_Laser = 1;
        tacgt_MLPLS_Vis_Laser = 1;
    };
};

#include "CfgWeapons.hpp"
