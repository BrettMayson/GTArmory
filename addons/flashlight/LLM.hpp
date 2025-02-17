// Black Variant - LLM01
class CUP_acc_LLM01_L;
class CLASS(LLM01_Laser_Black): CUP_acc_LLM01_L {
    displayName = "LLM01 Black (GT Edition)";
    MACRO_MULTI_1

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {
            MACRO_IR_POINTER_SETTINGS
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(LLM01_Light_Black);
    MRT_SwitchItemPrevClass = QCLASS(LLM01_Vis_Laser_Black);
    MRT_SwitchItemHintText = "IR Laser";
};

class CUP_acc_LLM01_F;
class CLASS(LLM01_Light_Black): CUP_acc_LLM01_F {
    displayName = "LLM01 Black (GT Edition)";
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_HI_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(LLM01_Low_Light_Black);
    MRT_SwitchItemPrevClass = QCLASS(LLM01_Laser_Black);
    MRT_SwitchItemHintText = "Flashlight Blue";
};

class CLASS(LLM01_Low_Light_Black): CUP_acc_LLM01_F {
    displayName = "LLM01 Black (GT Edition)";
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_LOW_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(LLM01_Vis_Laser_Black);
    MRT_SwitchItemPrevClass = QCLASS(LLM01_Light_Black);
    MRT_SwitchItemHintText = "Flashlight Red";
};

class CLASS(LLM01_Vis_Laser_Black): CUP_acc_LLM01_L {
    displayName = "LLM01 Black (GT Edition)";
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        class Pointer {};
        class Flashlight {
            MACRO_VIS_POINTER_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(LLM01_Laser_Black);
    MRT_SwitchItemPrevClass = QCLASS(LLM01_Low_Light_Black);
    MRT_SwitchItemHintText = "Visible Laser";
    ACE_LaserPointer = 1;
};

// Black Variant - LLM MKIII
class cup_acc_llm_black;
class CLASS(LLM_Laser_Black): cup_acc_llm_black {
    displayName = "LLM MKIII (GT Edition)";
    MACRO_MULTI_1

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {
            MACRO_IR_POINTER_SETTINGS
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(LLM_Light_Black);
    MRT_SwitchItemPrevClass = QCLASS(LLM_Vis_Laser_Black);
    MRT_SwitchItemHintText = "IR Laser";
};

class CUP_acc_LLM_black_Flashlight;
class CLASS(LLM_Light_Black): CUP_acc_LLM_black_Flashlight {
    displayName = "LLM MKIII (GT Edition)";
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_HI_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(LLM_Low_Light_Black);
    MRT_SwitchItemPrevClass = QCLASS(LLM_Laser_Black);
    MRT_SwitchItemHintText = "Flashlight Blue";
};

class CLASS(LLM_Low_Light_Black): CUP_acc_LLM_black_Flashlight {
    displayName = "LLM MKIII (GT Edition)";
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_LOW_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(LLM_Vis_Laser_Black);
    MRT_SwitchItemPrevClass = QCLASS(LLM_Light_Black);
    MRT_SwitchItemHintText = "Flashlight Red";
};

class CLASS(LLM_Vis_Laser_Black): cup_acc_llm_black {
    displayName = "LLM MKIII (GT Edition)";
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_VIS_POINTER_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(LLM_Laser_Black);
    MRT_SwitchItemPrevClass = QCLASS(LLM_Low_Light_Black);
    MRT_SwitchItemHintText = "Visible Laser";
    ACE_LaserPointer = 1;
};

