class CfgUIGrids {
    class IGUI {
        class Presets {
            class Arma3 {
                class Variables {
                    diwako_dui_namelist[] = {
                        {
                            "0.5 + (pixelW * (128 / 2 + 10))",
                            "safeZoneY + safeZoneH - (pixelH * (128 + 10))",
                            "0.5 * safeZoneW - (pixelW * (128 / 2 + 10))",
                            "pixelH * (128 + 10)"
                        },
                        "0.5*(((safezoneW / safezoneH) min 1.2)/ 40)",
                        "0.5*((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)"
                    };
                    diwako_dui_compass[] = {
                        {
                            "((0.5) * safezoneW + safezoneX) - (pixelW * 64)",
                            "safeZoneY + safeZoneH - (pixelH * (128 + 10))",
                            "pixelW * 128",
                            "pixelH * 128"
                        },
                        "0.5*(((safezoneW / safezoneH) min 1.2)/ 40)",
                        "0.5*((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)"
                    };
                };
            };
        };

        class Variables {
            class diwako_dui_namelist {
                displayName = "$STR_dui_cat_namelist";
                description = "$STR_dui_cat_namelist_desc";
                preview = "#(argb,8,8,3)color(0,0,0,0.75)";
                saveToProfile[] = {0,1};
                canResize = 1;
            };
            class diwako_dui_compass {
                displayName = "$STR_dui_cat_compass";
                description = "$STR_dui_cat_compass_desc";
                preview = "diwako_dui\UI\compass_styles\standard\compass.paa";
                saveToProfile[] = {0,1};
                canResize = 1;
                keepAspectRatio = 1;
            };
        };
    };
};