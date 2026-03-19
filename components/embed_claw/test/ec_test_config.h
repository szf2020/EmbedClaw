#ifndef __EC_TEST_CONFIG_H__
#define __EC_TEST_CONFIG_H__

/*
 * Tracked test defaults for CI and clean checkouts.
 * Local overrides can be placed in components/embed_claw/test/ec_config.h.
 */

#ifndef EC_QQ_ENABLE
#define EC_QQ_ENABLE                1
#endif

#ifndef EC_QQ_APP_ID
#define EC_QQ_APP_ID                "test-app-id"
#endif

#ifndef EC_QQ_CLIENT_SECRET
#define EC_QQ_CLIENT_SECRET         "test-client-secret"
#endif

#endif // __EC_TEST_CONFIG_H__
