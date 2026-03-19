idf_component_register(
    SRC_DIRS
        "."
        "channel"
        "core"
        "llm"
        "support"
        "tools"
    PRIV_INCLUDE_DIRS
        "."
        "support"
    PRIV_REQUIRES
        unity
        test_utils
        embed_claw
)

set(EC_TEST_DEFAULT_CONFIG_HEADER "${CMAKE_CURRENT_LIST_DIR}/ec_test_config.h")
set(EC_TEST_LOCAL_CONFIG_HEADER "${CMAKE_CURRENT_LIST_DIR}/ec_config.h")

if(NOT EXISTS "${EC_TEST_DEFAULT_CONFIG_HEADER}")
    message(FATAL_ERROR "Missing tracked test config header: ${EC_TEST_DEFAULT_CONFIG_HEADER}")
endif()

idf_component_get_property(embed_claw_lib embed_claw COMPONENT_LIB)

foreach(test_target ${COMPONENT_LIB} ${embed_claw_lib})
    if(EXISTS "${EC_TEST_LOCAL_CONFIG_HEADER}")
        target_compile_options(${test_target} PRIVATE
            "SHELL:-include ${EC_TEST_LOCAL_CONFIG_HEADER}"
        )
    endif()

    target_compile_options(${test_target} PRIVATE
        "SHELL:-include ${EC_TEST_DEFAULT_CONFIG_HEADER}"
    )
endforeach()
