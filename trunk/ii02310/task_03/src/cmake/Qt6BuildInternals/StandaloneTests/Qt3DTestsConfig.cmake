# TODO: Ideally this should look for each Qt module separately, with each module's specific version,
# bypassing the Qt6 Config file, aka find_package(Qt6SpecificFoo) repated x times. But it's not
# critical.
find_package(Qt6 6.6.0
             REQUIRED COMPONENTS 3DCore 3DLogic 3DInput 3DRender 3DExtras 3DAnimation 3DQuick 3DQuickRender 3DQuickScene2D 3DQuickExtras 3DQuickInput 3DQuickAnimation)
