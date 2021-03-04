#ifndef __define_H__
#define __define_H__



#define DT_N_ALIAS_led0_STATUS_okay 1
#define DT_PROP(node_id, prop) DT_CAT(node_id, _P_##prop)


#define DT_CAT(a1, a2) a1 ## a2



#define Z_IS_ENABLED3(ignore_this, val, ...) val



// #define Z_IS_ENABLED2(one_or_two_args) Z_IS_ENABLED3(one_or_two_args 1, 0)
#define Z_IS_ENABLED2(one_or_two_args)  one_or_two_args



#define _XXXX1 _YYYY,


#define Z_IS_ENABLED1(config_macro) Z_IS_ENABLED2(_XXXX##config_macro)

#define IS_ENABLED(config_macro) Z_IS_ENABLED1(config_macro)


#define DT_NODE_HAS_STATUS_INTERNAL(node_id, status) \
	Z_IS_ENABLED1(DT_CAT(node_id, _STATUS_ ## status))
    
#define DT_NODE_HAS_STATUS(node_id, status) \
	DT_NODE_HAS_STATUS_INTERNAL(node_id, status)

#endif




// DT_NODE_HAS_STATUS(DT_N_ALIAS_led0, okay)==>DT_NODE_HAS_STATUS_INTERNAL(DT_N_ALIAS_led0, okay)
// ==>IS_ENABLED(DT_CAT(DT_N_ALIAS_led0, _STATUS_okay))==>Z_IS_ENABLED1(DT_N_ALIAS_led0_STATUS_okay)
// ==>Z_IS_ENABLED1(1)==>Z_IS_ENABLED2(_XXXX1)


// DT_NODE_HAS_STATUS(DT_N_ALIAS_led0, okay)==>DT_NODE_HAS_STATUS_INTERNAL(DT_N_ALIAS_led0, okay)
// ==>Z_IS_ENABLED1(DT_CAT(DT_N_ALIAS_led0, _STATUS_okay))==>Z_IS_ENABLED2(_XXXXDT_CAT(DT_N_ALIAS_led0, _STATUS_okay))




