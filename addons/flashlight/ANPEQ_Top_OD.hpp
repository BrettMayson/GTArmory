class cup_acc_anpeq_15_top_flashlight_od_l;
class CLASS(ANPEQ_15_Top_Laser_OD): cup_acc_anpeq_15_top_flashlight_od_l {
    displayName = CSTRING(ANPEQ_15_Top_Laser_Light_OD_Display);
    MACRO_MULTI_1

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {
            MACRO_IR_POINTER_SETTINGS
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Light_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Vis_Laser_OD);
};

class cup_acc_anpeq_15_top_flashlight_od_f;
class CLASS(ANPEQ_15_Top_Light_OD): cup_acc_anpeq_15_top_flashlight_od_f {
    displayName = CSTRING(ANPEQ_15_Top_Laser_Light_OD_Display);
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_HI_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Low_Light_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Laser_OD);
};

class CLASS(ANPEQ_15_Top_Low_Light_OD): cup_acc_anpeq_15_top_flashlight_od_f {
    displayName = CSTRING(ANPEQ_15_Top_Laser_Light_OD_Display);
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_LOW_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Vis_Laser_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Light_OD);
};

class cup_acc_anpeq_15_top_flashlight_od_v;
class CLASS(ANPEQ_15_Top_Vis_Laser_OD): cup_acc_anpeq_15_top_flashlight_od_v {
    displayName = CSTRING(ANPEQ_15_Top_Laser_Light_OD_Display);
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_VIS_POINTER_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Laser_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Low_Light_OD);
};
