kcoreaddons_add_plugin(konsole_randomcolorsplugin
    SOURCES
        randomcolorsplugin.cpp
    INSTALL_NAMESPACE
        "konsoleplugins"
)

configure_file(konsole_randomcolors.in.json konsole_randomcolors.json)

target_link_libraries(konsole_randomcolorsplugin
    konsoleprivate
    konsoleapp
)
