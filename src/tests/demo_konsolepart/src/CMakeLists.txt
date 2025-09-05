set(demo_konsolepart_SRCS
    main.cpp
    demo_konsolepart.cpp
)

add_executable(demo_konsolepart ${demo_konsolepart_SRCS})

target_link_libraries(demo_konsolepart
    ${KF_PREFIX}::CoreAddons
    ${KF_PREFIX}::I18n
    ${KF_PREFIX}::Parts
    ${KF_PREFIX}::Service
    Qt::Widgets
    ${KF_PREFIX}::XmlGui
    ${KF_PREFIX}::WindowSystem
)
