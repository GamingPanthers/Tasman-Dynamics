class CfgPatches {
    class roc_main {
        name = "ROC Main";
        author = "The ROC Team";
        url = "https://the-roc.com";
        requiredVersion = 0.1;
        requiredAddons[] = {
            "A3_Data_F"
            };
        units[] = {
            "roc_static"
            };
        weapons[] = {};
    };
};

class CfgVehicles {
    class static;
    class roc_static: static {
        scope = 2;
        displayName = "The Roc Static";
        model = "\z\roc\addons\roc-main\models\roc_static_test.p3d";
        vehicleClass = "Structures";
        editorCategory = "ROC";
        editorSubcategory = "ROC_Structures";
    };
};
